#ifndef PLUGIN_H
#define PLUGIN_H

#include <Wt/Dbo/Dbo>
#include <Wt/Dbo/WtSqlTraits>
#include <Wt/WDateTime>

#include "Table.h"

class Value;
class HistoricalValue;
class Information2;
class Addon;

class Plugin : public Table
{
    public:
        Plugin();
        virtual ~Plugin();

        Wt::Dbo::collection<Wt::Dbo::ptr<Value> > values;
        Wt::Dbo::collection<Wt::Dbo::ptr<HistoricalValue> > historicalValues;
        Wt::Dbo::collection<Wt::Dbo::ptr<Information2> > informations;
        Wt::Dbo::collection<Wt::Dbo::ptr<Addon> > addons;

        template<class Action>
        void persist(Action& a)
        {
            //User id as foreign key in other tables
            Wt::Dbo::hasMany(a,
                             values,
                             Wt::Dbo::ManyToOne,
                             "VPL");
            Wt::Dbo::hasMany(a,
                             historicalValues,
                             Wt::Dbo::ManyToOne,
                             "HPL");

            //TJ
            Wt::Dbo::hasMany(a,
                             informations,
                             Wt::Dbo::ManyToMany,
                             "TJ_INF_PLG");
            Wt::Dbo::hasMany(a,
                             addons,
                             Wt::Dbo::ManyToMany,
                             "TJ_ADO_PLG"); 
       }
    protected:
    private:
};

#endif // PLUGIN_H

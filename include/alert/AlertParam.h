#ifndef ALERTPARAM_H
#define ALERTPARAM_H

#include "Table.h"

#include <Wt/Dbo/Dbo>
#include <Wt/Dbo/WtSqlTraits>

#include "AlertValue.h"
#include "AlertCriteria.h"
#include "AlertType.h"
#include "Alert.h"

class AlertValue;
class AlertCriteria;

class AlertParam : public Table
{
    public:
        AlertParam();
        virtual ~AlertParam();
        
        static std::string TRIGRAM;
        
        std::string name;
        std::string format;
        Wt::WDateTime deleteTag;
        
        Wt::Dbo::collection<Wt::Dbo::ptr<AlertValue> > alertValues;
        Wt::Dbo::collection<Wt::Dbo::ptr<AlertCriteria> > alertCriterias;
        
        template<class Action>
        void persist(Action& a)
        {
            Wt::Dbo::hasMany(a,
                             alertValues,
                             Wt::Dbo::ManyToOne,
                             "APA");
            Wt::Dbo::hasMany(a,
                             alertCriterias,
                             Wt::Dbo::ManyToMany,
                             "TJ_ACR_APA");
            mapClassAttributesStrings["NAME"]=this->name;
            mapClassAttributesStrings["FORMAT"]=this->format;
            mapClassAttributesDates["DELETE"]=this->deleteTag;

        }
        
    protected:
    private:
};

#endif // ALERTPARAM_H

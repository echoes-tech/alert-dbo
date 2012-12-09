#ifndef INFORMATIONHISTORICALVALUE_H
#define INFORMATIONHISTORICALVALUE_H

#include <Wt/Dbo/Dbo>

#include "tools/MainIncludeFile.h"

#include "primaryKeys/InformationId.h"

class Plugin;
class Syslog;
class Information2;



class InformationHistoricalValue : public Table
{
    public:
        InformationHistoricalValue();
        virtual ~InformationHistoricalValue();
        
        static std::string TRIGRAM;
        
        Wt::WDateTime creationDate;        
        Wt::WString value;
        
        short state;
        int lotNumber;
        int lineNumber;
        
        Wt::Dbo::ptr<Asset> asset;
//        Wt::Dbo::ptr<Syslog> syslog;
        Wt::Dbo::ptr<SyslogHistory> syslogHistory;
        Wt::Dbo::ptr<Information2> information;

        template<class Action>
        void persist(Action& a)
        {
            mapClassAttributesDates["CREA_DATE"]=&this->creationDate;
            mapClassAttributesStrings["VALUE"]=&this->value;
            mapClassAttributesShorts["STATE"]=&this->state;
            mapClassAttributesInts["LOT_NUM"]=&this->lotNumber;
            mapClassAttributesInts["LINE_NUM"]=&this->lineNumber;
            FIELD_FILLER();
            Wt::Dbo::belongsTo(a, asset, TRIGRAM_INFORMATION_HISTORICAL_VALUE SEP TRIGRAM_ASSET);
//            Wt::Dbo::belongsTo(a, syslog, TRIGRAM_INFORMATION_HISTORICAL_VALUE SEP TRIGRAM_SYSLOG, Wt::Dbo::OnDeleteSetNull);
            Wt::Dbo::belongsTo(a, syslogHistory, TRIGRAM_INFORMATION_HISTORICAL_VALUE SEP TRIGRAM_SYSLOG_HISTORY, Wt::Dbo::OnDeleteSetNull);
            Wt::Dbo::field(a,information, TRIGRAM_INFORMATION ID);
        }

    protected:
    private:
};

#endif // INFORMATIONHISTORICALVALUE_H

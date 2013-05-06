/* 
 * File:   AlertMessageDefinition.h
 * Author: tsa
 *
 * Created on 22 février 2013, 16:35
 */

#ifndef ALERTMESSAGEDEFINITION_H
#define	ALERTMESSAGEDEFINITION_H

#include "tools/MainIncludeFile.h"
#include <Wt/Dbo/Dbo>

#include "primaryKeys/AlertMessageDefinitionId.h"

class AlertMessageDefinition : public Table
{
    public:
        AlertMessageDefinition();
        AlertMessageDefinition(const AlertMessageDefinition& orig);
        virtual ~AlertMessageDefinition();

        static std::string TRIGRAM;

        Wt::WString message;
        bool isCustom;

        AlertMessageDefinitionId pk;

        template<class Action>
        void persist(Action& a)
        {
            mapClassAttributesStrings["MESSAGE"]=&this->message;
            mapClassAttributesBools["IS_CUSTOM"]=&this->isCustom;
            FIELD_FILLER();

            Wt::Dbo::id (a, pk, TRIGRAM_ALERT_MESSAGE_DEFINITION SEP ID);

        }

        virtual std::string toJSON();

    private:

};

#endif	/* ALERTMESSAGEDEFINITION_H */


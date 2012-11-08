/* 
 * File:   InformationSubUnit.h
 * Author: tsa
 *
 * Created on 8 novembre 2012, 17:36
 */

#ifndef INFORMATIONSUBUNIT_H
#define	INFORMATIONSUBUNIT_H

#include "tools/MainIncludeFile.h"
#include <Wt/Dbo/Dbo>

class InformationSubUnit : public Table 
{
public:
    InformationSubUnit();
    InformationSubUnit(const InformationSubUnit& orig);
    virtual ~InformationSubUnit();
    
    static std::string TRIGRAM;
    int factor;
    Wt::WString name;
    
    Wt::Dbo::ptr<InformationUnit> informationUnit;
    
    template<class Action>
    void persist(Action& a)
    {
        mapClassAttributesStrings["NAME"]=&this->name;
        mapClassAttributesInts["NAME"]=&this->factor;

        FIELD_FILLER();

        Wt::Dbo::belongsTo(a, informationUnit, TRIGRAM_INFORMATION_SUB_UNIT SEP TRIGRAM_INFORMATION_UNIT);

    }
    
private:

};

#endif	/* INFORMATIONSUBUNIT_H */


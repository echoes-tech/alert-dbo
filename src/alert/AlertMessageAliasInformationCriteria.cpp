/* 
 * File:   AlertMessageAliasInformationCriteria.cpp
 * Author: tsa
 * 
 * Created on 25 février 2013, 18:40
 */

#include "alert/AlertMessageAliasInformationCriteria.h"

std::string AlertMessageAliasInformationCriteria::TRIGRAM(TRIGRAM_ALERT_MESSAGE_ALIAS_INFORMATION_CRITERIA);

AlertMessageAliasInformationCriteria::AlertMessageAliasInformationCriteria()
{
    this->jsonName = "alert_message_alias_information_criteria";
}

AlertMessageAliasInformationCriteria::AlertMessageAliasInformationCriteria(const AlertMessageAliasInformationCriteria& orig)
{
}

AlertMessageAliasInformationCriteria::~AlertMessageAliasInformationCriteria()
{
}

std::string AlertMessageAliasInformationCriteria::toJSON()
{
    std::string res = "{\n";
    res += Table::toJSON();
    res += "\"id\" : {\n" + boost::lexical_cast<std::string>(this->pk) + " }\n";
    res += "}\n";
    return res;
}
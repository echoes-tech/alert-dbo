/* 
 * File:   AlertMediaMessageAliasAsset.cpp
 * Author: tsa
 * 
 * Created on 25 février 2013, 11:38
 */

#include "alert/AlertMessageAliasAsset.h"

std::string AlertMessageAliasAsset::TRIGRAM(TRIGRAM_ALERT_MESSAGE_ALIAS_ASSET);

AlertMessageAliasAsset::AlertMessageAliasAsset()
{
    this->jsonName = "alert_message_alias_asset";
}

AlertMessageAliasAsset::AlertMessageAliasAsset(const AlertMessageAliasAsset& orig)
{
}

AlertMessageAliasAsset::~AlertMessageAliasAsset()
{
}

std::string AlertMessageAliasAsset::toJSON()
{
    std::string res = "";
    res += Table::toJSON();
    
    
    res += "}\n";
    return res;
}

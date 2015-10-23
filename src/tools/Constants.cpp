/* 
 * Constants
 * @author ECHOES Technologies (TSA)
 * @date 18/04/2012
 * 
 * THIS PROGRAM IS CONFIDENTIAL AND PROPRIETARY TO ECHOES TECHNOLOGIES SAS
 * AND MAY NOT BE REPRODUCED, PUBLISHED OR DISCLOSED TO OTHERS WITHOUT
 * COMPANY AUTHORIZATION.
 * 
 * COPYRIGHT 2012-2013 BY ECHOES TECHNOLGIES SAS
 * 
 */

#include "tools/Constants.h"

using namespace std;

namespace Echoes
{
  namespace Dbo
  {
    const char *Constants::T_USER_USR = TABLE_PREFIX SEP "USER" SEP TRIGRAM_USER;
    const char *Constants::T_USER_ROLE_URO = TABLE_PREFIX SEP "USER_ROLE" SEP TRIGRAM_USER_ROLE;
    const char *Constants::T_USER_RIGHT_URI = TABLE_PREFIX SEP "USER_RIGHT" SEP TRIGRAM_USER_RIGHT;
    const char *Constants::T_SPACE_SPA = TABLE_PREFIX SEP "SPACE" SEP TRIGRAM_SPACE;
    const char *Constants::T_ACCESS_CONTROL_LIST_ACL = TABLE_PREFIX SEP "ACCESS_CONTROL_LIST" SEP TRIGRAM_ACCESS_CONTROL_LIST;
    const char *Constants::T_USER_PROFILE_UPR = TABLE_PREFIX SEP "USER_PROFILE" SEP TRIGRAM_USER_PROFILE;
    const char *Constants::T_USER_FIELD_UFI = TABLE_PREFIX SEP "USER_FIELD" SEP TRIGRAM_USER_FIELD;
    const char *Constants::T_USER_VALUE_UVA = TABLE_PREFIX SEP "USER_VALUE" SEP TRIGRAM_USER_VALUE;

    const char *Constants::T_USER_HISTORICAL_ACTION_UHA = TABLE_PREFIX SEP "USER_HISTORICAL_ACTION" SEP TRIGRAM_USER_HISTORICAL_ACTION;
    const char *Constants::T_GROUP_GRP = TABLE_PREFIX SEP "ORGANIZATION" SEP TRIGRAM_GROUP;
    const char *Constants::T_GROUP_VALUE_GVA = TABLE_PREFIX SEP "ORGANIZATION_VALUE" SEP TRIGRAM_GROUP_VALUE;
    const char *Constants::T_GROUP_FIELD_GFI = TABLE_PREFIX SEP "ORGANIZATION_FIELD" SEP TRIGRAM_GROUP_FIELD;
    const char *Constants::T_PROBE_PRB = TABLE_PREFIX SEP "PROBE" SEP TRIGRAM_PROBE;
    const char *Constants::T_PROBE_PACKAGE_PPA = TABLE_PREFIX SEP "PROBE_PACKAGE" SEP TRIGRAM_PROBE_PACKAGE;
    const char *Constants::T_PROBE_PACKAGE_PARAMETER_PPP = TABLE_PREFIX SEP "PROBE_PACKAGE_PARAMETER" SEP TRIGRAM_PROBE_PACKAGE_PARAMETER;

    const char *Constants::T_INFORMATION_VALUE_IVA = TABLE_PREFIX SEP "INFORMATION_VALUE" SEP TRIGRAM_INFORMATION_VALUE;
    const char *Constants::T_INFORMATION_HISTORICAL_VALUE_IHV = TABLE_PREFIX SEP "INFORMATION_HISTORICAL_VALUE" SEP TRIGRAM_INFORMATION_HISTORICAL_VALUE;
    const char *Constants::T_INFORMATION_INF = TABLE_PREFIX SEP "INFORMATION" SEP TRIGRAM_INFORMATION;
    const char *Constants::T_INFORMATION_UNIT_INU = TABLE_PREFIX SEP "INFORMATION_UNIT" SEP TRIGRAM_INFORMATION_UNIT;
//    const char *Constants::T_INFORMATION_SUB_UNIT_ISU = TABLE_PREFIX SEP "INFORMATION_SUB_UNIT" SEP TRIGRAM_INFORMATION_SUB_UNIT;
    const char *Constants::T_INFORMATION_DATA_IDA = TABLE_PREFIX SEP "INFORMATION_DATA" SEP TRIGRAM_INFORMATION_DATA;

    const char *Constants::T_PLUGIN_PLG = TABLE_PREFIX SEP "PLUGIN" SEP TRIGRAM_PLUGIN;
    const char *Constants::T_PLUGIN_REFERENCE_PRE = TABLE_PREFIX SEP "PLUGIN_REFERENCE" SEP TRIGRAM_PLUGIN_REFERENCE;
    const char *Constants::T_PLUGIN_DATA_PDA = TABLE_PREFIX SEP "PLUGIN_DATA" SEP TRIGRAM_PLUGIN_DATA;

    const char *Constants::T_FILTER_FIL = TABLE_PREFIX SEP "FILTER" SEP TRIGRAM_FILTER;
    const char *Constants::T_FILTER_PARAMETER_VALUE_FPV = TABLE_PREFIX SEP "FILTER_PARAMETER_VALUE" SEP TRIGRAM_FILTER_PARAMETER_VALUE;

    //const char *Constants::T_WIDGET_TYPE_WTY = TABLE_PREFIX SEP "WIDGET_TYPE_WTY";
    //const char *Constants::T_WIDGET_WGT = TABLE_PREFIX SEP "WIDGET_WGT";
    //const char *Constants::T_WIDGET_VALUE_WVA = TABLE_PREFIX SEP "WIDGET_VALUE_WVA";
    //const char *Constants::T_TAB_TAB = TABLE_PREFIX SEP "TAB_TAB";
    //const char *Constants::T_TAB_VERSION_TVS = TABLE_PREFIX SEP "TAB_VERSION_TVS";
    //const char *Constants::T_TAB_WIDGET_TWG = TABLE_PREFIX SEP "TAB_WIDGET_TWG";

    const char *Constants::T_ALERT_ALE = TABLE_PREFIX SEP "ALERT" SEP TRIGRAM_ALERT;
    const char *Constants::T_ALERT_ACKNOWLEDGE_ACK = TABLE_PREFIX SEP "ALERT_ACKNOWLEDGE" SEP TRIGRAM_ALERT_ACKNOWLEDGE;
    const char *Constants::T_ALERT_MEDIA_SPECIALIZATION_AMS = TABLE_PREFIX SEP "ALERT_MEDIA_SPECIALIZATION" SEP TRIGRAM_ALERT_MEDIA_SPECIALIZATION;
    const char *Constants::T_ALERT_MESSAGE_ALIAS_ASSET_AAA = TABLE_PREFIX SEP "ALERT_MESSAGE_ALIAS_ASSET" SEP TRIGRAM_ALERT_MESSAGE_ALIAS_ASSET;
    const char *Constants::T_ALERT_MESSAGE_ALIAS_PLUGIN_AAP = TABLE_PREFIX SEP "ALERT_MESSAGE_ALIAS_PLUGIN" SEP TRIGRAM_ALERT_MESSAGE_ALIAS_PLUGIN;
    const char *Constants::T_ALERT_MESSAGE_ALIAS_INFORMATION_AAI = TABLE_PREFIX SEP "ALERT_MESSAGE_ALIAS_INFORMATION" SEP TRIGRAM_ALERT_MESSAGE_ALIAS_INFORMATION;
    const char *Constants::T_ALERT_MESSAGE_ALIAS_INFORMATION_CRITERIA_AIC = TABLE_PREFIX SEP "ALERT_MESSAGE_ALIAS_INFORMATION_CRITERIA" SEP TRIGRAM_ALERT_MESSAGE_ALIAS_INFORMATION_CRITERIA;
    const char *Constants::T_ALERT_VALUE_AVA = TABLE_PREFIX SEP "ALERT_VALUE" SEP TRIGRAM_ALERT_VALUE;
    const char *Constants::T_ALERT_PARAM_APA = TABLE_PREFIX SEP "ALERT_PARAM" SEP TRIGRAM_ALERT_PARAM;
    const char *Constants::T_ALERT_SEQUENCE_ASE = TABLE_PREFIX SEP "ALERT_SEQUENCE" SEP TRIGRAM_ALERT_SEQUENCE;
    const char *Constants::T_ALERT_TIMESLOT_ATS = TABLE_PREFIX SEP "ALERT_TIMESLOT" SEP TRIGRAM_ALERT_TIMESLOT;

    const char *Constants::T_MESSAGE_MSG = TABLE_PREFIX SEP "MESSAGE" SEP TRIGRAM_MESSAGE;
    const char *Constants::T_MESSAGE_TRACKING_EVENT_MTE = TABLE_PREFIX SEP "MESSAGE_TRACKING_EVENT" SEP TRIGRAM_MESSAGE_TRACKING_EVENT;
    
    const char *Constants::T_SOURCE_SRC = TABLE_PREFIX SEP "SOURCE" SEP TRIGRAM_SOURCE;
    const char *Constants::T_SOURCE_PARAMETER_VALUE_SPV = TABLE_PREFIX SEP "SOURCE_PARAMETER_VALUE" SEP TRIGRAM_SOURCE_PARAMETER_VALUE;

    const char *Constants::T_ASSET_AST = TABLE_PREFIX SEP "ASSET" SEP TRIGRAM_ASSET;
    const char *Constants::T_ASSET_ARCHITECTURE_ASA = TABLE_PREFIX SEP "ASSET_ARCHITECTURE" SEP TRIGRAM_ASSET_ARCHITECTURE;
    const char *Constants::T_ASSET_DISTRIBUTION_ASD = TABLE_PREFIX SEP "ASSET_DISTRIBUTION" SEP TRIGRAM_ASSET_DISTRIBUTION;
    const char *Constants::T_ASSET_RELEASE_ASR = TABLE_PREFIX SEP "ASSET_RELEASE" SEP TRIGRAM_ASSET_RELEASE;

    const char *Constants::T_SYSLOG_SLO = TABLE_PREFIX SEP "SYSLOG" SEP TRIGRAM_SYSLOG;
    const char *Constants::T_SEARCH_SEA = TABLE_PREFIX SEP "SEARCH" SEP TRIGRAM_SEARCH;
    const char *Constants::T_SEARCH_PARAMETER_VALUE_SEV = TABLE_PREFIX SEP "SEARCH_PARAMETER_VALUE" SEP TRIGRAM_SEARCH_PARAMETER_VALUE;
    const char *Constants::T_PACK_PCK = TABLE_PREFIX SEP "PACK" SEP TRIGRAM_PACK;
    const char *Constants::T_PACK_OPTION_POP = TABLE_PREFIX SEP "PACK_OPTION" SEP TRIGRAM_PACK_OPTION;
    const char *Constants::T_OPTION_OPT = TABLE_PREFIX SEP "OPTION" SEP TRIGRAM_OPTION;
    const char *Constants::T_MEDIA_MED = TABLE_PREFIX SEP "MEDIA" SEP TRIGRAM_MEDIA;
    
    const char *Constants::T_ALERT_TRACKING_EVENT_ATE = TABLE_PREFIX SEP "ALERT_TRACKING_EVENT" SEP TRIGRAM_ALERT_TRACKING_EVENT;
    const char *Constants::TR_ALERT_STATUS_ALS = TABLE_REFERENCE_PREFIX SEP "ALERT_STATUS" SEP TRIGRAM_ALERT_STATUS;
    const char *Constants::TR_MESSAGE_STATUS_MSA = TABLE_REFERENCE_PREFIX SEP "MESSAGE_STATUS" SEP TRIGRAM_MESSAGE_STATUS;
    
    const char *Constants::T_ADDON_COMMON_PACKAGE_CPA = TABLE_PREFIX SEP "ADDON_COMMON_PACKAGE" SEP TRIGRAM_ADDON_COMMON_PACKAGE;
    const char *Constants::T_ADDON_COMMON_PACKAGE_PARAMETER_CPP = TABLE_PREFIX SEP "ADDON_COMMON_PACKAGE_PARAMETER" SEP TRIGRAM_ADDON_COMMON_PACKAGE_PARAMETER;
    const char *Constants::T_ADDON_PACKAGE_APA = TABLE_PREFIX SEP "ADDON_PACKAGE" SEP TRIGRAM_ADDON_PACKAGE;
    const char *Constants::T_ADDON_PACKAGE_PARAMETER_APP = TABLE_PREFIX SEP "ADDON_PACKAGE_PARAMETER" SEP TRIGRAM_ADDON_PACKAGE_PARAMETER;

    const char *Constants::TR_ADDON_ADO = TABLE_REFERENCE_PREFIX SEP "ADDON" SEP TRIGRAM_ADDON;   
    const char *Constants::TR_ALERT_CRITERIA_ACR = TABLE_REFERENCE_PREFIX SEP "ALERT_CRITERIA" SEP TRIGRAM_ALERT_CRITERIA;
    const char *Constants::TR_MEDIA_TYPE_MTY = TABLE_REFERENCE_PREFIX SEP "MEDIA_TYPE" SEP TRIGRAM_MEDIA_TYPE;
    const char *Constants::TR_OPTION_TYPE_OTP = TABLE_REFERENCE_PREFIX SEP "OPTION_TYPE" SEP TRIGRAM_OPTION_TYPE;
    const char *Constants::TR_INFORMATION_UNIT_TYPE_IUT = TABLE_REFERENCE_PREFIX SEP "INFORMATION_UNIT_TYPE" SEP TRIGRAM_INFORMATION_UNIT_TYPE;
    const char *Constants::TR_SEARCH_TYPE_STY = TABLE_REFERENCE_PREFIX SEP "SEARCH_TYPE" SEP TRIGRAM_SEARCH_TYPE;
    const char *Constants::TR_GROUP_TYPE_GTY = TABLE_REFERENCE_PREFIX SEP "ORGANIZATION_TYPE" SEP TRIGRAM_GROUP_TYPE;
    const char *Constants::TR_SOURCE_PARAMETER_SRP = TABLE_REFERENCE_PREFIX SEP "SOURCE_PARAMETER" SEP TRIGRAM_SOURCE_PARAMETER;
    const char *Constants::TR_ENGINE_ENG = TABLE_REFERENCE_PREFIX SEP "ENGINE" SEP TRIGRAM_ENGINE;
    const char *Constants::TR_USER_ACTION_TYPE_UAT = TABLE_REFERENCE_PREFIX SEP "USER_ACTION_TYPE" SEP TRIGRAM_USER_ACTION_TYPE;
    const char *Constants::TR_SEARCH_PARAMETER_SEP = TABLE_REFERENCE_PREFIX SEP "SEARCH_PARAMETER" SEP TRIGRAM_SEARCH_PARAMETER;
    const char *Constants::TR_FILTER_TYPE_FTY = TABLE_REFERENCE_PREFIX SEP "FILTER_TYPE" SEP TRIGRAM_FILTER_TYPE;
    const char *Constants::TR_FILTER_PARAMETER_FPA = TABLE_REFERENCE_PREFIX SEP "FILTER_PARAMETER" SEP TRIGRAM_FILTER_PARAMETER;

    const char *Constants::TJ_ENG_GRP = TABLE_JOINT_PREFIX SEP TRIGRAM_ENGINE SEP TRIGRAM_GROUP;

    Constants::Constants()
    {
    }

    Constants::~Constants()
    {
    }
  }
}


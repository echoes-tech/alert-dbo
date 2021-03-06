/**
 * @file MacroTrigram.h
 * @author Thomas Saquet, Florent Poinsaut
 * @date 
 * @brief File containing example of doxygen usage for quick reference.
 *
 * Alert - Dbo is the database objects library, part of the Alert software
 * Copyright (C) 2013-2017
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 * 
 */

#ifndef MACROTRIGRAM_H
#define	MACROTRIGRAM_H

#define QUOTE(x) "\"" x "\""

#define SEP "_"

#define ID SEP "ID"

#define TABLE_PREFIX "T"
#define TABLE_JOINT_PREFIX "TJ"
#define TABLE_REFERENCE_PREFIX "TR"

#define TRIGRAM_USER_FIELD "UFI"
#define TRIGRAM_WIDGET_TYPE "WTY"
#define TRIGRAM_USER_ROLE "URO"
#define TRIGRAM_USER_RIGHT "URI"
#define TRIGRAM_SPACE "SPA"
#define TRIGRAM_ACCESS_CONTROL_LIST "ACL"
#define TRIGRAM_INFORMATION_UNIT "INU"
#define TRIGRAM_INFORMATION_SUB_UNIT "ISU"
#define TRIGRAM_INFORMATION_UNIT_TYPE "IUT"
#define TRIGRAM_INFORMATION_DATA "IDA"
#define TRIGRAM_USER "USR"
#define TRIGRAM_USER_HISTORICAL_ACTION "UHA"
#define TRIGRAM_USER_PROFILE "UPR"
#define TRIGRAM_USER_VALUE "UVA"
#define TRIGRAM_ALERT_PARAM "APA"
#define TRIGRAM_ALERT "ALE"
#define TRIGRAM_ALERT_SEQUENCE "ASE"
#define TRIGRAM_ALERT_TIMESLOT "ATS"
#define TRIGRAM_ALERT_MESSAGE_DEFINITION "AMD"
#define TRIGRAM_ALERT_MESSAGE_ALIAS_ASSET "AAA"
#define TRIGRAM_ALERT_MESSAGE_ALIAS_PLUGIN "AAP"
#define TRIGRAM_ALERT_MESSAGE_ALIAS_INFORMATION "AAI"
#define TRIGRAM_ALERT_MESSAGE_ALIAS_INFORMATION_CRITERIA "AIC"
#define TRIGRAM_USER_ACTION_TYPE "UAT"
#define TRIGRAM_ADDON "ADO"
#define TRIGRAM_ADDON_COMMON_PACKAGE_PARAMETER "CPP"
#define TRIGRAM_ADDON_COMMON_PACKAGE "CPA"
#define TRIGRAM_ADDON_PACKAGE_PARAMETER "APP"
#define TRIGRAM_ADDON_PACKAGE "APA"
#define TRIGRAM_ALERT_ACKNOWLEDGE "ACK"
#define TRIGRAM_ALERT_MEDIA_SPECIALIZATION "AMS"
#define TRIGRAM_ALERT_VALUE "AVA"
#define TRIGRAM_ALERT_TRACKING "ATR"
#define TRIGRAM_ALERT_TRACKING_EVENT "ATE"
#define TRIGRAM_ENGINE "ENG"
#define TRIGRAM_ENG_ORG "ENO"
#define TRIGRAM_TAB "TAB"
#define TRIGRAM_TAB_VERSION "TVS"
#define TRIGRAM_WIDGET "WGT"

#define TRIGRAM_PLUGIN "PLG"
#define TRIGRAM_PLUGIN_REFERENCE "PRE"
#define TRIGRAM_PLUGIN_DATA "PDA"

#define TRIGRAM_FILTER "FIL"
#define TRIGRAM_FILTER_TYPE "FTY"
#define TRIGRAM_FILTER_PARAMETER "FPA"
#define TRIGRAM_FILTER_PARAMETER_VALUE "FPV"
#define TRIGRAM_ORGANIZATION "ORG"
#define TRIGRAM_ORGANIZATION_TYPE "OTY"
#define TRIGRAM_ORGANIZATION_VALUE "OVA"
#define TRIGRAM_ORGANIZATION_FIELD "OFI"
#define TRIGRAM_INFORMATION "INF"
#define TRIGRAM_INFORMATION_VALUE "IVA"
#define TRIGRAM_INFORMATION_HISTORICAL_VALUE "IHV"
#define TRIGRAM_ALERT_CRITERIA "ACR"
#define TRIGRAM_PROBE "PRB"
#define TRIGRAM_PROBE_PACKAGE "PPA"
#define TRIGRAM_PROBE_PACKAGE_PARAMETER "PPP"
#define TRIGRAM_SOURCE "SRC"
#define TRIGRAM_SOURCE_PARAMETER "SRP"
#define TRIGRAM_SOURCE_PARAMETER_VALUE "SPV"
#define TRIGRAM_ASSET "AST"
#define TRIGRAM_ASSET_ARCHITECTURE "ASA"
#define TRIGRAM_ASSET_DISTRIBUTION "ASD"
#define TRIGRAM_ASSET_RELEASE "ASR"
#define TRIGRAM_SYSLOG "SLO"
#define TRIGRAM_SYSLOG_HISTORY "SLH"
#define TRIGRAM_SEARCH "SEA"
#define TRIGRAM_SEARCH_TYPE "STY"
#define TRIGRAM_SEARCH_PARAMETER "SEP"
#define TRIGRAM_SEARCH_PARAMETER_VALUE "SEV"
#define TRIGRAM_PACK "PCK"
#define TRIGRAM_PACK_OPTION "POP"
#define TRIGRAM_OPTION "OPT"        
#define TRIGRAM_OPTION_TYPE "OTP"
#define TRIGRAM_MEDIA_TYPE "MTY"
#define TRIGRAM_MEDIA "MED"


#define TEMPLATE_TRIGRAM(CLASS, TRIGRAM) template<> \
        struct dbo_traits<CLASS> : public dbo_default_traits \
        { \
            static const char *surrogateIdField() \
            { \
                return TRIGRAM; \
            } \
        };
        

#endif	/* MACROTRIGRAM_H */

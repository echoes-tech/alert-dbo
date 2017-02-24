/**
 * @file AlertMessageAliasAsset.h
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

#ifndef ALERTMEDIAMESSAGEALIASASSET_H
#define	ALERTMEDIAMESSAGEALIASASSET_H


#include <Wt/Dbo/Dbo>
#include "tools/MainIncludeFile.h"
#include "primaryKeys/AlertMessageAliasAssetId.h"

namespace Echoes
{
  namespace Dbo
  {
    class AlertMessageAliasAsset : public Table
    {
        public:
            AlertMessageAliasAsset();
            AlertMessageAliasAsset(const AlertMessageAliasAsset& orig);
            virtual ~AlertMessageAliasAsset();

            static std::string TRIGRAM;

            Wt::WString alias;
            AlertMessageAliasAssetId pk;

            template<class Action>
            void persist(Action& a)
            {
                mapClassAttributesStrings["ALIAS"] = &this->alias;

                Table::fieldFiller(a, *this);

                Wt::Dbo::id(a, pk, TRIGRAM_ALERT_MESSAGE_ALIAS_ASSET ID);
            }

        private:
    };
  }
}

#endif	/* ALERTMEDIAMESSAGEALIASASSET_H */

/**
 * @file GroupType.h
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

#ifndef GROUPTYPE_H
#define GROUPTYPE_H

#include "tools/MainIncludeFile.h"

namespace Echoes
{
  namespace Dbo
  {
    class GroupType : public Table
    {
        public:
            GroupType();
            virtual ~GroupType();

            static std::string TRIGRAM;

            enum eType
            {
                Company = 1,
                Individual = 2,
                Association = 3,
                Default = 4
            };

            Wt::WString name;

            Wt::Dbo::collection<Wt::Dbo::ptr<Group> > group;
            Wt::Dbo::collection<Wt::Dbo::ptr<GroupField> > groupField;

            template<class Action>
            void persist(Action& a)
            {
                mapClassAttributesStrings["NAME"] = &this->name;
                Table::fieldFiller(a, *this);
                Wt::Dbo::hasMany(a,
                        groupField,
                        Wt::Dbo::ManyToMany,
                        "TJ_GFI_GTY");

                Wt::Dbo::hasMany(a,
                        group,
                        Wt::Dbo::ManyToOne,
                        "GRP_GTY");


            }

        private:
    };
  }
}

#endif // GROUPTYPE_H


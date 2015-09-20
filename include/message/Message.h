/* 
 * Header of Alert Tracking Table
 * @author ECHOES Technologies (TSA)
 * @date 23/07/2012
 * 
 * THIS PROGRAM IS CONFIDENTIAL AND PROPRIETARY TO ECHOES TECHNOLOGIES SAS
 * AND MAY NOT BE REPRODUCED, PUBLISHED OR DISCLOSED TO OTHERS WITHOUT
 * COMPANY AUTHORIZATION.
 * 
 * COPYRIGHT 2012-2013 BY ECHOES TECHNOLGIES SAS
 * 
 */

#ifndef ALERTTRACKING_H
#define	ALERTTRACKING_H

#include "tools/MainIncludeFile.h"

namespace Echoes
{
  namespace Dbo
  {
    class Message : public Table
    {
        public:
            Message();
            virtual ~Message();

            static std::string TRIGRAM;

            boost::optional<Wt::WString> content;
            boost::optional<Wt::WString> senderSrv;
            Wt::WDateTime sendDate;
            boost::optional<Wt::WString> receiverSrv;
            Wt::WDateTime receiveDate;
            boost::optional<Wt::WString> ackGw;
            boost::optional<Wt::WString> ackPort;
            boost::optional<Wt::WString> ackId;

            Wt::Dbo::ptr<Media> media;
            Wt::Dbo::ptr<Alert> alert;

            Wt::Dbo::collection<Wt::Dbo::ptr<MessageTrackingEvent> > alertTrackingEvents;

            template<class Action>
            void persist(Action& a)
            {
                mapClassAttributesStringsNn["CONTENT"] = &this->content;
                mapClassAttributesStringsNn["SENDER_SRV"] = &this->senderSrv;
                mapClassAttributesStringsNn["RECEIVER_SRV"] = &this->receiverSrv;
                mapClassAttributesStringsNn["ACK_GW"] = &this->ackGw;
                mapClassAttributesStringsNn["ACK_PORT"] = &this->ackPort;
                mapClassAttributesStringsNn["ACK_ID"] = &this->ackId;
                mapClassAttributesDates["SEND_DATE"] = &this->sendDate;
                mapClassAttributesDates["RECEIVE_DATE"] = &this->receiveDate;

                Table::fieldFiller(a, *this);

                Wt::Dbo::belongsTo(a, media, TRIGRAM_MESSAGE SEP TRIGRAM_MEDIA);
                Wt::Dbo::belongsTo(a, alert, TRIGRAM_MESSAGE SEP TRIGRAM_ALERT);

                Wt::Dbo::hasMany(a,
                        alertTrackingEvents,
                        Wt::Dbo::ManyToOne,
                        TRIGRAM_MESSAGE_TRACKING_EVENT SEP TRIGRAM_MESSAGE);
            }

        protected:
        private:
    };
  }
}

#endif	/* ALERTTRACKING_H */

#include "UserProfile.h"

class UserProfile;
namespace Wt
{
    namespace Dbo
    {
        template<>
        struct dbo_traits<UserProfile> : public dbo_default_traits
        {
            static const char *surrogateIdField()
            {
                return "UPR_ID";
            }
            static const char *versionField()
            {
                return 0;
            }
        };
    }
}

#include "User.h"
#include "UserAction.h"
#include "UserRole.h"
#include "UserField.h"
#include "HistoricalAction.h"
#include "UserValue.h"
#include "UserValueId.h"

#include "Organization.h"

#include "Probe.h"
#include "ProbeId.h"

#include "Plugin.h"

#include "Information.h"
#include "HistoricalValue.h"
#include "Value.h"


//#include "Hierarchy.h"

UserProfile::UserProfile()
{
    //ctor
}

UserProfile::~UserProfile()
{
    //dtor
}

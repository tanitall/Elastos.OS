

#ifndef __ELASTOS_DROID_DIALER_CALLLOG_CPHONENUMBERUTILSWRAPPERHELPER_H__
#define __ELASTOS_DROID_DIALER_CALLLOG_CPHONENUMBERUTILSWRAPPERHELPER_H__

#include "_Elastos_Droid_Dialer_CallLog_CPhoneNumberUtilsWrapperHelper.h"
#include <elastos/core/Singleton.h>

namespace Elastos {
namespace Droid {
namespace Dialer {
namespace CallLog {

CarClass(CPhoneNumberUtilsWrapperHelper)
    , public Singleton
    , public IPhoneNumberUtilsWrapperHelper
{
public:
    CAR_INTERFACE_DECL();

    CAR_SINGLETON_DECL();

    CARAPI GetINSTANCE(
        /* [out] */ IPhoneNumberUtilsWrapper** wrapper);

    /** Returns true if it is possible to place a call to the given number. */
    CARAPI CanPlaceCallsTo(
        /* [in] */ ICharSequence* number,
        /* [in] */ Int32 presentation,
        /* [out] */ Boolean* result);

    CARAPI IsUnknownNumberThatCanBeLookedUp(
        /* [in] */ ICharSequence* number,
        /* [in] */ Int32 presentation,
        /* [out] */ Boolean* result);

    CARAPI IsLegacyUnknownNumbers(
        /* [in] */ ICharSequence* number,
        /* [out] */ Boolean* result);
};

} // CallLog
} // Dialer
} // Droid
} // Elastos

#endif //__ELASTOS_DROID_DIALER_CALLLOG_CPHONENUMBERUTILSWRAPPERHELPER_H__
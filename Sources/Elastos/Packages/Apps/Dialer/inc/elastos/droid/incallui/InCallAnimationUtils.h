
#ifndef __ELASTOS_DROID_INCALLUI_INCALLANIMATIONUTILS_H__
#define __ELASTOS_DROID_INCALLUI_INCALLANIMATIONUTILS_H__

#include "_Elastos.Droid.Dialer.h"

namespace Elastos {
namespace Droid {
namespace InCallUI {

class InCallAnimationUtils
{
public:
    /**
     * Starts cross-fade animation using TransitionDrawable. Nothing will happen if "from" and "to"
     * are the same.
     */
    static CARAPI_(void) StartCrossFade(
        /* [in] */ IImageView* imageView,
        /* [in] */ IDrawable* from,
        /* [in] */ IDrawable* to);

private:
    InCallAnimationUtils() {}
};

} // namespace InCallUI
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_INCALLUI_INCALLANIMATIONUTILS_H__
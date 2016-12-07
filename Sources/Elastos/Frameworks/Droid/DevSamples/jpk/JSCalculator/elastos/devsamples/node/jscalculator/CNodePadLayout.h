#include "CNodeListener.h"

#define JSActCarClassHead EE(JSPkgName,JSActName)

#include JSActCarClassHead

#include <elastos/droid/view/ViewGroup.h>

//#include "elastos/droid/support/v4/view/ViewPager.h"
//#include "elastos/droid/support/v4/view/PagerAdapter.h"

using Elastos::Droid::View::ViewGroup;

using Elastos::Droid::View::IViewGroupLayoutParams;

namespace Elastos {
namespace DevSamples {
namespace Node {
namespace JSPkgName {

JSCarClass(JSActName)
    , public ViewGroup
    //: public ViewPager
    , public ICalculatorPadLayout
{
public:
    CAR_INTERFACE_DECL()
    CAR_OBJECT_DECL()

private:
    class SuperObject
        : public Object
        , public ICalculatorPadLayoutSuperObject
    {
    public:
        SuperObject(
            /* [in] */ JSActName* host)
            : mHost(host)
        {};

        CAR_INTERFACE_DECL()

        CARAPI Test();

    private:
        AutoPtr<JSActName> mHost;
    };

public:
    CCalculatorPadLayout();

    virtual ~CCalculatorPadLayout();

    CARAPI constructor(
        /* [in] */ IContext* context);

    CARAPI constructor(
        /* [in] */ IContext* context,
        /* [in] */ IAttributeSet* attrs);

    CARAPI _constructor(
        /* [in] */ IContext* context,
        /* [in] */ IAttributeSet* attrs,
        /* [in] */ Int32 defStyle);
    CARAPI constructor(
        /* [in] */ IContext* context,
        /* [in] */ IAttributeSet* attrs,
        /* [in] */ Int32 defStyle);

    CARAPI _ShouldDelayChildPressedState(
        /* [out] */ Boolean* result);
    CARAPI ShouldDelayChildPressedState(
        /* [out] */ Boolean* result);

    CARAPI _GenerateLayoutParams(
        /* [in] */ IAttributeSet* attrs,
        /* [out] */ IViewGroupLayoutParams** result);
    CARAPI GenerateLayoutParams(
        /* [in] */ IAttributeSet* attrs,
        /* [out] */ IViewGroupLayoutParams** result);

    CARAPI _GenerateDefaultLayoutParams(
        /* [out] */ IViewGroupLayoutParams** result);
    CARAPI GenerateDefaultLayoutParams(
        /* [out] */ IViewGroupLayoutParams** result);

protected:

    CARAPI _OnMeasure(
        /* [in] */ Int32 widthMeasureSpec,
        /* [in] */ Int32 heightMeasureSpec);
    CARAPI OnMeasure(
        /* [in] */ Int32 widthMeasureSpec,
        /* [in] */ Int32 heightMeasureSpec);

    CARAPI _OnLayout(
        /* [in] */ Boolean changed,
        /* [in] */ Int32 left,
        /* [in] */ Int32 top,
        /* [in] */ Int32 right,
        /* [in] */ Int32 bottom);
    CARAPI OnLayout(
        /* [in] */ Boolean changed,
        /* [in] */ Int32 left,
        /* [in] */ Int32 top,
        /* [in] */ Int32 right,
        /* [in] */ Int32 bottom);

    CARAPI _GenerateLayoutParams(
        /* [in] */ IViewGroupLayoutParams* p,
        /* [out] */ IViewGroupLayoutParams** result);
    // CARAPI GenerateLayoutParams(
    //     /* [in] */ IViewGroupLayoutParams* p,
    //     /* [out] */ IViewGroupLayoutParams** result);
    CARAPI_(AutoPtr<IViewGroupLayoutParams>) GenerateLayoutParams(
        /* [in] */ IViewGroupLayoutParams* p);

    CARAPI _CheckLayoutParams(
        /* [in] */ IViewGroupLayoutParams* p,
        /* [out] */ Boolean* result);
    CARAPI CheckLayoutParams(
        /* [in] */ IViewGroupLayoutParams* p,
        /* [out] */ Boolean* result);

    CARAPI _SetChildrenDrawingOrderEnabled(
        /* [in] */ Boolean enabled);

    CARAPI _DrawChild(
        /* [in] */ ICanvas* canvas,
        /* [in] */ IView* child,
        /* [in] */ Int64 drawingTime,
        /* [out] */ Boolean* result);
    CARAPI_(Boolean) DrawChild(
        /* [in] */ ICanvas* canvas,
        /* [in] */ IView* child,
        /* [in] */ Int64 drawingTime);

public:

    CARAPI _Draw(
        /* [in] */ ICanvas* canvas);
    CARAPI Draw(
        /* [in] */ ICanvas* canvas);

    CARAPI _DispatchDraw(
        /* [in] */ ICanvas* canvas);
    CARAPI DispatchDraw(
        /* [in] */ ICanvas* canvas);

    CARAPI _OnDraw(
        /* [in] */ ICanvas* canvas);
    //CARAPI OnDraw(
    CARAPI_(void) OnDraw(
        /* [in] */ ICanvas* canvas);

    CARAPI GetSuperObject(
        /* [out] */ ICalculatorPadLayoutSuperObject** ppSuperObject);

private:
        AutoPtr<ICalculatorPadLayoutListener> mListener;
        AutoPtr<ICalculatorPadLayoutSuperObject> mSuperObject;
};

} // namespace JSPkgName
} // namespace Node
} // namespace DevSamples
} // namespace Elastos
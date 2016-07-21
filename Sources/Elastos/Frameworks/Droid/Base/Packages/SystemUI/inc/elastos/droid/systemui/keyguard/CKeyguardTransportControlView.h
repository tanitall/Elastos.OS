
#ifndef __ELASTOS_DROID_SYSTEMUI_KEYGUARD_CALPHAOPTIMIZEDLINEARLAYOUT_H__
#define __ELASTOS_DROID_SYSTEMUI_KEYGUARD_CALPHAOPTIMIZEDLINEARLAYOUT_H__

#include "_Elastos_Droid_SystemUI_Keyguard_CAlphaOptimizedLinearLayout.h"
#include <elastos/droid/widget/FrameLayout.h>

using Elastos::Droid::Widget::FrameLayout;

/**
 * This is the widget responsible for showing music controls in keyguard.
 */
namespace Elastos {
namespace Droid {
namespace SystemUI {
namespace Keyguard {

CarClass(CKeyguardTransportControlView)
    , public FrameLayout
{
private:
    class MyRemoteControllerOnClientUpdateListener
        : public Object
        , public IRemoteControllerOnClientUpdateListener
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::MyRemoteControllerOnClientUpdateListener")

        MyRemoteControllerOnClientUpdateListener(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        CARAPI OnClientChange(
            /* [in] */ Boolean clearing);

        //@Override
        CARAPI OnClientPlaybackStateUpdate(
            /* [in] */ Int32 state);

        //@Override
        CARAPI OnClientPlaybackStateUpdate(
            /* [in] */ Int32 state,
            /* [in] */ Int64 stateChangeTimeMs,
            /* [in] */ Int64 currentPosMs,
            /* [in] */ Float speed);

        //@Override
        CARAPI OnClientTransportControlUpdate(
            /* [in] */ Int32 transportControlFlags);

        //@Override
        CARAPI OnClientMetadataUpdate(
            /* [in] */ IRemoteControllerMetadataEditor* metadataEditor);

    private:
        CKeyguardTransportControlView* mHost;
    };

    class UpdateSeekBarRunnable
        : public Runnable
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::UpdateSeekBarRunnable")

        UpdateSeekBarRunnable(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        CARAPI Run();

        CARAPI UpdateOnce(
            /* [out] */ Boolean* result);

    private:
        CKeyguardTransportControlView* mHost;
    };

    class MyRunnable
        : public Runnable
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::MyRunnable")

        MyRunnable(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        CARAPI Run();

    private:
        CKeyguardTransportControlView* mHost;
    };

    class MyViewOnClickListener
        : public Object
        , public IViewOnClickListener
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::MyViewOnClickListener")

        CAR_INTERFACE_DECL()

        MyViewOnClickListener(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        CARAPI OnClick(
            /* [in] */ IView* v);

    private:
        CKeyguardTransportControlView* mHost;
    };

    class MyViewOnLongClickListener
        : public Object
        , public IViewOnLongClickListener
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::MyViewOnLongClickListener")

        CAR_INTERFACE_DECL()

        MyViewOnLongClickListener(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        //@Override
        CARAPI OnLongClick(
            /* [in] */ IView* v,
            /* [out] */ Boolean* result);

    private:
        CKeyguardTransportControlView* mHost;
    };

    // This class is here to throttle scrub position updates to the music client
    class FutureSeekRunnable
        : public Runnable
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::FutureSeekRunnable")

        FutureSeekRunnable(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        CARAPI Run();

        CARAPI SetProgress(
            /* [in] */  Int32 progress);

    private:
        Int32 mProgress;
        Boolean mPending;
    };  ISeekBarOnSeekBarChangeListener

    class MySeekBarOnSeekBarChangeListener
        : public Object
        , public ISeekBarOnSeekBarChangeListener
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::MySeekBarOnSeekBarChangeListener")

        CAR_INTERFACE_DECL()

        MySeekBarOnSeekBarChangeListener(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        //@Override
        CARAPI OnProgressChanged(
            /* [in] */ ISeekBar* seekBar,
            /* [in] */ Int32 progress,
            /* [in] */ Boolean fromUser);

        //@Override
        CARAPI OnStartTrackingTouch(
            /* [in] */ ISeekBar* seekBar);

        //@Override
        CARAPI OnStopTrackingTouch(
            /* [in] */ ISeekBar* seekBar);

    private:
        CKeyguardTransportControlView* mHost;
    };

    class MyKeyguardUpdateMonitorCallback
        : public KeyguardUpdateMonitorCallback
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::MyKeyguardUpdateMonitorCallback")

        MyKeyguardUpdateMonitorCallback(
            /* [in] */ CKeyguardTransportControlView* host)
            : mHost(host)
        {}

        CARAPI OnScreenTurnedOff(
            /* [in] */ Int32 why);

        CARAPI OnScreenTurnedOn();

    private:
        CKeyguardTransportControlView* mHost;
    };

    class Metadata
        : public Object
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::Metadata")

        CARAPI Clear();

        CARAPI ToString(
            /* [out] */ String* str);

    private:
        String mArtist;
        String mTrackTitle;
        String mAlbumTitle;
        Bitmap mBitmap;
        Int64 mDuration;
    };

    class SavedState
        : public View::BaseSavedState
        , public ISavedState
    {
    public:
        TO_STRING_IMPL("CKeyguardTransportControlView::SavedState")

        SavedState()
            : mClientPresent(FALSE)
            , mArtist(NULL)
            , mTrackTitle(NULL)
            , mAlbumTitle(NULL)
            , mDuration(0)
        {}

        CARAPI constructor(
            /* [in] */ IParcelable* superState);

        //@Override
        CARAPI WriteToParcel(
            /* [in] */ IParcel* out,
            /* [in] */ Int32 flags);

    public:
        // static AutoPtr<IParcelableCreator> <SavedState> CREATOR
        //         = new Parcelable.Creator<SavedState>() {
        //     public SavedState createFromParcel(Parcel in) {
        //         return new SavedState(in);
        //     }

        //     public SavedState[] newArray(int size) {
        //         return new SavedState[size];
        //     }
        // };

    private:
        CARAPI constructor(
            /* [in] */ IParcel* in);

    private:
        Boolean mClientPresent;
        String mArtist;
        String mTrackTitle;
        String mAlbumTitle;
        Int64 mDuration;
        AutoPtr<IBitmap> mBitmap;
    };

public:
    CAR_OBJECT_DECL()

    CKeyguardTransportControlView();

    CARAPI constructor(
        /* [in] */ IContext* context,
        /* [in] */ IAttributeSet* attrs);

    CARAPI SetSeekBarsEnabled(
        /* [in] */ Boolean enabled);

    CARAPI SetTransportControlCallback(
        /* [in] */ IKeyguardHostViewTransportControlCallback* transportControlCallback);

    //@Override
    CARAPI OnFinishInflate();

    //@Override
    CARAPI OnAttachedToWindow();

    //@Override
    CARAPI OnDetachedFromWindow();

    CARAPI SetBadgeIcon(
        /* [in] */ IDrawable* bmp);

    CARAPI ClearMetadata();

    CARAPI UpdateMetadata(
        /* [in] */ IRemoteControllerMetadataEditor* data);

    CARAPI UpdateSeekDisplay();

    CARAPI TryToggleSeekBar(
        /* [out] */ Boolean* result);

    CARAPI ResetToMetadata();

    CARAPI DelayResetToMetadata();

    CARAPI CancelResetToMetadata();

    CARAPI SetSeekBarDuration(
        /* [in] */ Int64 duration);

    CARAPI ScrubTo(
        /* [in] */ Int32 progress);

    CARAPI UpdateSeekBars(
        /* [out] */ Boolean* result);

    CARAPI ProvidesClock(
        /* [out] */ Boolean* result);

protected:
    //@Override
    CARAPI OnConfigurationChanged(
        /* [in] */ IConfiguration* newConfig);

    //@Override
    CARAPI OnSaveInstanceState(
        /* [out] */ IParcelable** p);

    //@Override
    CARAPI OnRestoreInstanceState(
        /* [in] */ IParcelable* state);

private:
    // This is here because RemoteControlClient's method isn't visible :/
    static CARAPI_(Boolean) PlaybackPositionShouldMove(
        /* [in] */ Int32 playstate);

    CARAPI_(void) UpdateTransportControls(
        /* [in] */ Int32 transportControlFlags);

    CARAPI_(void) SetEnableMarquee(
        /* [in] */ Boolean enabled);

    /**
     * Populates the given metadata into the view
     */
    CARAPI_(void) PopulateMetadata();

    static CARAPI_(void) SetVisibilityBasedOnFlag(
        /* [in] */ IView* view,
        /* [in] */ Int32 flags,
        /* [in] */ Int32 flag);

    CARAPI_(void) UpdatePlayPauseState(
        /* [in] */ Int32 state);

    CARAPI_(void) SendMediaButtonClick(
        /* [in] */ Int32 keyCode);

protected:
    static const Boolean DEBUG;
    static const String TAG;

    static const Int64 QUIESCENT_PLAYBACK_FACTOR;

private:
    static const Int32 RESET_TO_METADATA_DELAY;

    static const Boolean ANIMATE_TRANSITIONS;

    AutoPtr<IViewGroup> mMetadataContainer;
    AutoPtr<IViewGroup> mInfoContainer;
    AutoPtr<ITextView> mTrackTitle;
    AutoPtr<ITextView> mTrackArtistAlbum;

    AutoPtr<IView> mTransientSeek;
    AutoPtr<ISeekBar> mTransientSeekBar;
    AutoPtr<ITextView> mTransientSeekTimeElapsed;
    AutoPtr<ITextView> mTransientSeekTimeTotal;

    AutoPtr<IImageView> mBtnPrev;
    AutoPtr<IImageView> mBtnPlay;
    AutoPtr<IImageView> mBtnNext;
    AutoPtr<Metadata> mMetadata;
    Int32 mTransportControlFlags;
    Int32 mCurrentPlayState;
    AutoPtr<IAudioManager> mAudioManager;
    AutoPtr<IRemoteController> mRemoteController;

    AutoPtr<IImageView> mBadge;

    Boolean mSeekEnabled;
    AutoPtr<IDateFormat> mFormat;

    AutoPtr<IDate> mTempDate;

    /**
     * The metadata which should be populated into the view once we've been attached
     */
    AutoPtr<IRemoteControllerMetadataEditor> mPopulateMetadataWhenAttached;

    AutoPtr<IRemoteControllerOnClientUpdateListener> mRCClientUpdateListener;

    AutoPtr<IRunnable> mUpdateSeekBars;

    AutoPtr<IRunnable> mResetToMetadata;

    AutoPtr<IViewOnClickListener> mTransportCommandListene;

    AutoPtr<IViewOnLongClickListener> mTransportShowSeekBarListener;

    AutoPtr<IRunnable> mFutureSeekRunnable;

    AutoPtr<ISeekBarOnSeekBarChangeListener> mOnSeekBarChangeListener;

    static const Int32 TRANSITION_DURATION;
    AutoPtr<ITransitionSet> mMetadataChangeTransition;

    AutoPtr<IKeyguardHostViewTransportControlCallback> mTransportControlCallback;

    AutoPtr<KeyguardUpdateMonitorCallback> mUpdateMonitor;

};

} // namespace Keyguard
} // namespace SystemUI
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_SYSTEMUI_KEYGUARD_CALPHAOPTIMIZEDLINEARLAYOUT_H__
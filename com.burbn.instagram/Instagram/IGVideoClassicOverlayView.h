//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGMediaOverlayDelegate.h"
#import "IGTooltipViewDelegate.h"
#import "IGVideoPlaybackListener.h"
#import "IGWatchAndMoreVideoOverlayContext.h"
#import "UIGestureRecognizerDelegate.h"

@class IGDebuggingMediaLinesView, IGDoubleTapAwareTapGestureRecognizer, IGFeedVideoTimeIndicatorView, IGMediaOverlayIndicator, IGPlaybackTimeIndicatorController, IGTVFeedPreviewOverlayView, IGTooltipView, IGVideoIndicatorView, IGVideoLoadProgressView, IGVideoPlayButton, IGVideoPlaybackController, IGVideoTagIndicatorConfiguration, NSString, UIButton, UITapGestureRecognizer, UIView<IGVideoCaptionViewType>;

@interface IGVideoClassicOverlayView : UIView <IGMediaOverlayDelegate, IGTooltipViewDelegate, UIGestureRecognizerDelegate, IGVideoPlaybackListener, IGWatchAndMoreVideoOverlayContext>
{
    IGFeedVideoTimeIndicatorView *_timeIndicatorView;
    IGPlaybackTimeIndicatorController *_timeIndicatorController;
    UIButton *_watchAndMoreEntryButton;
    UIButton *_watchAndMoreExitButton;
    _Bool _hasShownWatchAndMoreNux;
    IGTooltipView *_watchAndMoreTooltipView;
    IGVideoPlayButton *_playButton;
    IGVideoIndicatorView *_videoIndicator;
    IGMediaOverlayIndicator *_tagIndicator;
    IGMediaOverlayIndicator *_igtvIndicator;
    IGVideoTagIndicatorConfiguration *_tagConfiguration;
    CDStruct_7071a04e _options;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    IGDoubleTapAwareTapGestureRecognizer *_singleTapGestureRecognizer;
    long long _watchMoreEntryPointPosition;
    _Bool _shouldUseNewIconForWatchMore;
    IGMediaOverlayIndicator *_watchAndMoreIndicator;
    _Bool _shouldToggleWatchAndMoreIndicator;
    _Bool _canExpandTagAndIGTVIndicators;
    IGTVFeedPreviewOverlayView *_igtvOverlayView;
    double _remainingTimeForIGTVOverlay;
    IGVideoLoadProgressView *_debuggingLoadProgressView;
    IGDebuggingMediaLinesView *_debuggingMediaLinesView;
    _Bool _doubleTapGestureEnabled;
    _Bool _shouldShowPlayButton;
    _Bool _shouldShowCaptionView;
    _Bool _shouldShowIGTVOverlayView;
    id <IGWatchAndMoreVideoOverlayContextDelegate> _watchAndMoreDelegate;
    id <IGVideoClassicOverlayViewDelegate> _delegate;
    IGVideoPlaybackController *_videoPlaybackController;
    IGMediaOverlayIndicator *_audioIndicator;
    UIView<IGVideoCaptionViewType> *_captionView;
}

@property(nonatomic) _Bool shouldShowIGTVOverlayView; // @synthesize shouldShowIGTVOverlayView=_shouldShowIGTVOverlayView;
@property(nonatomic) _Bool shouldShowCaptionView; // @synthesize shouldShowCaptionView=_shouldShowCaptionView;
@property(nonatomic) _Bool shouldShowPlayButton; // @synthesize shouldShowPlayButton=_shouldShowPlayButton;
@property(nonatomic) _Bool doubleTapGestureEnabled; // @synthesize doubleTapGestureEnabled=_doubleTapGestureEnabled;
@property(retain, nonatomic) UIView<IGVideoCaptionViewType> *captionView; // @synthesize captionView=_captionView;
@property(readonly, nonatomic) IGMediaOverlayIndicator *audioIndicator; // @synthesize audioIndicator=_audioIndicator;
@property(readonly, nonatomic) CDStruct_7071a04e options; // @synthesize options=_options;
@property(nonatomic) __weak IGVideoPlaybackController *videoPlaybackController; // @synthesize videoPlaybackController=_videoPlaybackController;
@property(nonatomic) __weak id <IGVideoClassicOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGWatchAndMoreVideoOverlayContextDelegate> watchAndMoreDelegate; // @synthesize watchAndMoreDelegate=_watchAndMoreDelegate;
- (void).cxx_destruct;
- (void)_resetWatchAndMoreAssets;
- (void)_showWatchAndMoreNuxIfPossible;
- (void)_updateTimeIndicatorEnabledState;
- (void)_updateOverlayVisibilityForIGTVOverlay;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)mediaOverlayIndicator:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)mediaOverlayTapped:(id)arg1;
- (void)didTapTooltipView:(id)arg1;
- (void)_updateDebuggingLinesViewVisibility;
- (void)videoPlaybackController:(id)arg1 didLoopItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlaybackController:(id)arg1 didLoadVideoForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didRequestItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didUpdateLoadingProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackControllerDidFinishSeeking:(id)arg1;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)arg1;
- (void)videoPlaybackControllerDidStopPlayback:(id)arg1;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didStartLoadingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didApplySettingsForItem:(id)arg2;
- (void)_didTapIGTVKeepWatchingButton;
- (void)_didTapWatchAndMoreExitButton;
- (void)_didTapWatchAndMoreEntryButton;
- (void)_onDoubleTap:(id)arg1;
- (void)_onTap:(id)arg1;
- (void)_setupIGTVOverlayIfNeeded;
- (_Bool)_showIGTVIndicator;
- (void)_setupIGTVIndicatorIfNeeded;
- (void)_updateIGTVIndicatorVisibilityAnimated:(_Bool)arg1;
- (void)_updateWatchAndMoreIndicatorVisibilityWithAudioIndicatorState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)_showTagIndicator;
- (void)_setupTagIndicatorIfNeeded;
- (void)_updateTagIndicatorVisibilityAnimated:(_Bool)arg1;
- (void)_showOldWatchAndMoreExitButton:(_Bool)arg1;
- (void)_showOldWatchAndMoreEntryButton:(_Bool)arg1;
- (void)toggleWatchAndMoreButtonWithType:(unsigned long long)arg1;
- (void)_updateWatchAndMoreIndicatorToType:(unsigned long long)arg1;
- (void)_toggleWatchAndMoreRedesignButtonWithType:(unsigned long long)arg1;
- (void)showIGTVIndicatorIfNeededAnimated:(_Bool)arg1;
@property(nonatomic) long long videoIndicatorStyle;
@property(nonatomic) _Bool videoIndicatorEnabled;
- (void)configureWithOptions:(CDStruct_7071a04e)arg1 tagConfiguration:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 watchMoreEntryPointPosition:(long long)arg2 videoViewerType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


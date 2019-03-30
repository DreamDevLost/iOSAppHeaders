//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGestureHandler.h"
#import "IGMusicStickerEditorScrubberViewDelegate.h"
#import "IGMusicStickerLengthPickerViewDelegate.h"
#import "IGMusicStickerPlaybackControllerDelegate.h"
#import "IGStoryPrecaptureMusicBrowserViewControllerDelegate.h"

@class FBTimer, IGDirectionalPanGestureRecognizer, IGMusicStickerEditorControlsView, IGMusicStickerLengthPickerView, IGMusicStickerPlaybackController, IGStoryMediaCompositionView, IGStoryMusicTrack, IGStoryMusicTrackClip, IGStoryPrecaptureMusicBrowserViewController, IGTapButton, IGUserSession, NSString, UIActivityIndicatorView, UILabel, UITapGestureRecognizer, UIView;

@interface IGMusicStickerEditViewController : UIViewController <IGMusicStickerLengthPickerViewDelegate, IGMusicStickerPlaybackControllerDelegate, IGMusicStickerEditorScrubberViewDelegate, IGStoryPrecaptureMusicBrowserViewControllerDelegate, IGAnalyticsModule, IGGestureHandler>
{
    IGStoryMediaCompositionView *_mediaCompositionView;
    UIView *_backgroundView;
    IGTapButton *_cancelButton;
    IGTapButton *_doneButton;
    UIActivityIndicatorView *_loadingSpinner;
    UILabel *_startTimeLabel;
    IGMusicStickerEditorControlsView *_controlsView;
    IGTapButton *_lengthToggle;
    IGMusicStickerLengthPickerView *_lengthPickerView;
    _Bool _lengthPickerViewVisible;
    FBTimer *_nuxTextTimer;
    UILabel *_nuxTextLabel;
    FBTimer *_chorusHintTextTimer;
    UILabel *_chorusHintTextLabel;
    IGStoryMusicTrack *_musicTrack;
    IGStoryMusicTrackClip *_musicTrackClip;
    double _totalDuration;
    double _clipDuration;
    _Bool _showClipDurationToggle;
    IGUserSession *_userSession;
    UITapGestureRecognizer *_tapGesture;
    IGDirectionalPanGestureRecognizer *_swipeUpGesture;
    _Bool _backgroundViewHidden;
    _Bool _doneButtonHidden;
    _Bool _cancelButtonHidden;
    _Bool _wasPlayingBeforeDismissed;
    _Bool _startTimeLabelVisible;
    _Bool _nuxTextVisible;
    _Bool _chorusHintTextVisible;
    _Bool _isScrubbing;
    id <IGMusicStickerEditViewControllerDelegate> _delegate;
    id <IGMusicStickerEditViewControllerPlaybackDelegate> _playbackDelegate;
    IGMusicStickerPlaybackController *_playbackController;
    double _scrubberBottomInset;
    unsigned long long _uploadStep;
    double _playbackProgress;
    NSString *_productName;
    long long _lengthToggleSeconds;
    IGStoryPrecaptureMusicBrowserViewController *_musicBrowserViewController;
    CDStruct_1b6d18a9 _startTime;
}

@property(retain, nonatomic) IGStoryPrecaptureMusicBrowserViewController *musicBrowserViewController; // @synthesize musicBrowserViewController=_musicBrowserViewController;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) _Bool chorusHintTextVisible; // @synthesize chorusHintTextVisible=_chorusHintTextVisible;
@property(nonatomic) _Bool nuxTextVisible; // @synthesize nuxTextVisible=_nuxTextVisible;
@property(nonatomic) _Bool startTimeLabelVisible; // @synthesize startTimeLabelVisible=_startTimeLabelVisible;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long lengthToggleSeconds; // @synthesize lengthToggleSeconds=_lengthToggleSeconds;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, nonatomic) _Bool wasPlayingBeforeDismissed; // @synthesize wasPlayingBeforeDismissed=_wasPlayingBeforeDismissed;
@property(nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) unsigned long long uploadStep; // @synthesize uploadStep=_uploadStep;
@property(nonatomic) double scrubberBottomInset; // @synthesize scrubberBottomInset=_scrubberBottomInset;
@property(nonatomic) _Bool cancelButtonHidden; // @synthesize cancelButtonHidden=_cancelButtonHidden;
@property(nonatomic) _Bool doneButtonHidden; // @synthesize doneButtonHidden=_doneButtonHidden;
@property(nonatomic) _Bool backgroundViewHidden; // @synthesize backgroundViewHidden=_backgroundViewHidden;
@property(readonly, nonatomic) IGMusicStickerPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
@property(nonatomic) __weak id <IGMusicStickerEditViewControllerPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(nonatomic) __weak id <IGMusicStickerEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setChorusHintTextVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setNuxTextVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setStartTimeLabelVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double controlsViewHeight;
@property(nonatomic) _Bool isPlaying;
- (void)precaptureMusicBrowserViewController:(id)arg1 didSelectMusicTrack:(id)arg2;
- (void)precaptureMusicBrowserViewControllerDidCancel:(id)arg1;
- (void)_presentMusicBrowserWithPresentingGesture:(id)arg1;
- (void)_handleSwipeUpGesture:(id)arg1;
- (void)_didTapAlbumArtButton:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_didFinishEditing;
- (void)_updateChorusHintTextForTime:(double)arg1;
- (void)_controlsViewDidEndSliding:(id)arg1;
- (void)_controlsViewDidChangeSliderValue:(id)arg1;
- (void)_controlsViewDidBeginSliding:(id)arg1;
- (void)musicScrubberView:(id)arg1 didEndScrollingToTime:(double)arg2;
- (void)musicScrubberView:(id)arg1 didScrollToTime:(double)arg2;
- (void)musicScrubberView:(id)arg1 didBeginScrollingAtTime:(double)arg2;
- (void)musicStickerPlaybackController:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)musicStickerPlaybackController:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)musicStickerPlaybackController:(id)arg1 didLoadMusicTotalDuration:(CDStruct_1b6d18a9)arg2;
- (void)musicStickerPlaybackControllerDidUpdateMuteState:(id)arg1;
- (void)musicStickerPlaybackControllerDidPause:(id)arg1;
- (void)musicStickerPlaybackControllerDidPlay:(id)arg1;
- (void)musicStickerPlaybackControllerIsReadyToPlay:(id)arg1;
- (void)_setLengthPickerVisible:(_Bool)arg1;
- (void)musicStickerLengthPickerView:(id)arg1 didFinishSelectingLength:(long long)arg2;
- (void)_didTapLengthToggle:(id)arg1;
- (void)_didTapBackground:(id)arg1;
- (void)didTapPlayPauseButton:(id)arg1;
- (void)_didTapDoneButton:(id)arg1;
- (void)_didTapCancelButton:(id)arg1;
- (id)generatePreCaptureMusicTrackClip;
- (void)stopPlaying;
- (void)playAtProgress:(double)arg1;
- (void)beginEditingMusicTrack:(id)arg1;
- (void)beginEditingMusicTrackClip:(id)arg1;
@property(nonatomic) _Bool showClipWindowOnly;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithClipRange:(CDStruct_e83c9415)arg1 showClipDurationToggle:(_Bool)arg2 userSession:(id)arg3 mediaCompositionView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

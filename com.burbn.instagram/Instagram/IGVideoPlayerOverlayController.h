//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGVideoPlaybackListener.h"
#import "IGVideoPlayerOverlayContainerViewDelegate.h"
#import "IGVideoPlayerOverlayContext.h"
#import "IGVideoPlayerOverlayVisibilityHelperDelegate.h"

@class IGUserSession, IGVideo, IGVideoPlaybackController, IGVideoPlaybackLoggingConfig, IGVideoPlayerOverlay, IGVideoPlayerOverlayConfiguration, IGVideoPlayerOverlayContainerView, IGVideoPlayerOverlayVisibilityHelper, NSString, UIView;

@interface IGVideoPlayerOverlayController : NSObject <IGVideoPlayerOverlayContainerViewDelegate, IGVideoPlayerOverlayContext, IGVideoPlayerOverlayVisibilityHelperDelegate, IGVideoPlaybackListener>
{
    IGVideoPlayerOverlay *_exclusivelyDisplayedOverlay;
    IGVideoPlayerOverlayVisibilityHelper *_visibilityHelper;
    struct NSNumber *_overlayVisibilityLockToken;
    IGUserSession *_userSession;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    IGVideoPlayerOverlayConfiguration *_overlayConfiguration;
    IGVideoPlaybackController *_playbackController;
    IGVideoPlayerOverlayContainerView *_overlayView;
    IGVideo *_video;
    unsigned long long _videoPosterImageLoadStatus;
    id <IGVideoPlayerOverlayControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGVideoPlayerOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long videoPosterImageLoadStatus; // @synthesize videoPosterImageLoadStatus=_videoPosterImageLoadStatus;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) IGVideoPlayerOverlayContainerView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak IGVideoPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
@property(copy, nonatomic) IGVideoPlayerOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
@property(readonly, nonatomic) IGVideoPlaybackLoggingConfig *loggingConfig; // @synthesize loggingConfig=_loggingConfig;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)videoPlaybackController:(id)arg1 didLoopItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackControllerDidFinishSeeking:(id)arg1;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)arg1;
- (void)videoPlaybackControllerDidStopPlayback:(id)arg1;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didUpdateLoadingProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didStartLoadingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didLoadVideoForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didRequestItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didApplySettingsForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoPlayerOverlayContainerViewDidDoubleTap:(id)arg1;
- (void)videoPlayerOverlayContainerViewDidSingleTap:(id)arg1;
- (void)videoPlayerOverlayVisibilityHelper:(id)arg1 didUpdateOverlayVisibility:(_Bool)arg2;
@property(readonly, nonatomic) _Bool overlaysVisible;
- (void)animateAlongsideOverlayVisibilityChange:(CDUnknownBlockType)arg1;
- (void)relinquishOverlayVisibilityLock:(struct NSNumber *)arg1;
- (struct NSNumber *)acquireLockOnOverlayVisibility;
- (void)makeOverlaysVisible;
- (void)stopExclusivelyDisplayingOverlay:(id)arg1;
- (_Bool)startExclusivelyDisplayingOverlay:(id)arg1;
- (void)setOverlayNeedsLayout:(id)arg1;
@property(readonly, nonatomic) UIView *tooltipContainerView;
- (void)_updateHasOverlayVisibilityLock:(_Bool)arg1;
- (id)_allOverlays;
- (void)_deregisterOverlays:(id)arg1;
- (void)_registerOverlays:(id)arg1;
- (void)resetOverlays;
- (void)configureWithVideo:(id)arg1 userSession:(id)arg2 loggingConfig:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


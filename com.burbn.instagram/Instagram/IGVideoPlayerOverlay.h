//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGVideoPlaybackListener.h"

@class IGVideoPlaybackController, NSString, UIView;

@interface IGVideoPlayerOverlay : NSObject <IGVideoPlaybackListener>
{
    _Bool _displayed;
    IGVideoPlaybackController *_playbackController;
    id <IGVideoPlayerOverlayContext> _overlayContext;
    UIView *_view;
}

@property(nonatomic, getter=isDisplayed) _Bool displayed; // @synthesize displayed=_displayed;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <IGVideoPlayerOverlayContext> overlayContext; // @synthesize overlayContext=_overlayContext;
@property(nonatomic) __weak IGVideoPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)videoPlaybackController:(id)arg1 didLoopItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackControllerDidFinishSeeking:(id)arg1;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)arg1;
- (void)videoPlaybackControllerDidStopPlayback:(id)arg1;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlaybackController:(id)arg1 didUpdateLoadingProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didStartLoadingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didLoadVideoForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didRequestItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didApplySettingsForItem:(id)arg2;
- (void)setDisplayed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reset;
- (void)overlayContext:(id)arg1 videoPosterImageLoadStatusDidChange:(unsigned long long)arg2;
- (void)overlayContextDidRegisterSingleTap:(id)arg1;
- (void)overlayContext:(id)arg1 overlayVisibilityDidChange:(_Bool)arg2;
- (void)overlayWillBeRemovedFromContext:(id)arg1;
- (void)overlayWasAddedToContext:(id)arg1;
- (void)overlayWillEndBeingDisplayed:(_Bool)arg1;
- (void)overlayWillStartBeingDisplayed:(_Bool)arg1;
- (void)layoutOverlayViews;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


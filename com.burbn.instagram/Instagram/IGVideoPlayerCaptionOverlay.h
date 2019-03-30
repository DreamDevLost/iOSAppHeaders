//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGVideoPlayerOverlay.h"

#import "IGVideoCaptionControllerDelegate.h"

@class IGVideoCaptionController, IGVideoCaptionView, NSString;

@interface IGVideoPlayerCaptionOverlay : IGVideoPlayerOverlay <IGVideoCaptionControllerDelegate>
{
    IGVideoCaptionView *_captionView;
    IGVideoCaptionController *_captionController;
}

- (void).cxx_destruct;
- (void)captionController:(id)arg1 didUpdateCaptionString:(id)arg2;
- (void)_updateCaptionEnabledState;
- (void)_createCaptionViewIfNeeded;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)setPlaybackController:(id)arg1;
- (void)overlayWillBeRemovedFromContext:(id)arg1;
- (void)overlayWasAddedToContext:(id)arg1;
- (void)layoutOverlayViews;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

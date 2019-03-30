//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGVideoPlayerOverlayToolbarItem.h"

#import "IGMediaOverlayDelegate.h"

@class IGMediaOverlayIndicator, NSString;

@interface IGVideoPlayerAudioIndicatorOverlay : IGVideoPlayerOverlayToolbarItem <IGMediaOverlayDelegate>
{
    IGMediaOverlayIndicator *_audioIndicator;
    _Bool _hasShownTapForSoundNUX;
    _Bool _canExpandIndicator;
}

@property(nonatomic) _Bool canExpandIndicator; // @synthesize canExpandIndicator=_canExpandIndicator;
- (void).cxx_destruct;
- (void)mediaOverlayTapped:(id)arg1;
- (void)mediaOverlayIndicator:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)_showVideoHasNoAudioIndicator;
- (_Bool)_videoHasAudio;
- (void)_updateIndicatorStateAnimated:(_Bool)arg1;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)reset;
- (void)overlayContext:(id)arg1 overlayVisibilityDidChange:(_Bool)arg2;
- (void)overlayContextDidRegisterSingleTap:(id)arg1;
- (void)setPlaybackController:(id)arg1;
- (struct UIEdgeInsets)toolbarItemInsets;
- (long long)preferredVerticalAlignment;
- (void)layoutOverlayViews;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;
@property(nonatomic) unsigned long long indicatorPosition;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class FBTimer, IGStoryCreationMediaReplyConfiguration, IGStoryMediaReplyOverlayView, IGStoryPreviewOverlayContainerView, NSString, UILabel, UIView;

@interface IGStoryMediaReplyOverlayController : NSObject <UIGestureRecognizerDelegate>
{
    IGStoryPreviewOverlayContainerView *_overlayContainerView;
    IGStoryCreationMediaReplyConfiguration *_mediaReplyConfiguration;
    id <IGStoryMediaReplyOverlayControllerDelegate> _delegate;
    UILabel *_label;
    FBTimer *_labelTimer;
    UIView *_nuxOverlay;
    _Bool _preparedForAppearanceAnimation;
    _Bool _lockInCurrentState;
    IGStoryMediaReplyOverlayView *_overlayImageView;
    long long _overlayStyle;
    struct UIOffset _thumbnailPadding;
}

@property(readonly, nonatomic) struct UIOffset thumbnailPadding; // @synthesize thumbnailPadding=_thumbnailPadding;
@property(readonly, nonatomic) long long overlayStyle; // @synthesize overlayStyle=_overlayStyle;
@property(readonly, nonatomic) IGStoryMediaReplyOverlayView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateOverlayImageViewForStyle:(long long)arg1;
- (void)_overlayTapped:(id)arg1;
- (void)_nuxOverlayTapped:(id)arg1;
- (void)_hideLabelAnimated:(_Bool)arg1;
- (void)_removeNuxStateIfNeeded;
- (void)_startLabelTimer;
- (void)_setUpNuxOverlayIfNeededWithSessionUserDefaults:(id)arg1;
- (void)_addOverlayTapGestureRecognizerToView:(id)arg1;
- (void)_setUpLabel;
- (void)_setupOverlayImageViewWithReference:(id)arg1 module:(id)arg2;
- (_Bool)isOverlayTransformed;
- (void)layoutIfNeeded;
- (void)performAppearanceAnimationIfNeeded;
- (void)prepareForAppearanceAnimation;
- (void)updateOverlayStyle:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithOverlayContainerView:(id)arg1 mediaReplyConfiguration:(id)arg2 thumbnailPadding:(struct UIOffset)arg3 sessionUserDefaults:(id)arg4 referenceMediaReplyOverlayController:(id)arg5 lockInCurrentState:(_Bool)arg6 delegate:(id)arg7 module:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


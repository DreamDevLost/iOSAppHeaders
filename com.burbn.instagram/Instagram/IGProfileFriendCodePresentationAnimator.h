//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class IGARLinkCameraOverlayViewController, IGARLinkViewController, NSString, UIView;

@interface IGProfileFriendCodePresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_IGNametagView;
    IGARLinkViewController *_ARLinkViewController;
    IGARLinkCameraOverlayViewController *_overlayViewController;
    struct CGPoint _anchorPoint;
    long long _initState;
    _Bool _isPresenting;
}

@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
- (void).cxx_destruct;
- (void)_animateDismissingTransition:(id)arg1;
- (void)_animatePresentingTransition:(id)arg1;
- (void)configWithARLinkViewController:(id)arg1 anchorPoint:(struct CGPoint)arg2 initState:(long long)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

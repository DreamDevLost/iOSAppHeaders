//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UIView, UIViewController<IGStoryStickerEditingViewControllerProtocol>;

@interface IGStoryEditableStickerZoomTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isPresentationTransition;
    struct CGPoint _initialCenterPointInWindowCoordinates;
    double _initialScale;
    double _initialRotation;
    UIView *_controlsOverlayView;
    UIView *_stickerContainerView;
    UIViewController<IGStoryStickerEditingViewControllerProtocol> *_stickerEditingViewController;
}

@property(readonly, nonatomic) __weak UIViewController<IGStoryStickerEditingViewControllerProtocol> *stickerEditingViewController; // @synthesize stickerEditingViewController=_stickerEditingViewController;
@property(readonly, nonatomic) __weak UIView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(readonly, nonatomic) __weak UIView *controlsOverlayView; // @synthesize controlsOverlayView=_controlsOverlayView;
- (void).cxx_destruct;
- (void)animateDismissalTransition:(id)arg1;
- (void)animatePresentationTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithControlsOverlayView:(id)arg1 stickerContainerView:(id)arg2 stickerEditingViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


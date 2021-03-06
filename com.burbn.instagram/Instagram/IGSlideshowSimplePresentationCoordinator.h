//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSlideshowPresentationCoordinator.h"
#import "IGViewLoadListener.h"
#import "UIGestureRecognizerDelegate.h"

@class IGDirectionalPanGestureRecognizer, IGViewController<IGSlideshowViewControllerType>, NSString, UIColor, UIPercentDrivenInteractiveTransition, UIViewController;

@interface IGSlideshowSimplePresentationCoordinator : NSObject <UIGestureRecognizerDelegate, IGViewLoadListener, IGSlideshowPresentationCoordinator>
{
    UIViewController *_presenter;
    IGViewController<IGSlideshowViewControllerType> *_presentable;
    UIColor *_backgroundColor;
    UIPercentDrivenInteractiveTransition *_interactor;
    double _dismissProgressCompletionThreshold;
    double _dismissVelocityCompletionThreshold;
    IGDirectionalPanGestureRecognizer *_dismissalPanGestureRecognizer;
    _Bool _isInteracting;
}

+ (void)presentSlideshowViewController:(id)arg1 presenter:(id)arg2 backgroundColor:(id)arg3;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_shouldCompleteTransitionWithProgress:(double)arg1 velocity:(double)arg2;
- (void)_handleDismissingPan:(id)arg1;
- (void)_attachDismissalGestureRecognizer;
- (id)_initWithSlideshowViewController:(id)arg1 presenter:(id)arg2 backgroundColor:(id)arg3;
- (void)viewControllerViewDidLoad:(id)arg1;
- (void)presentSlideshow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSlideshowPresentationCoordinator.h"
#import "IGViewDisappearListener.h"
#import "IGViewLoadListener.h"
#import "UIGestureRecognizerDelegate.h"

@class IGDirectionalPanGestureRecognizer, IGViewController<IGSlideshowViewControllerType>, NSString, UIColor, UIPercentDrivenInteractiveTransition, UIViewController<IGSlideshowFeedPreviewPresenter>;

@interface IGSlideshowFeedPreviewPresentationCoordinator : NSObject <UIGestureRecognizerDelegate, IGViewLoadListener, IGViewDisappearListener, IGSlideshowPresentationCoordinator>
{
    IGDirectionalPanGestureRecognizer *_presentationPanGestureRecognizer;
    IGDirectionalPanGestureRecognizer *_dismissalPanGestureRecognizer;
    id <UIViewControllerContextTransitioning> _context;
    UIPercentDrivenInteractiveTransition *_interactor;
    UIViewController<IGSlideshowFeedPreviewPresenter> *_presenter;
    IGViewController<IGSlideshowViewControllerType> *_presentable;
    double _maximumPanDistance;
    double _progressCompletionThreshold;
    double _velocityCompletionThreshold;
    UIColor *_backgroundColor;
    _Bool _isCurrentlyPresenting;
    _Bool _isInteracting;
}

@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_shouldCompleteTransitionWithProgress:(double)arg1 normalizedVelocity:(double)arg2;
- (void)_handleDismissingPan:(id)arg1;
- (void)_handlePresentingPan:(id)arg1;
- (void)_attachDismissalGestureRecognizer;
- (void)_calculatePresentationPanDistance;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)viewControllerViewDidLoad:(id)arg1;
- (void)presentSlideshow;
- (id)initWithSlideshowViewController:(id)arg1 presenter:(id)arg2 presenterPannableView:(id)arg3 backgroundColor:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


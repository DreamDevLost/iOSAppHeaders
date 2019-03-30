//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIViewController<IGStoryCTAInteractionControllerDelegate>;

@interface IGStoryCTAInteractionController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isInteracting;
    _Bool _shouldCompleteTransition;
    struct CGPoint _initialTranslation;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIViewController<IGStoryCTAInteractionControllerDelegate> *_interactingViewController;
    UIPercentDrivenInteractiveTransition *_transitionController;
}

@property(readonly, nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *transitionController; // @synthesize transitionController=_transitionController;
- (void).cxx_destruct;
- (void)_updateInteractionWithProgress:(double)arg1 velocity:(struct CGPoint)arg2 state:(long long)arg3;
- (void)_setupPanGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (id)initWithInteractingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGCustomViewController.h"
#import "UIViewControllerTransitioningDelegate.h"

@class FXBlurView, IGActionGroupView, NSArray, NSString, UIImageView, UIView;

@interface IGPreviewViewController : UIViewController <UIViewControllerTransitioningDelegate, IGCustomViewController>
{
    double _previousStatusBarAlpha;
    _Bool _isShowingArrowView;
    _Bool _isShowingActionView;
    _Bool _isActionViewShownBeforePanning;
    _Bool _stopProcessingPanEvents;
    _Bool _pendingDismiss;
    _Bool _viewDidAppearObserved;
    UIViewController *_contentViewControler;
    FXBlurView *_blurView;
    UIView *_movableView;
    UIView *_maskedView;
    IGActionGroupView *_actionView;
    UIImageView *_arrowView;
    double _panToHideOffset;
    NSArray *_actionItems;
    struct CGPoint _panningOrigin;
    struct CGPoint _panningViewOrigin;
    struct CGRect _sourceRect;
}

@property(nonatomic) _Bool viewDidAppearObserved; // @synthesize viewDidAppearObserved=_viewDidAppearObserved;
@property(nonatomic) _Bool pendingDismiss; // @synthesize pendingDismiss=_pendingDismiss;
@property(nonatomic) _Bool stopProcessingPanEvents; // @synthesize stopProcessingPanEvents=_stopProcessingPanEvents;
@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(nonatomic) _Bool isActionViewShownBeforePanning; // @synthesize isActionViewShownBeforePanning=_isActionViewShownBeforePanning;
@property(nonatomic) _Bool isShowingActionView; // @synthesize isShowingActionView=_isShowingActionView;
@property(nonatomic) _Bool isShowingArrowView; // @synthesize isShowingArrowView=_isShowingArrowView;
@property(nonatomic) double panToHideOffset; // @synthesize panToHideOffset=_panToHideOffset;
@property(nonatomic) struct CGPoint panningViewOrigin; // @synthesize panningViewOrigin=_panningViewOrigin;
@property(nonatomic) struct CGPoint panningOrigin; // @synthesize panningOrigin=_panningOrigin;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) IGActionGroupView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *maskedView; // @synthesize maskedView=_maskedView;
@property(retain, nonatomic) UIView *movableView; // @synthesize movableView=_movableView;
@property(retain, nonatomic) FXBlurView *blurView; // @synthesize blurView=_blurView;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIViewController *contentViewControler; // @synthesize contentViewControler=_contentViewControler;
- (void).cxx_destruct;
- (id)ig_keyViewControllers;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_resetStatusBar;
- (struct CGPoint)_inertialTranslationForTranslation:(struct CGPoint)arg1;
- (void)_showActionView;
- (void)_hideActionView;
- (void)_restoreViewsToRestingPositionAnimatedCompletion:(CDUnknownBlockType)arg1;
- (void)_panViewsWithMovableViewOrigin:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)_dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didTakeAction:(id)arg1;
- (double)_restingMovableViewY;
- (double)_restingActionViewY;
- (void)_didTap:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)didCancelPanFromExternalGestureRecognizer:(id)arg1;
- (void)didEndPanFromExternalGestureRecognizer:(id)arg1;
- (void)didPanFromExternalGestureRecognizer:(id)arg1;
- (void)didStartPanFromExternalGestureRecognizer:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)arg1 sourceRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


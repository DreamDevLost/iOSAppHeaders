//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController;

@interface IGSlidingDrawerContainerViewController : IGViewController
{
    UIView *_backgroundView;
    UIView *_contentBackgroundView;
    UITapGestureRecognizer *_backgroundTapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    UIViewController *_contentController;
    struct CGRect _contentFrameForGestureStart;
    double _gestureTranslationX;
    id <IGSlidingDrawerContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGSlidingDrawerContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)ig_keyViewControllers;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)addChildViewController:(id)arg1;
- (void)_didTapBackground:(id)arg1;
- (void)_setContentControllerOriginX:(double)arg1;
- (void)_translateContentAnimatedToOriginX:(double)arg1 velocityX:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (double)_currentContentOriginX;
- (double)_openContentOriginX;
- (double)_closedContentOriginX;
- (void)_configureWithContentViewController:(id)arg1;
- (void)updatePresentationForPanGestureRecognizer:(id)arg1;
- (void)dismissDrawerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDrawerContentViewController:(id)arg1 animated:(_Bool)arg2 fromEdgePanGestureRecognizer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end


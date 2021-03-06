//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIColor, UIImage, UIView, UIViewController;

@interface IGFullScreenTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isPresenting;
    _Bool _useCustomInitialDismissCenter;
    UIView *_mediaView;
    UIImage *_topBarSnapshot;
    UIImage *_bottomBarSnapshot;
    UIColor *_backgroundColor;
    double _finalCornerRadius;
    UIViewController *_sourceController;
    struct CGPoint _initialCenterForDismiss;
    struct CGRect _sourceRect;
}

@property(readonly, nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(nonatomic) _Bool useCustomInitialDismissCenter; // @synthesize useCustomInitialDismissCenter=_useCustomInitialDismissCenter;
@property(readonly, nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) double finalCornerRadius; // @synthesize finalCornerRadius=_finalCornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGPoint initialCenterForDismiss; // @synthesize initialCenterForDismiss=_initialCenterForDismiss;
@property(retain, nonatomic) UIImage *bottomBarSnapshot; // @synthesize bottomBarSnapshot=_bottomBarSnapshot;
@property(retain, nonatomic) UIImage *topBarSnapshot; // @synthesize topBarSnapshot=_topBarSnapshot;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
- (void).cxx_destruct;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePresentTransition:(id)arg1;
- (void)_hideStatusBarForViewControllerIfPossible:(id)arg1;
- (struct CGAffineTransform)_transformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceRect:(struct CGRect)arg1 sourceController:(id)arg2 isPresenting:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGNavigationAnimator.h"

@class IGNavigationController;

@interface IGExploreSearchTransitionAnimator : IGNavigationAnimator
{
    IGNavigationController *_navigationController;
    _Bool _isDismiss;
}

- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (void)_animatePopTransition:(id)arg1;
- (void)_animatePushTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithNavigationController:(id)arg1 isDismiss:(_Bool)arg2;

@end


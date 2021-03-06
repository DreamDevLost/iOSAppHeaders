//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString;

@interface IGSimpleCrossfadeTransitionController : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    double _crossfadeDuration;
    double _duration;
    double _delay;
}

@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithDuration:(double)arg1 delay:(double)arg2;
- (id)initWithDuration:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


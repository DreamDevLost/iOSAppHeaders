//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol IGStoryAnimatableDestinationView <NSObject>
- (void)animateVisualMessageSendWithDuration:(double)arg1 delay:(double)arg2 style:(long long)arg3 completion:(void (^)(_Bool))arg4;
- (UIView *)contentViewForTransitionAnimation;
- (_Bool)canPerformAnimation;
@end

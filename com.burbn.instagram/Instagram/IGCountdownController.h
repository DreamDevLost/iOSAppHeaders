//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimer;

@interface IGCountdownController : NSObject
{
    id <IGCountdownControllerDelegate> _delegate;
    FBTimer *_countdownTimer;
    long long _counter;
}

@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) FBTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) __weak id <IGCountdownControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopCountdownIfNeeded;
- (void)_invalidateTimer;
- (void)startCountdownFrom:(long long)arg1 countdownInterval:(double)arg2;
- (void)dealloc;

@end


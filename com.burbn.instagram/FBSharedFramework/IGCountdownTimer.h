//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface IGCountdownTimer : NSObject
{
    id <IGCountdownTimerDelegate> _delegate;
    long long _duration;
    NSTimer *_countdownTimer;
    long long _secondsLeft;
}

@property(nonatomic) long long secondsLeft; // @synthesize secondsLeft=_secondsLeft;
@property(retain, nonatomic) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <IGCountdownTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timerFired;
- (void)continueTimer;
- (void)invalidateTimer;
- (id)_newTimer;
- (void)resetTimer;
- (id)initWithDuration:(long long)arg1;

@end


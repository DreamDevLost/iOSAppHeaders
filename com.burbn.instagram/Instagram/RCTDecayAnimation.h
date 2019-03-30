//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTAnimationDriver.h"

@class NSNumber, NSString, RCTValueAnimatedNode;

@interface RCTDecayAnimation : NSObject <RCTAnimationDriver>
{
    double _velocity;
    double _deceleration;
    double _frameStartTime;
    double _fromValue;
    double _lastValue;
    long long _iterations;
    long long _currentLoop;
    CDUnknownBlockType _callback;
    _Bool _animationHasBegun;
    _Bool _animationHasFinished;
    NSNumber *_animationId;
    RCTValueAnimatedNode *_valueNode;
}

@property(nonatomic) _Bool animationHasFinished; // @synthesize animationHasFinished=_animationHasFinished;
@property(nonatomic) _Bool animationHasBegun; // @synthesize animationHasBegun=_animationHasBegun;
@property(retain, nonatomic) RCTValueAnimatedNode *valueNode; // @synthesize valueNode=_valueNode;
@property(retain, nonatomic) NSNumber *animationId; // @synthesize animationId=_animationId;
- (void).cxx_destruct;
- (void)updateValue:(double)arg1;
- (void)stepAnimationWithTime:(double)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (id)init;
- (void)resetAnimationConfig:(id)arg1;
- (id)initWithId:(id)arg1 config:(id)arg2 forNode:(id)arg3 callBack:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


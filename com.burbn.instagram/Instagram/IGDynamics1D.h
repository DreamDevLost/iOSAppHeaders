//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGDynamicsModel.h>

@interface IGDynamics1D : IGDynamicsModel
{
    _Bool _disabled;
    double _currentValue;
    double _targetValue;
    double _velocity;
    double _minValue;
    CDUnknownBlockType _stepBlock;
}

@property(copy, nonatomic) CDUnknownBlockType stepBlock; // @synthesize stepBlock=_stepBlock;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
- (void).cxx_destruct;
- (id)description;
- (_Bool)notify;
- (void)step:(double)arg1;
- (_Bool)isDone;
- (id)init;

@end


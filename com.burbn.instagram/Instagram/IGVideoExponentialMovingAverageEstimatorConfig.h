//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGVideoExponentialMovingAverageEstimatorConfig : FBValueObject <NSCopying, NSCoding>
{
    double _decayConstant;
    long long _minBytesForValidSample;
    long long _maxSampleValidityTimeInSeconds;
}

@property(readonly, nonatomic) long long maxSampleValidityTimeInSeconds; // @synthesize maxSampleValidityTimeInSeconds=_maxSampleValidityTimeInSeconds;
@property(readonly, nonatomic) long long minBytesForValidSample; // @synthesize minBytesForValidSample=_minBytesForValidSample;
@property(readonly, nonatomic) double decayConstant; // @synthesize decayConstant=_decayConstant;
- (id)initWithDecayConstant:(double)arg1 minBytesForValidSample:(long long)arg2 maxSampleValidityTimeInSeconds:(long long)arg3;

@end


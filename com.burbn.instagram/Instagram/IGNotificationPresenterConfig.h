//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGNotificationPresenterConfig : FBValueObject <NSCopying, NSCoding>
{
    unsigned long long _origin;
    double _animationDuration;
    double _yOffset;
    double _minDismissVelocity;
    double _minYDismissDelta;
}

+ (id)defaultConfigWithOrigin:(unsigned long long)arg1 yOffset:(double)arg2;
@property(readonly, nonatomic) double minYDismissDelta; // @synthesize minYDismissDelta=_minYDismissDelta;
@property(readonly, nonatomic) double minDismissVelocity; // @synthesize minDismissVelocity=_minDismissVelocity;
@property(readonly, nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) unsigned long long origin; // @synthesize origin=_origin;
- (id)initWithOrigin:(unsigned long long)arg1 animationDuration:(double)arg2 yOffset:(double)arg3 minDismissVelocity:(double)arg4 minYDismissDelta:(double)arg5;

@end


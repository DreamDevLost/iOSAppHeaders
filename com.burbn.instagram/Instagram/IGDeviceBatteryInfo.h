//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGDeviceBatteryInfo : FBValueObject <NSCopying, NSCoding>
{
    double _level;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLevel:(double)arg1 state:(long long)arg2;
- (id)initWithCoder:(id)arg1;

@end


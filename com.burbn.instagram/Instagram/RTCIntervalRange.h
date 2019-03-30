//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RTCIntervalRange : NSObject
{
    long long _min;
    long long _max;
}

@property(readonly, nonatomic) long long max; // @synthesize max=_max;
@property(readonly, nonatomic) long long min; // @synthesize min=_min;
@property(readonly, nonatomic) unique_ptr_f1df6efd nativeIntervalRange;
- (id)description;
- (id)initWithNativeIntervalRange:(const struct IntervalRange *)arg1;
- (id)initWithMin:(long long)arg1 max:(long long)arg2;
- (id)init;

@end

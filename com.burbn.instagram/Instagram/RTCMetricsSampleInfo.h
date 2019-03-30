//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface RTCMetricsSampleInfo : NSObject
{
    int _min;
    int _max;
    int _bucketCount;
    NSString *_name;
    NSDictionary *_samples;
}

@property(readonly, nonatomic) NSDictionary *samples; // @synthesize samples=_samples;
@property(readonly, nonatomic) int bucketCount; // @synthesize bucketCount=_bucketCount;
@property(readonly, nonatomic) int max; // @synthesize max=_max;
@property(readonly, nonatomic) int min; // @synthesize min=_min;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithNativeSampleInfo:(const struct SampleInfo *)arg1;

@end

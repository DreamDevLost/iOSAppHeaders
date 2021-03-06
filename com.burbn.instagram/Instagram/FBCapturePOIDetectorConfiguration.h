//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBCapturePOIDetectorConfiguration : NSObject
{
    _Bool _drawDebugBounds;
    long long _detectorType;
    double _executionTimeInterval;
    double _minimumBoundsChange;
}

@property(readonly, nonatomic) _Bool drawDebugBounds; // @synthesize drawDebugBounds=_drawDebugBounds;
@property(readonly, nonatomic) double minimumBoundsChange; // @synthesize minimumBoundsChange=_minimumBoundsChange;
@property(readonly, nonatomic) double executionTimeInterval; // @synthesize executionTimeInterval=_executionTimeInterval;
@property(readonly, nonatomic) long long detectorType; // @synthesize detectorType=_detectorType;
- (id)init;
- (id)initWithExecutionTimeInterval:(double)arg1 minimumBoundsChange:(double)arg2 drawDebugBounds:(_Bool)arg3;
- (id)initWithExecutionTimeInterval:(double)arg1 minimumBoundsChange:(double)arg2 drawDebugBounds:(_Bool)arg3 detectorType:(long long)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAnalyticsUploadWaterfall.h"

@class NSString;

@interface IGStoryAnalyticsUploadWaterfall : NSObject <IGAnalyticsUploadWaterfall>
{
    NSString *_sessionId;
    double _cameraRequestedTimestamp;
}

@property(readonly, nonatomic) double cameraRequestedTimestamp; // @synthesize cameraRequestedTimestamp=_cameraRequestedTimestamp;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)logUploadEvent:(id)arg1;
- (id)currentSessionID;
- (id)initWithSessionId:(id)arg1 cameraRequestedTimestamp:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

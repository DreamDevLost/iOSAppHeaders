//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimer, IGLiveRequestToJoinService, NSArray, NSNumber, NSString;

@interface IGLiveRequestToJoinPuller : NSObject
{
    IGLiveRequestToJoinService *_service;
    CDUnknownBlockType _countsCallback;
    CDUnknownBlockType _requestsCallback;
    FBTimer *_countsTimer;
    FBTimer *_requestsTimer;
    NSArray *_lastFetchedUsers;
    double _lastSeenTime;
    double _lastFetchedTime;
    NSNumber *_lastTotalCount;
    NSString *_broadcastId;
}

@property(copy, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
@property(copy, nonatomic) NSNumber *lastTotalCount; // @synthesize lastTotalCount=_lastTotalCount;
@property(nonatomic) double lastFetchedTime; // @synthesize lastFetchedTime=_lastFetchedTime;
@property(nonatomic) double lastSeenTime; // @synthesize lastSeenTime=_lastSeenTime;
@property(copy, nonatomic) NSArray *lastFetchedUsers; // @synthesize lastFetchedUsers=_lastFetchedUsers;
@property(retain, nonatomic) FBTimer *requestsTimer; // @synthesize requestsTimer=_requestsTimer;
@property(retain, nonatomic) FBTimer *countsTimer; // @synthesize countsTimer=_countsTimer;
@property(copy, nonatomic) CDUnknownBlockType requestsCallback; // @synthesize requestsCallback=_requestsCallback;
@property(copy, nonatomic) CDUnknownBlockType countsCallback; // @synthesize countsCallback=_countsCallback;
@property(retain, nonatomic) IGLiveRequestToJoinService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)markCountsSeen;
- (void)stopPullingRequests;
- (void)startPullingRequestsAtInterval:(double)arg1 fetchImmediately:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)stopObservingCounts;
- (void)startObservingCountsChange:(CDUnknownBlockType)arg1;
- (id)initWithBroadcastId:(id)arg1 fetcher:(id)arg2;

@end


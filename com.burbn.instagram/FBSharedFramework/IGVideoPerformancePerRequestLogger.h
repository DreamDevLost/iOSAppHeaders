//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPerformanceLogger, IGStreamingVideoCacheRequest;

@interface IGVideoPerformancePerRequestLogger : NSObject
{
    IGPerformanceLogger *_logger;
    IGStreamingVideoCacheRequest *_request;
    id <IGExperimentSetProtocol> _experimentSet;
    double _startTimestamp;
    _Bool _loadCompleted;
    _Bool _videoSessionEnded;
    _Bool _summaryBeenFetched;
    _Bool _abrUpdatePending;
    _Bool _firstByteFromCacheReceived;
    _Bool _firstByteFromNetworkReceived;
    int _instanceKey;
    long long _numStalls;
    long long _numBytesFromNetwork;
    long long _numBytesFromCache;
    double _startTime;
    double _loadEndTime;
    double _videoSessionEndTime;
    double _timeToFirstCacheByte;
    double _timeToFirstNetworkByte;
}

@property(readonly, nonatomic) double timeToFirstNetworkByte; // @synthesize timeToFirstNetworkByte=_timeToFirstNetworkByte;
@property(readonly, nonatomic) double timeToFirstCacheByte; // @synthesize timeToFirstCacheByte=_timeToFirstCacheByte;
@property(readonly, nonatomic) _Bool firstByteFromNetworkReceived; // @synthesize firstByteFromNetworkReceived=_firstByteFromNetworkReceived;
@property(readonly, nonatomic) _Bool firstByteFromCacheReceived; // @synthesize firstByteFromCacheReceived=_firstByteFromCacheReceived;
@property(readonly, nonatomic) _Bool abrUpdatePending; // @synthesize abrUpdatePending=_abrUpdatePending;
@property(readonly, nonatomic) double videoSessionEndTime; // @synthesize videoSessionEndTime=_videoSessionEndTime;
@property(readonly, nonatomic) double loadEndTime; // @synthesize loadEndTime=_loadEndTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) long long numBytesFromCache; // @synthesize numBytesFromCache=_numBytesFromCache;
@property(readonly, nonatomic) long long numBytesFromNetwork; // @synthesize numBytesFromNetwork=_numBytesFromNetwork;
@property(readonly, nonatomic) long long numStalls; // @synthesize numStalls=_numStalls;
@property(readonly, nonatomic) int instanceKey; // @synthesize instanceKey=_instanceKey;
- (void).cxx_destruct;
- (void)_logDictionary:(id)arg1 withMarkerId:(int)arg2;
- (void)_prepareForReuse;
@property(readonly, nonatomic, getter=isReadyForCleanup) _Bool readyForCleanup;
- (id)summaryDictionary;
- (void)notifyDidCompleteWithError:(id)arg1;
- (void)notifyDidReceiveBytes:(long long)arg1 fromSource:(long long)arg2;
- (void)notifyDidReceiveLoadingRequest;
- (void)notifyVideoDidStall;
- (void)updateStatsOnVideoSessionEnd;
@property(readonly, nonatomic) __weak IGStreamingVideoCacheRequest *request;
- (id)initWithQplLogger:(id)arg1 forRequest:(id)arg2 experimentSet:(id)arg3;

@end


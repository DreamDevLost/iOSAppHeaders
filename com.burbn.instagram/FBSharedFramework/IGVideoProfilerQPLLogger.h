//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPerformanceLogger;

@interface IGVideoProfilerQPLLogger : NSObject
{
    IGPerformanceLogger *_qplLogger;
}

+ (unsigned long long)_instanceKeyWithVideoId:(id)arg1 playerId:(id)arg2 representationId:(id)arg3;
+ (unsigned long long)_instanceKeyWithVideoId:(id)arg1 playerId:(id)arg2;
- (void).cxx_destruct;
- (void)_markerAnnotateWithMap:(id)arg1 withMarkerId:(long long)arg2 instanceKey:(long long)arg3;
- (void)logVideoQualitiesEventWithVideoId:(id)arg1 playerId:(id)arg2 timeMs:(long long)arg3 availableQualities:(id)arg4;
- (void)_sendHTTPTransferEventMarkerForInstanceKey:(unsigned long long)arg1 withAnnotations:(id)arg2;
- (void)_sendNetworkTransferInformationForInstanceKey:(unsigned long long)arg1 withDefaultAnnotations:(id)arg2 forQualityMetadata:(id)arg3;
- (void)_sendCacheTransferInformationForInstanceKey:(unsigned long long)arg1 withDefaultAnnotations:(id)arg2 forQualityMetadata:(id)arg3;
- (void)logFetchCompletedWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 bufferDurationMs:(long long)arg4 qualityMetadata:(id)arg5;
- (void)logQualitySelectedEventWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 videoDurationMs:(long long)arg4 videoPositionMs:(long long)arg5 currentQuality:(id)arg6 selectionMetadata:(id)arg7;
- (void)logStallEndWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 videoPositionMs:(long long)arg4 currentQuality:(id)arg5 streamingFormat:(id)arg6;
- (void)logStallStartWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 videoPositionMs:(long long)arg4 currentQuality:(id)arg5 streamingFormat:(id)arg6;
- (void)logVideoPlaybackState:(long long)arg1 videoId:(id)arg2 playReason:(long long)arg3 playerOrigin:(id)arg4 playerId:(id)arg5 videoPositionMs:(long long)arg6 videoDurationMs:(long long)arg7 videoBufferPositionMs:(long long)arg8 currentQuality:(id)arg9 nextQuality:(id)arg10 streamingFormat:(id)arg11;
- (void)logVideoPlaybackState:(long long)arg1 videoId:(id)arg2 playReason:(long long)arg3 playerOrigin:(id)arg4 playerId:(id)arg5 videoPositionMs:(long long)arg6 videoDurationMs:(long long)arg7 videoBufferPositionMs:(long long)arg8 currentQuality:(id)arg9 streamingFormat:(id)arg10;
- (id)init;

@end


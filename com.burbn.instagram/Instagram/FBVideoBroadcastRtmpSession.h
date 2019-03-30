//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBVideoBroadcastSessionBase.h"

#import "FBVideoBroadcastRtmpSession.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface FBVideoBroadcastRtmpSession : FBVideoBroadcastSessionBase <FBVideoBroadcastRtmpSession>
{
    NSString *_broadcastID;
    struct VideoConfig _originalVideoConfig;
    struct FBVideoBroadcastPipelineHolder _pipeline;
    CDStruct_9abd5f9f _config;
    struct SpeedTestConfig _speedTestConfig;
    NSObject<OS_dispatch_queue> *_videoEncodingQueue;
    NSObject<OS_dispatch_queue> *_audioEncodingQueue;
    struct mutex _pipelineMutex;
    struct unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double>>> _adaptiveBitrateStats;
    unsigned long long _lastBitrateChangeTimestamp;
    unsigned long long _lastBitrateIncreaseTimestamp;
    unsigned long long _lastBitrateDecreaseTimestamp;
    unsigned long long _lastResolutionChangeTimestamp;
    unsigned long long _lastProbeSendTimestamp;
    unsigned long long _numberOfVideoFrames;
    struct NetworkSpeedTestStatus _speedTestStatus;
    struct VideoQualityTypeWrapper _videoEncoderQualitySelection;
    shared_ptr_f32f4099 _sslFactory;
    shared_ptr_d61e43bb _reachabilityAnnouner;
    id <FBVideoBroadcastOutOfBandMessageChannel> _messageChannel;
    id <FBVideoStreamingLogger> _logger;
    struct TimeSeriesStreamWrapper _tslog;
    struct shared_ptr<facebook::mobile::xplat::livestreaming::AdaptiveBitrateAlgorithm> _abrAlgorithm;
    struct shared_ptr<facebook::mobile::xplat::livestreaming::AdaptiveBitrateInputParameterProcessor> _adaptiveBitrateInputParameterProcessor;
    Class _adaptiveBitrateResolutionAlgorithmClass;
    struct shared_ptr<RtmpSessionCallback> _rtmpSessionCallback;
    shared_ptr_75e1c217 _networkSessionFactory;
    shared_ptr_b7837d35 _audioPacketizerFactory;
    shared_ptr_0a7db57b _videoPacketizerFactory;
    _Bool _hasSentMediaDataToServer;
    _Bool _swapIsInProgress;
    _Bool _wasBatteryMonitoringEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_logTimeSeriesForStats:(struct FBVideoBroadcastSessionStatsInternal)arg1;
- (void)updateVideoEncoderConfig:(struct VideoConfig)arg1 withStats:(struct FBVideoBroadcastSessionStats)arg2;
- (void)_stopBandwidthProbing;
- (void)_sendBandwidthProbe:(unsigned int)arg1;
- (void)_updateDataRateToTargetRateRatioIfNecessary:(double)arg1;
- (void)_abrAlgorithmDidUpdateBitrate:(double)arg1 ts:(unsigned long long)arg2 stats:(struct FBVideoBroadcastSessionStatsInternal)arg3;
- (void)computeNewBitate;
- (struct CGSize)currentRtmpResolutionToSendToCS;
- (id)diskRecorder;
- (struct DiskVideoRecorderConfig)diskVideoRecorderConfig;
- (void)rtmpSessionVideoEncoderQualitySelectionDidChangeFromOldType:(int)arg1 toNewType:(int)arg2 switchReason:(const basic_string_90719d97 *)arg3;
- (void)rtmpSessionDidUpdateStreamingInfo:(const struct Info *)arg1;
- (void)rtmpSessionDidDropPackets:(shared_ptr_3f407d03)arg1 dropReason:(const basic_string_90719d97 *)arg2;
- (void)rtmpSessionDidSendPackets;
- (void)rtmpSessionWriteDidTimeout;
- (void)rtmpSessionWillReconnectDueToError:(const shared_ptr_0529d599 *)arg1;
- (void)rtmpSessionDidFailWithError:(const shared_ptr_0529d599 *)arg1;
- (void)rtmpSessionDidFinish;
- (void)rtmpSessionCompletedSpeedTestWithStatus:(const struct NetworkSpeedTestStatus *)arg1;
- (void)rtmpSessionDidConnectWithSpeedTestStatus:(const struct NetworkSpeedTestStatus *)arg1 supportsLowLatency:(_Bool)arg2;
- (void)swapFinished;
- (_Bool)prepareForSwapWithStartingInputBitrate:(double)arg1;
- (Class)videoEncoderClass;
- (void)createAndSetSecondaryEncoderIfNeeded:(struct FBVideoBroadcastPipelineHolder *)arg1;
- (id)createVideoEncoder:(id)arg1;
- (id)createAudioEncoder:(id)arg1;
- (void)setPipelineSafe:(struct FBVideoBroadcastPipelineHolder)arg1;
- (void)setupPipeline;
- (void)_flush;
- (CDStruct_1b6d18a9)networkLatencyForConnectionMeasurements:(const struct ConnectionMeasurements *)arg1;
- (CDStruct_1b6d18a9)pipelineLatencyForConnectionMeasurements:(const struct ConnectionMeasurements *)arg1;
- (struct FBVideoBroadcastSessionStatsInternal)statsImpl;
- (struct FBVideoBroadcastSessionStats)stats;
- (struct FBVideoBroadcastPipelineHolder)pipeline;
- (void)setDiskRecorder:(id)arg1;
- (CDStruct_1b6d18a9)baseTimestamp;
- (void)setBaseTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)lastSentVideoPts;
- (CDStruct_1b6d18a9)lastSentAudioPts;
- (void)sendProbeIfNecessary;
- (void)encodeVideo:(struct CMSampleBufferSmartPtr)arg1;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)_sendStreamInterruptionEnded;
- (void)_sendStreamInterrupted;
- (void)disableSpeedTest;
- (void)pause:(_Bool)arg1;
- (void)onInterruptionEnded;
- (void)onInterruptionForReasonBackground:(_Bool)arg1;
- (_Bool)hasSentMediaDataToServer;
- (void)swapVideoWidthAndHeightAfterOrientationChange;
- (struct FBVideoBroadcastRtmpSwapStats)swapStats;
- (void)disconnectWithoutSealing:(_Bool)arg1 skipFlush:(_Bool)arg2;
- (void)stop:(_Bool)arg1;
- (void)connectAndImmediatelyAllowStreaming:(_Bool)arg1;
- (void)startOffline;
- (void)updateRtmpConfig:(CDStruct_9abd5f9f)arg1;
- (void)finallyFetchedBroadcastID:(id)arg1 withWebRTCSessionConfig:(CDStruct_968ff9e3)arg2 rtmpConfig:(CDStruct_9abd5f9f)arg3 rtmpMessageChannel:(id)arg4;
- (void)_setupAbrAlgorithm:(Optional_038b8a0f)arg1;
- (id)initWithConfig:(CDStruct_9abd5f9f)arg1 broadcastID:(id)arg2 audioEncodingQueue:(id)arg3 videoEncodingQueue:(id)arg4 messageChannel:(id)arg5 sslFactory:(shared_ptr_f32f4099)arg6 reachabilityAnnouncer:(shared_ptr_d61e43bb)arg7 networkSessionFactory:(shared_ptr_75e1c217)arg8 audioPacketizerFactory:(shared_ptr_b7837d35)arg9 videoPacketizerFactory:(shared_ptr_0a7db57b)arg10 abrAlgorithmFactoryOverride:(Optional_038b8a0f)arg11 baseParams:(struct FBVideoBroadcastBaseSessionParameters)arg12 logger:(id)arg13;
- (id)initWithParams:(struct FBVideoBroadcastRtmpSessionParameters)arg1 logger:(id)arg2;

// Remaining properties
@property __weak id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate;
@property(readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;
@property(readonly, copy) NSString *debugDescription;
@property __weak id <FBVideoBroadcastSessionDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

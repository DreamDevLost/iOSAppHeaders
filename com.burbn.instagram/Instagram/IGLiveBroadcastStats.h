//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber;

@interface IGLiveBroadcastStats : NSObject
{
    _Bool _bandwidthLimitedResolution;
    _Bool _cpuLimitedResolution;
    unsigned int _encodeUsagePercent;
    unsigned int _averageEncodeMs;
    double _duration;
    double _pipelineLatency;
    NSNumber *_pipelineLatencyMin;
    NSNumber *_pipelineLatencyMax;
    double _throughput;
    NSNumber *_throughputMin;
    NSNumber *_throughputMax;
    double _throughputUsingPing;
    NSNumber *_throughputUsingPingMin;
    NSNumber *_throughputUsingPingMax;
    unsigned long long _queueSizeInBytes;
    NSNumber *_queueSizeInBytesMin;
    NSNumber *_queueSizeInBytesMax;
    double _audioQueueSizeInSeconds;
    NSNumber *_audioQueueSizeInSecondsMin;
    NSNumber *_audioQueueSizeInSecondsMax;
    double _videoQueueSizeInSeconds;
    NSNumber *_videoQueueSizeInSecondsMin;
    NSNumber *_videoQueueSizeInSecondsMax;
    double _lastSampleBufferAudioPts;
    double _lastSampleBufferVideoPts;
    double _lastSentAudioPts;
    double _lastSentVideoPts;
    unsigned long long _totalBytesSent;
    unsigned long long _totalVideoBytesSent;
    unsigned long long _totalAudioBytesSent;
    unsigned long long _elapsedTimeInMs;
    unsigned long long _audioPacketsLost;
    unsigned long long _audioPacketsSent;
    unsigned long long _videoPacketsLost;
    unsigned long long _videoPacketsSent;
    unsigned long long _videoFramesEncoded;
    unsigned long long _frameRateSent;
    unsigned long long _nacksReceived;
    unsigned long long _firsReceived;
    unsigned long long _plisReceived;
    double _lastAudioBufferProcessTimestamp;
    NSNumber *_firstAudioBufferProcessTimestamp;
    double _lastVideoBufferProcessTimestamp;
    NSNumber *_firstVideoBufferProcessTimestamp;
    NSDictionary *_abrStats;
}

@property(retain, nonatomic) NSDictionary *abrStats; // @synthesize abrStats=_abrStats;
@property(readonly, nonatomic) NSNumber *firstVideoBufferProcessTimestamp; // @synthesize firstVideoBufferProcessTimestamp=_firstVideoBufferProcessTimestamp;
@property(nonatomic) double lastVideoBufferProcessTimestamp; // @synthesize lastVideoBufferProcessTimestamp=_lastVideoBufferProcessTimestamp;
@property(readonly, nonatomic) NSNumber *firstAudioBufferProcessTimestamp; // @synthesize firstAudioBufferProcessTimestamp=_firstAudioBufferProcessTimestamp;
@property(nonatomic) double lastAudioBufferProcessTimestamp; // @synthesize lastAudioBufferProcessTimestamp=_lastAudioBufferProcessTimestamp;
@property(nonatomic) unsigned long long plisReceived; // @synthesize plisReceived=_plisReceived;
@property(nonatomic) unsigned long long firsReceived; // @synthesize firsReceived=_firsReceived;
@property(nonatomic) unsigned long long nacksReceived; // @synthesize nacksReceived=_nacksReceived;
@property(nonatomic) unsigned long long frameRateSent; // @synthesize frameRateSent=_frameRateSent;
@property(nonatomic) unsigned int averageEncodeMs; // @synthesize averageEncodeMs=_averageEncodeMs;
@property(nonatomic) unsigned int encodeUsagePercent; // @synthesize encodeUsagePercent=_encodeUsagePercent;
@property(nonatomic) _Bool cpuLimitedResolution; // @synthesize cpuLimitedResolution=_cpuLimitedResolution;
@property(nonatomic) _Bool bandwidthLimitedResolution; // @synthesize bandwidthLimitedResolution=_bandwidthLimitedResolution;
@property(nonatomic) unsigned long long videoFramesEncoded; // @synthesize videoFramesEncoded=_videoFramesEncoded;
@property(nonatomic) unsigned long long videoPacketsSent; // @synthesize videoPacketsSent=_videoPacketsSent;
@property(nonatomic) unsigned long long videoPacketsLost; // @synthesize videoPacketsLost=_videoPacketsLost;
@property(nonatomic) unsigned long long audioPacketsSent; // @synthesize audioPacketsSent=_audioPacketsSent;
@property(nonatomic) unsigned long long audioPacketsLost; // @synthesize audioPacketsLost=_audioPacketsLost;
@property(nonatomic) unsigned long long elapsedTimeInMs; // @synthesize elapsedTimeInMs=_elapsedTimeInMs;
@property(nonatomic) unsigned long long totalAudioBytesSent; // @synthesize totalAudioBytesSent=_totalAudioBytesSent;
@property(nonatomic) unsigned long long totalVideoBytesSent; // @synthesize totalVideoBytesSent=_totalVideoBytesSent;
@property(nonatomic) unsigned long long totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;
@property(nonatomic) double lastSentVideoPts; // @synthesize lastSentVideoPts=_lastSentVideoPts;
@property(nonatomic) double lastSentAudioPts; // @synthesize lastSentAudioPts=_lastSentAudioPts;
@property(nonatomic) double lastSampleBufferVideoPts; // @synthesize lastSampleBufferVideoPts=_lastSampleBufferVideoPts;
@property(nonatomic) double lastSampleBufferAudioPts; // @synthesize lastSampleBufferAudioPts=_lastSampleBufferAudioPts;
@property(readonly, nonatomic) NSNumber *videoQueueSizeInSecondsMax; // @synthesize videoQueueSizeInSecondsMax=_videoQueueSizeInSecondsMax;
@property(readonly, nonatomic) NSNumber *videoQueueSizeInSecondsMin; // @synthesize videoQueueSizeInSecondsMin=_videoQueueSizeInSecondsMin;
@property(nonatomic) double videoQueueSizeInSeconds; // @synthesize videoQueueSizeInSeconds=_videoQueueSizeInSeconds;
@property(readonly, nonatomic) NSNumber *audioQueueSizeInSecondsMax; // @synthesize audioQueueSizeInSecondsMax=_audioQueueSizeInSecondsMax;
@property(readonly, nonatomic) NSNumber *audioQueueSizeInSecondsMin; // @synthesize audioQueueSizeInSecondsMin=_audioQueueSizeInSecondsMin;
@property(nonatomic) double audioQueueSizeInSeconds; // @synthesize audioQueueSizeInSeconds=_audioQueueSizeInSeconds;
@property(readonly, nonatomic) NSNumber *queueSizeInBytesMax; // @synthesize queueSizeInBytesMax=_queueSizeInBytesMax;
@property(readonly, nonatomic) NSNumber *queueSizeInBytesMin; // @synthesize queueSizeInBytesMin=_queueSizeInBytesMin;
@property(nonatomic) unsigned long long queueSizeInBytes; // @synthesize queueSizeInBytes=_queueSizeInBytes;
@property(readonly, nonatomic) NSNumber *throughputUsingPingMax; // @synthesize throughputUsingPingMax=_throughputUsingPingMax;
@property(readonly, nonatomic) NSNumber *throughputUsingPingMin; // @synthesize throughputUsingPingMin=_throughputUsingPingMin;
@property(nonatomic) double throughputUsingPing; // @synthesize throughputUsingPing=_throughputUsingPing;
@property(readonly, nonatomic) NSNumber *throughputMax; // @synthesize throughputMax=_throughputMax;
@property(readonly, nonatomic) NSNumber *throughputMin; // @synthesize throughputMin=_throughputMin;
@property(nonatomic) double throughput; // @synthesize throughput=_throughput;
@property(readonly, nonatomic) NSNumber *pipelineLatencyMax; // @synthesize pipelineLatencyMax=_pipelineLatencyMax;
@property(readonly, nonatomic) NSNumber *pipelineLatencyMin; // @synthesize pipelineLatencyMin=_pipelineLatencyMin;
@property(nonatomic) double pipelineLatency; // @synthesize pipelineLatency=_pipelineLatency;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)asDictionary;

@end


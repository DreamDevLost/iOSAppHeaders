//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, IGVideoConfiguration, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface IGVideoWriter : NSObject
{
    _Bool _videoWritingIsFinished;
    _Bool _audioWritingIsFinished;
    _Bool _forceHighProfile;
    _Bool _omitCleanAperture;
    id <IGVideoWriterDelegate> _delegate;
    double _progress;
    NSURL *_outputFileURL;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_bufferAdaptor;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSObject<OS_dispatch_queue> *_audioQueue;
    IGVideoConfiguration *_videoConfiguration;
    double _expectedDuration;
    double _expectedFrameRate;
    long long _dataRateLimitInterval;
    double _maxKeyFrameIntervalDuration;
    NSString *_locationMetadataName;
    id <IGVideoAvgBitRateAlgorithm> _videoAvgBitRateAlgorithm;
    long long _audioAvgBitRate;
    NSString *_codec;
    NSString *_urlBase;
    struct CGSize _size;
    CDStruct_1b6d18a9 _videoDuration;
    struct CGAffineTransform _transform;
}

@property(readonly, nonatomic) NSString *urlBase; // @synthesize urlBase=_urlBase;
@property(readonly, copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property(readonly, nonatomic) long long audioAvgBitRate; // @synthesize audioAvgBitRate=_audioAvgBitRate;
@property(readonly, nonatomic) id <IGVideoAvgBitRateAlgorithm> videoAvgBitRateAlgorithm; // @synthesize videoAvgBitRateAlgorithm=_videoAvgBitRateAlgorithm;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) NSString *locationMetadataName; // @synthesize locationMetadataName=_locationMetadataName;
@property(readonly, nonatomic) double maxKeyFrameIntervalDuration; // @synthesize maxKeyFrameIntervalDuration=_maxKeyFrameIntervalDuration;
@property(readonly, nonatomic) _Bool omitCleanAperture; // @synthesize omitCleanAperture=_omitCleanAperture;
@property(readonly, nonatomic) _Bool forceHighProfile; // @synthesize forceHighProfile=_forceHighProfile;
@property(readonly, nonatomic) long long dataRateLimitInterval; // @synthesize dataRateLimitInterval=_dataRateLimitInterval;
@property(readonly, nonatomic) double expectedFrameRate; // @synthesize expectedFrameRate=_expectedFrameRate;
@property(readonly, nonatomic) double expectedDuration; // @synthesize expectedDuration=_expectedDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) IGVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(nonatomic) _Bool audioWritingIsFinished; // @synthesize audioWritingIsFinished=_audioWritingIsFinished;
@property(nonatomic) _Bool videoWritingIsFinished; // @synthesize videoWritingIsFinished=_videoWritingIsFinished;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *bufferAdaptor; // @synthesize bufferAdaptor=_bufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak id <IGVideoWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startWriting;
- (id)initWithVideoConfiguration:(id)arg1 videoAvgBitRateAlgorithm:(id)arg2 audioAvgBitRate:(long long)arg3 codec:(id)arg4 size:(struct CGSize)arg5 duration:(CDStruct_1b6d18a9)arg6 expectedDuration:(double)arg7 expectedFrameRate:(double)arg8 dataRateLimitInterval:(long long)arg9 forceHighProfile:(_Bool)arg10 omitCleanAperture:(_Bool)arg11 maxKeyFrameIntervalDuration:(double)arg12 locationMetadataName:(id)arg13 transform:(struct CGAffineTransform)arg14 urlBase:(id)arg15;
- (void)dealloc;

@end


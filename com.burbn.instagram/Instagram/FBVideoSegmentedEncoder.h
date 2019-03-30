//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetReader, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSObject<OS_dispatch_queue>;

@interface FBVideoSegmentedEncoder : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_1b6d18a9 _segmentDuration;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _cancelled
    _Bool _finishedCurrentPass;
    _Bool _useMultiPass;
    long long _imageSampleFrameInterval;
    CDStruct_1b6d18a9 _imageSampleTimestamp;
    AVAssetWriter *_writer;
    AVAssetReader *_reader;
    AVAssetWriterInput *_assetInput;
    id <FBAssetReaderOutputProtocol> _assetOutput;
    id <FBVideoProcessing> _videoProcessor;
}

@property(readonly, nonatomic) id <FBVideoProcessing> videoProcessor; // @synthesize videoProcessor=_videoProcessor;
@property(readonly, nonatomic) id <FBAssetReaderOutputProtocol> assetOutput; // @synthesize assetOutput=_assetOutput;
@property(readonly, nonatomic) AVAssetWriterInput *assetInput; // @synthesize assetInput=_assetInput;
@property(readonly, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(readonly, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
- (void).cxx_destruct;
- (void)markAsFinished;
- (void)cancelEncoding;
- (void)deliverSamplesFromPassDescription:(id)arg1;
- (void)startEncodingWithFinishCallback:(CDUnknownBlockType)arg1 progressCallback:(CDUnknownBlockType)arg2 imageCallback:(CDUnknownBlockType)arg3;
- (id)initWithAssetWriter:(id)arg1 assetReader:(id)arg2 assetInput:(id)arg3 pixelAdaptor:(id)arg4 assetOutput:(id)arg5 videoProcessor:(id)arg6 segmentDuration:(CDStruct_1b6d18a9)arg7 useMultiPass:(_Bool)arg8 imageSampleFrameInterval:(long long)arg9 imageSampleTimestamp:(CDStruct_1b6d18a9)arg10 queue:(id)arg11;

@end

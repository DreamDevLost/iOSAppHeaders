//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGVideoTranscoderProtocol.h"

@class AVAsset, AVAssetReader, IGTranscoderConfig, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGVideoTranscoder : NSObject <IGVideoTranscoderProtocol>
{
    CDStruct_1b6d18a9 _currentPresentationTime;
    CDStruct_1b6d18a9 _segmentDuration;
    unsigned long long _currentSegmentIndex;
    AVAsset *_asset;
    AVAssetReader *_reader;
    id <IGSampleBufferProvider> _videoProvider;
    id <IGMediaProcessor> _mediaProcessor;
    NSObject<OS_dispatch_queue> *_videoExportQueue;
    NSObject<OS_dispatch_queue> *_audioExportQueue;
    id <IGTranscoderProtocol> _simpleTranscoder;
    id <IGTranscoderProtocol> _audioTranscoder;
    id <IGTranscoderProtocol> _videoTranscoder;
    IGTranscoderConfig *_config;
    NSMutableArray *_segments;
    _Bool _canceled;
    _Bool _finished;
    double _currentProgress;
}

- (void).cxx_destruct;
- (id)_createSingleSegmentTranscoderWithOutputFileURL:(id)arg1 segmentDuration:(CDStruct_1b6d18a9)arg2 assetReader:(id)arg3 assetWriter:(id)arg4;
- (void)_transcodeVideoWithProgress:(CDUnknownBlockType)arg1 segmentCompletion:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 imageCompletion:(CDUnknownBlockType)arg4;
- (void)_transcodeAudioWithProgress:(CDUnknownBlockType)arg1 segmentCompletion:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_uniqueFilePathWithName:(id)arg1;
- (void)_createDirectoryIfNeeded:(id *)arg1;
- (void)_updateProgressWithCallback:(CDUnknownBlockType)arg1 presentationTime:(CDStruct_1b6d18a9)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_addSegment:(id)arg1;
- (id)_segments;
- (void)_joinSegmentsIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)startWithProgress:(CDUnknownBlockType)arg1 segmentCompletion:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 imageCompletion:(CDUnknownBlockType)arg4;
- (id)initWithAsset:(id)arg1 config:(id)arg2 mediaProcessor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


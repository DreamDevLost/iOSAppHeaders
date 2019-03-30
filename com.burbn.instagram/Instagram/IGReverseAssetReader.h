//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSampleBufferProvider.h"

@class AVAssetReaderOutput, NSMutableArray;

@interface IGReverseAssetReader : NSObject <IGSampleBufferProvider>
{
    NSMutableArray *_frameChunk;
    AVAssetReaderOutput *_output;
    CDStruct_1b6d18a9 _lastPresentationTime;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_e83c9415 _chunkTimeRange;
    CDStruct_e83c9415 _timeRange;
}

@property(readonly, nonatomic) AVAssetReaderOutput *output; // @synthesize output=_output;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) CDStruct_1b6d18a9 lastPresentationTime; // @synthesize lastPresentationTime=_lastPresentationTime;
@property(nonatomic) CDStruct_e83c9415 chunkTimeRange; // @synthesize chunkTimeRange=_chunkTimeRange;
@property(retain, nonatomic) NSMutableArray *frameChunk; // @synthesize frameChunk=_frameChunk;
- (void).cxx_destruct;
- (void)resetForTime:(id)arg1;
- (_Bool)attachAssetReader:(id)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)_loadNextChunk;
- (_Bool)_didReadAllChunks;
- (_Bool)_didFinishReadingCurrentChunk;
- (id)initWithOutput:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end


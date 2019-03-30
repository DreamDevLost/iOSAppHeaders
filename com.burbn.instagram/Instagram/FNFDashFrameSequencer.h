//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashChunkManagerDelegate.h"
#import "FNFDashFrameSequencing.h"

@class FNFDashPlaylist, FNFDashVideoPlayerMetadata, NSMutableArray;

@interface FNFDashFrameSequencer : NSObject <FNFDashFrameSequencing, FNFDashChunkManagerDelegate>
{
    struct FNFDashConfig _config;
    FNFDashPlaylist *_playlist;
    FNFDashVideoPlayerMetadata *_playerMetadata;
    id <FNFDashFrameSequencerDelegate> _delegate;
    id <FNFBandwidthProvider> _bandwidthProvider;
    id <FNFDashErrorListening> _errorListener;
    NSMutableArray *_videoChunks;
    NSMutableArray *_audioChunks;
    CDStruct_1b6d18a9 _playbackTime;
    CDStruct_1b6d18a9 _timeLoaded[2];
    _Bool _fullyDownloaded[2];
    _Bool _stallingTracks[2];
    int _unstallCount;
    CDUnknownBlockType _playerCheckForStallCallback;
    _Bool _videoPtsOffsetInitialized;
    long long _videoPtsOffset;
}

- (void).cxx_destruct;
- (_Bool)_shouldAudioPlay;
- (double)_unstallThresholdInSeconds;
- (double)_stallThresholdInSeconds;
- (void)_updateTimeLoaded;
- (_Bool)_shouldResetAssetToBeginningForTrack:(long long)arg1;
- (_Bool)_shouldStallWithPlaybackTime:(CDStruct_1b6d18a9)arg1 stallThresholdInSeconds:(double)arg2 track:(long long)arg3;
- (_Bool)_shouldStallWithPlaybackTime:(CDStruct_1b6d18a9)arg1 stallThresholdInSeconds:(double)arg2;
- (id)_chunksToPlayForTrack:(long long)arg1;
- (void)chunksRemoved:(id)arg1;
- (void)chunkReceived:(id)arg1;
- (void)headerReceived:(id)arg1;
- (double)timeUntilStallForTrack:(long long)arg1 playbackTime:(CDStruct_1b6d18a9)arg2;
- (void)seekInitiatedToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldResetAssetToBeginning;
- (_Bool)stallingForTrack:(long long)arg1;
- (_Bool)shouldRestartAfterStallingWithPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldPauseForStallingWithNextCheckCallback:(CDUnknownBlockType)arg1 stallReason:(int)arg2 playbackTime:(CDStruct_1b6d18a9)arg3;
- (CDStruct_1b6d18a9)latestTimeLoaded;
- (id)servingRepresentationIdForTrack:(long long)arg1;
- (void)advanceFrameForTrack:(long long)arg1;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (CDStruct_25a1edb3)currentFrameMetadataForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithConfig:(struct FNFDashConfig)arg1 playlist:(id)arg2 playerMetadata:(id)arg3 bandwidthProvider:(id)arg4 errorListener:(id)arg5;

@end


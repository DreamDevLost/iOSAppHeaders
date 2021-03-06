//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashRepresentable.h"

@class FNFDashTrackMetadata;

@interface FNFDashFragmentedRepresentation : NSObject <FNFDashRepresentable>
{
    FNFDashTrackMetadata *_trackMetadata;
    long long _track;
    id <FNFDashHeading> _header;
}

- (void).cxx_destruct;
- (_Bool)updateOnErrorIsFatal:(id)arg1;
- (id)resourceHost;
- (_Bool)containsABRPolicyTag:(id)arg1;
- (unsigned int)bandwidth;
- (struct CGSize)videoSize;
- (id)qualityLabel;
- (id)urlForPrefetchCacheForChunkSequenceIndex:(int)arg1;
- (void)removeTimelinesWithMaxSequenceIndex:(int)arg1;
- (void)resetTimelines;
- (void)updateWithTrackMetadata:(id)arg1 isFinalUpdate:(_Bool)arg2 playbackTime:(CDStruct_1b6d18a9)arg3 currentSequenceIndex:(int)arg4 firstUnfetchedSequenceIndex:(int)arg5;
- (id)fetchRangeForChunkSequenceIndex:(int)arg1;
- (id)fetchRangeForHeader;
- (int)sequenceIndexForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)absoluteEndTimeForChunkSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)absoluteStartTimeForChunkSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)endTimePositionForChunkSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)startTimePositionForChunkSequenceIndex:(int)arg1;
- (int)numberOfChunks;
- (id)audioChannelConfiguration;
- (id)audioCodecDescription;
- (id)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (id)projection;
- (CDStruct_1b6d18a9)duration;
- (id)header;
- (_Bool)isDefault;
- (id)representationId;
- (id)description;
- (id)initWithTrackMetadata:(id)arg1 track:(long long)arg2 header:(id)arg3;

@end


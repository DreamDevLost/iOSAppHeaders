//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashHeading.h"

@class FNFDashFetchRange, NSDictionary, NSString;

@interface FNFDashWebmHeader : NSObject <FNFDashHeading>
{
    unsigned char _fetchState;
    struct FNFDashWebmSegment _segment;
    int _trackIndex;
    int _bytesFetched;
    struct opaqueCMFormatDescription *_videoFormatDescription;
    unsigned char _parseState;
    FNFDashFetchRange *_fetchRange;
    long long _track;
    NSString *_representationId;
}

+ (CDStruct_1b6d18a9)_createCMTimeFromNanoSecond:(long long)arg1;
@property(nonatomic) unsigned char parseState; // @synthesize parseState=_parseState;
@property(retain, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
@property(nonatomic) long long track; // @synthesize track=_track;
@property(retain, nonatomic) FNFDashFetchRange *fetchRange; // @synthesize fetchRange=_fetchRange;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct FNFDashWebmSegment *segment;
- (CDStruct_1b6d18a9)endTimePositionForSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)startTimePositionForSequenceIndex:(int)arg1;
- (int)lengthForSequenceIndex:(int)arg1;
- (long long)offsetForSequenceIndex:(int)arg1;
- (int)numberOfChunks;
@property(readonly, nonatomic) NSString *audioCodecDescription;
@property(readonly, nonatomic) NSDictionary *audioStreamExtraParameters;
@property(readonly, nonatomic) struct AudioStreamBasicDescription asbd;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *videoFormatDescription;
@property(readonly, nonatomic) int timescale;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) int trackIndex;
- (_Bool)parseSucceeded;
- (_Bool)fetchCompleted;
- (void)finishFetch;
- (int)remainingFetchSize;
- (void)appendFetchedData:(id)arg1;
- (void)resetFetch;
- (_Bool)fetchStarted;
- (void)startFetchWithRange:(id)arg1 representationId:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithTrack:(long long)arg1;

@end

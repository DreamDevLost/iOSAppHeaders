//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface IGStorySeenState : NSObject
{
    _Bool _recordNuxAsSeen;
    _Bool _recordNuxAsSkipped;
    _Bool _isFromDirect;
    NSString *_containerModule;
    NSString *_pushCategory;
    NSMutableDictionary *_reelSeenDictionary;
    NSMutableDictionary *_liveSeenDictionary;
    NSMutableDictionary *_reelSkippedDictionary;
    NSMutableDictionary *_liveSkippedDictionary;
}

+ (id)_keyForLiveBroadcast:(id)arg1;
+ (id)_keyForStoryItem:(id)arg1 inReelWithPK:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *liveSkippedDictionary; // @synthesize liveSkippedDictionary=_liveSkippedDictionary;
@property(readonly, nonatomic) NSMutableDictionary *reelSkippedDictionary; // @synthesize reelSkippedDictionary=_reelSkippedDictionary;
@property(readonly, nonatomic) NSMutableDictionary *liveSeenDictionary; // @synthesize liveSeenDictionary=_liveSeenDictionary;
@property(readonly, nonatomic) NSMutableDictionary *reelSeenDictionary; // @synthesize reelSeenDictionary=_reelSeenDictionary;
@property(readonly, copy, nonatomic) NSString *pushCategory; // @synthesize pushCategory=_pushCategory;
@property(readonly, copy, nonatomic) NSString *containerModule; // @synthesize containerModule=_containerModule;
@property(nonatomic) _Bool isFromDirect; // @synthesize isFromDirect=_isFromDirect;
@property(nonatomic) _Bool recordNuxAsSkipped; // @synthesize recordNuxAsSkipped=_recordNuxAsSkipped;
@property(nonatomic) _Bool recordNuxAsSeen; // @synthesize recordNuxAsSeen=_recordNuxAsSeen;
- (void).cxx_destruct;
- (void)_markTimestampForLiveBroadcast:(id)arg1 seenStateDictionary:(id)arg2;
- (void)_markTimestampForStoryItem:(id)arg1 reelPK:(id)arg2 seenStateDictionary:(id)arg3;
- (id)liveSkippedFormattedPostDictionary;
- (id)reelSkippedFormattedPostDictionary;
- (id)liveSeenFormattedPostDictionary;
- (id)reelSeenFormattedPostDictionary;
- (_Bool)liveSkippedStateIsEmpty;
- (_Bool)reelSkippedStateIsEmpty;
- (_Bool)liveSeenStateIsEmpty;
- (_Bool)reelSeenStateIsEmpty;
- (void)didSkipLiveBroadcast:(id)arg1;
- (void)didSkipStoryItem:(id)arg1 inReelWithPK:(id)arg2;
- (void)didSeeLiveBroadcast:(id)arg1;
- (void)didSeeStoryItem:(id)arg1 inReelWithPK:(id)arg2;
- (void)setContainerModule:(id)arg1 pushCategory:(id)arg2;
- (id)init;
- (id)initWithReelSeenDictionary:(id)arg1 liveSeenDictionary:(id)arg2 reelSkippedDictionary:(id)arg3 liveSkippedDictionary:(id)arg4 containerModule:(id)arg5 pushCategory:(id)arg6;

@end


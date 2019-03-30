//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryRecentStickerStore, IGStoryStickerArchiver, IGUserSession, NSArray, NSArray<IGListDiffable>;

@interface IGNametagStickerDataSource : NSObject
{
    IGStoryStickerArchiver *_stickerArchiver;
    _Bool _shouldCheckOSVersionForEmoji;
    NSArray<IGListDiffable> *_items;
    NSArray *_stickerSets;
    IGStoryRecentStickerStore *_recentStickerStore;
    IGUserSession *_userSession;
    NSArray<IGListDiffable> *_emojisAndLabels;
    NSArray *_supportedEmojiCategories;
}

+ (id)emojiStoreWithShouldCheckOSVersion:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *supportedEmojiCategories; // @synthesize supportedEmojiCategories=_supportedEmojiCategories;
@property(readonly, nonatomic) NSArray<IGListDiffable> *emojisAndLabels; // @synthesize emojisAndLabels=_emojisAndLabels;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGStoryRecentStickerStore *recentStickerStore; // @synthesize recentStickerStore=_recentStickerStore;
@property(readonly, copy, nonatomic) NSArray *stickerSets; // @synthesize stickerSets=_stickerSets;
@property(readonly, nonatomic) NSArray<IGListDiffable> *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)_emojisForCategory:(unsigned long long)arg1;
- (id)_labelViewModelForLabel:(id)arg1;
- (void)_setupEmojisAndLabels;
- (void)_setUpItems;
- (id)initWithUserSession:(id)arg1 supportedEmojiCategories:(id)arg2 shouldCheckOSVersionForEmoji:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGStoryTrayDataSource.h"
#import "IGStoryTrayEditableDataSource.h"
#import "IGStoryTrayLoggingContextDataSource.h"
#import "IGUserSessionObject.h"

@class IGFileCoordinator, IGStoryTrayDataSourceAnnouncer, IGSuggestedHighlightsDataSource, IGTVHighlightsTrayChannelViewModel, IGUserSession, NSArray, NSOrderedSet, NSString;

@interface IGHighlightsStoryTrayDataSource : NSObject <IGStoryTrayDataSource, IGStoryTrayEditableDataSource, IGListDiffable, IGUserSessionObject, IGStoryTrayLoggingContextDataSource>
{
    NSString *_userPK;
    IGUserSession *_userSession;
    IGStoryTrayDataSourceAnnouncer *_announcer;
    NSArray *_reels;
    NSOrderedSet *_reelPKs;
    NSArray *_trayViewModelsForLoggingContext;
    _Bool _allowCaching;
    IGFileCoordinator *_cacheCoordinator;
    _Bool _suggestedHighlightsEnabled;
    _Bool _hasInitiatedFetch;
    _Bool _showIGTVInTray;
    _Bool _showEmptyTray;
    IGTVHighlightsTrayChannelViewModel *_userIGTVChannel;
    IGSuggestedHighlightsDataSource *_suggestedHighlightsDataSource;
    long long _suggestedHighlightsUnseenCount;
}

@property(nonatomic) long long suggestedHighlightsUnseenCount; // @synthesize suggestedHighlightsUnseenCount=_suggestedHighlightsUnseenCount;
@property(readonly, nonatomic) IGSuggestedHighlightsDataSource *suggestedHighlightsDataSource; // @synthesize suggestedHighlightsDataSource=_suggestedHighlightsDataSource;
@property(readonly, nonatomic) IGTVHighlightsTrayChannelViewModel *userIGTVChannel; // @synthesize userIGTVChannel=_userIGTVChannel;
@property(readonly, nonatomic) _Bool showEmptyTray; // @synthesize showEmptyTray=_showEmptyTray;
@property(readonly, nonatomic) NSArray *reels; // @synthesize reels=_reels;
- (void).cxx_destruct;
- (void)removeFeedItems:(id)arg1 fromReelPK:(id)arg2 entryPoint:(long long)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)addFeedItems:(id)arg1 toReelPK:(id)arg2 entryPoint:(long long)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)createNewReelWithFeedItems:(id)arg1 title:(id)arg2 coverMediaID:(id)arg3 cropRect:(struct CGRect)arg4 entryPoint:(long long)arg5 creationToken:(id)arg6 onComplete:(CDUnknownBlockType)arg7;
- (void)createNewReelWithFeedItems:(id)arg1 title:(id)arg2 coverMediaID:(id)arg3 cropRect:(struct CGRect)arg4 coverUploadID:(id)arg5 entryPoint:(long long)arg6 creationToken:(id)arg7 suggestedReelID:(id)arg8 onComplete:(CDUnknownBlockType)arg9;
- (void)_removeFeedItemFromReels:(id)arg1;
- (void)_storyUploaded:(id)arg1;
- (void)_storyItemHidden:(id)arg1;
- (void)_storyItemDeleted:(id)arg1;
- (void)_deserializeCache;
- (void)_serializeResponse:(id)arg1;
- (void)_updateWithReels:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)storyTrayViewModelsForLoggingContext;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)viewModelForLiveBroadcast:(id)arg1;
- (id)viewModelForReel:(id)arg1;
- (id)allItemsForTray;
- (void)removeReelWithPK:(id)arg1;
- (void)clearSuggestedHighlights;
- (void)updateExistingReel:(id)arg1 moveToFront:(_Bool)arg2;
- (void)updateWithNewReel:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)tryFetchInitial;
- (void)fetch;
- (id)initWithUserPK:(id)arg1 userSession:(id)arg2 allowCaching:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

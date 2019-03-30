//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedNetworkSource.h"

@class IGFeedFilter, IGFeedPaginationInfo, IGMainFeedResponseParser, IGMainFeedResponseStore, IGMainFeedUpdateResult, NSArray, NSString;

@interface IGMainFeedNetworkSource : IGFeedNetworkSource
{
    _Bool _localChangeDetection;
    IGMainFeedResponseStore *_responseStore;
    IGMainFeedResponseParser *_mainFeedResponseParser;
    long long _maximumTailLoadAttempts;
    long long _tailLoadAttempts;
    long long _minimumPageSize;
    long long _startingItemCount;
    _Bool _isCachedResults;
    _Bool _shouldPrefetchExploreOnStartup;
    _Bool _hasDeserialized;
    _Bool _hasUnarchivedUploads;
    NSArray *_followAccountList;
    id <IGFeedNetworkSourceDefermentDelegate> _defermentDelegate;
    long long _endOfFeedPosition;
    long long _endOfFeedMediaPosition;
    IGMainFeedUpdateResult *_deferredUpdateResult;
    IGFeedPaginationInfo *_paginationInfo;
    IGFeedFilter *_filter;
}

+ (void)updateModuleGraphWithNewPosts:(id)arg1 offset:(long long)arg2 userSession:(id)arg3;
@property(nonatomic) _Bool hasUnarchivedUploads; // @synthesize hasUnarchivedUploads=_hasUnarchivedUploads;
@property(nonatomic) _Bool hasDeserialized; // @synthesize hasDeserialized=_hasDeserialized;
@property(retain, nonatomic) IGFeedFilter *filter; // @synthesize filter=_filter;
@property(retain) IGFeedPaginationInfo *paginationInfo; // @synthesize paginationInfo=_paginationInfo;
@property(retain) IGMainFeedUpdateResult *deferredUpdateResult; // @synthesize deferredUpdateResult=_deferredUpdateResult;
@property long long endOfFeedMediaPosition; // @synthesize endOfFeedMediaPosition=_endOfFeedMediaPosition;
@property long long endOfFeedPosition; // @synthesize endOfFeedPosition=_endOfFeedPosition;
@property(nonatomic) __weak id <IGFeedNetworkSourceDefermentDelegate> defermentDelegate; // @synthesize defermentDelegate=_defermentDelegate;
@property(nonatomic) _Bool shouldPrefetchExploreOnStartup; // @synthesize shouldPrefetchExploreOnStartup=_shouldPrefetchExploreOnStartup;
@property(nonatomic) _Bool isCachedResults; // @synthesize isCachedResults=_isCachedResults;
@property(readonly, nonatomic) NSArray *followAccountList; // @synthesize followAccountList=_followAccountList;
- (void).cxx_destruct;
- (id)trailingModelMatchingCondition:(CDUnknownBlockType)arg1 ignoringClasses:(id)arg2;
- (void)bumpUnseenFeedItems:(id)arg1;
- (void)_removeUncacheableItems;
- (void)loadDeferredResponse;
- (void)discardDeferredResponse;
- (id)newlySeenItemsInDeferredResponse;
- (_Bool)hasDeferredResponse;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)replaceItem:(id)arg1 withItems:(id)arg2;
- (void)updatePosts:(id)arg1;
- (_Bool)replaceItemsStartingWithItem:(id)arg1 withItems:(id)arg2 paginationInfo:(id)arg3;
- (void)removePostsFromHashtag:(id)arg1;
- (void)removePostsForUser:(id)arg1;
- (long long)removeItemsInGroupWithGroupId:(id)arg1;
- (void)removeEndOfFeedNuxModel:(id)arg1;
- (void)_removeItem:(id)arg1;
- (void)updateModelsWithParsedPosts:(id)arg1 nextMaxID:(id)arg2 config:(id)arg3 clearOut:(_Bool)arg4 response:(id)arg5;
- (id)injectedCompleteFeedResponse:(id)arg1;
- (void)deserializeData;
- (void)serializeData;
- (void)unarchiveUploads;
- (CDUnknownBlockType)parsingHandlerWithConfig:(id)arg1 allowDeferment:(_Bool)arg2;
- (CDUnknownBlockType)parsingHandlerWithConfig:(id)arg1;
- (void)handleFailureResponse:(id)arg1 responseDict:(id)arg2 requestConfig:(id)arg3 error:(id)arg4;
- (void)_handleSuccessBlockWithMainFeedResponse:(id)arg1 requestConfig:(id)arg2 isNotModifiedResponse:(_Bool)arg3;
- (CDUnknownBlockType)successHandlerWithConfig:(id)arg1;
- (_Bool)fetchDataWithParameters:(id)arg1;
- (_Bool)fetchDataWithReason:(long long)arg1 additionalParameters:(id)arg2 clientBumpedMediaIDs:(id)arg3;
- (_Bool)fetchDataWithReason:(long long)arg1;
- (_Bool)fetchMoreItemsWithPaginationInfo:(id)arg1;
- (_Bool)fetchMoreItems;
- (_Bool)fetchData;
- (id)initWithPosts:(id)arg1 nextMaxID:(id)arg2 fetchPath:(id)arg3 userSession:(id)arg4;
- (id)initWithFetchPath:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(copy) NSString *nextMaxID; // @dynamic nextMaxID;

@end

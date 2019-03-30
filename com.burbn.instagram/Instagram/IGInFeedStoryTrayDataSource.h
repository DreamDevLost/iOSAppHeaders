//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGReelSeenStateStoreListener.h"
#import "IGStoryDataControllerListener.h"
#import "IGStoryTrayDataSource.h"
#import "IGStoryTrayLoggingContextDataSource.h"

@class IGInFeedStoriesTrayModel, IGStoryTrayDataSourceAnnouncer, IGStoryTrayLoggingContext, IGUserSession, NSArray, NSString;

@interface IGInFeedStoryTrayDataSource : NSObject <IGReelSeenStateStoreListener, IGStoryDataControllerListener, IGStoryTrayLoggingContextDataSource, IGStoryTrayDataSource>
{
    IGUserSession *_userSession;
    IGStoryTrayDataSourceAnnouncer *_announcer;
    IGInFeedStoriesTrayModel *_trayModel;
    NSArray *_trayViewModels;
    IGStoryTrayLoggingContext *_loggingContext;
    long long _minStoryCount;
    NSArray *_sortedReelPKs;
}

@property(retain, nonatomic) NSArray *sortedReelPKs; // @synthesize sortedReelPKs=_sortedReelPKs;
@property(nonatomic) long long minStoryCount; // @synthesize minStoryCount=_minStoryCount;
@property(readonly, nonatomic) IGStoryTrayLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
- (void).cxx_destruct;
- (id)storyTrayViewModelsForLoggingContext;
- (void)storyDataController:(id)arg1 fetchTrayDidFailWithError:(id)arg2 httpStatusCode:(long long)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateWithRefreshType:(long long)arg2 updateDuration:(double)arg3 storyRankToken:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)reelSeenStateStoreDidUpdateReelPK:(id)arg1;
- (id)viewModelForLiveBroadcast:(id)arg1;
- (id)viewModelForReel:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)allItemsForTray;
- (id)_generateSortedReelPks;
- (id)initWithUserSession:(id)arg1 trayModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryFullscreenSectionLoggingContext, IGStoryViewerLoggingContext, IGUserSession, NSMutableDictionary;

@interface IGStoryVideoWarmupController : NSObject
{
    NSMutableDictionary *_videoPlayersByStoryItemIds;
    IGUserSession *_userSession;
    IGStoryViewerLoggingContext *_viewerLoggingContext;
    IGStoryFullscreenSectionLoggingContext *_sectionLoggingContext;
}

- (void).cxx_destruct;
- (void)_storePlayer:(id)arg1 mediaId:(id)arg2;
- (id)_warmupVideoPlayerAtIndex:(long long)arg1 items:(id)arg2;
- (id)_videoPlayersByStoryItemIdsIn:(id)arg1;
- (id)_videoPlayerForStoryItem:(id)arg1;
- (void)finishUsingVideoPlayers;
- (_Bool)_isAdWarmupExperimentEnabled;
- (_Bool)isItemWarmupEligible:(id)arg1;
- (void)warmupVideoPlayersAroundItem:(id)arg1 items:(id)arg2;
- (void)warmupVideoPlayersAroundIndex:(long long)arg1 items:(id)arg2;
- (id)playerForItem:(id)arg1;
- (void)warmupVideoPlayerForItem:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 viewerLoggingContext:(id)arg2 sectionLoggingContext:(id)arg3;

@end


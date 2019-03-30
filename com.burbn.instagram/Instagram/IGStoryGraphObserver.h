//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryDataControllerListener.h"
#import "IGStoryDataControllerStoryItemListener.h"
#import "IGUserSessionObject.h"

@class IGModuleResourceGraph, IGStoryDataController, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString;

@interface IGStoryGraphObserver : NSObject <IGUserSessionObject, IGStoryDataControllerListener, IGStoryDataControllerStoryItemListener>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    IGModuleResourceGraph *_graph;
    IGStoryDataController *_dataController;
    NSMutableOrderedSet *_reelOffsets;
    NSMutableDictionary *_reelPkItemsMap;
    NSMutableArray *_injectedReels;
    id <IGStoryDataControllerListener><IGStoryDataControllerStoryItemListener> _storyEventForwarder;
}

- (void).cxx_destruct;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchItemsDidFailForReelPK:(id)arg2 error:(id)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchTrayDidFailWithError:(id)arg2 httpStatusCode:(long long)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateWithRefreshType:(long long)arg2 updateDuration:(double)arg3 storyRankToken:(id)arg4;
- (void)_handleReelUpdated:(id)arg1;
- (void)handleRefreshWithViewModels:(id)arg1;
- (void)_rebuildGraphIncludingInjectedReels;
- (void)clearInjectedReels;
- (void)injectReels:(id)arg1 relativeTo:(long long)arg2;
- (id)initWithGraph:(id)arg1 dataController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


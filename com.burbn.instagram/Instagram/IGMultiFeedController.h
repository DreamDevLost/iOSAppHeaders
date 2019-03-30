//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedNetworkSourceDelegate.h"

@class IGFeedContext, NSArray, NSMapTable, NSMutableSet, NSString;

@interface IGMultiFeedController : NSObject <IGFeedNetworkSourceDelegate>
{
    IGFeedContext *_activeFeedContext;
    NSArray *_feedContexts;
    NSMapTable *_feedContextBySource;
    NSMapTable *_fetchStateByFeedContext;
    NSMutableSet *_remainingPreloadFeedContexts;
    id <IGMultiFeedControllerDelegate> _delegate;
    unsigned long long _selectedFeedIndex;
}

@property(nonatomic) unsigned long long selectedFeedIndex; // @synthesize selectedFeedIndex=_selectedFeedIndex;
@property(readonly, copy, nonatomic) NSArray *feedContexts; // @synthesize feedContexts=_feedContexts;
@property(nonatomic) __weak id <IGMultiFeedControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)_setFetchState:(unsigned long long)arg1 forFeedContext:(id)arg2;
- (id)_contextForFeedSource:(id)arg1;
- (_Bool)clearAllPostsIfNecessary;
- (void)reload;
- (_Bool)isLoadingMore;
- (_Bool)isLoading;
- (_Bool)loadMore;
- (void)preload;
- (unsigned long long)fetchStateForFeedContext:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *posts;
- (void)_initializeFeedContextDependents:(id)arg1;
- (id)initWithFeedContexts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


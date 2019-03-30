//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAREffectApplicator, IGAREffectBadgeController, IGUserSession, NSArray, NSMutableSet;

@interface IGAREffectCollectionController : NSObject
{
    NSMutableSet *_loggedImpressionsAREffectIDs;
    IGUserSession *_userSession;
    IGAREffectBadgeController *_arEffectBadgeController;
    IGAREffectApplicator *_arEffectApplicator;
    NSArray *_arEffectAssets;
    id <IGAREffectCollectionControllerDataSource> _dataSource;
}

@property(nonatomic) __weak id <IGAREffectCollectionControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_markAREffectAtIndexUsed:(unsigned long long)arg1;
- (id)_assetModelAtIndex:(unsigned long long)arg1;
- (void)selectItemAtIndex:(unsigned long long)arg1 effectPersistedMetadata:(id)arg2;
- (long long)indexOfItemWithID:(id)arg1;
- (void)reloadItemsForSwitcherMode:(long long)arg1;
- (void)setAllItemsAsNotViewed;
- (void)setItemAtIndexAsViewed:(long long)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (_Bool)shouldBadgeItemAtIndex:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 effectApplicator:(id)arg2 initialCameraSwitcherMode:(long long)arg3;

@end

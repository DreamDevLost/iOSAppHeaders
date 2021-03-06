//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeClientListener.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface IGDirectRealtimeStore : NSObject <IGRealtimeClientListener>
{
    NSMutableDictionary *_operationStore;
    NSMutableSet *_tombstoneStore;
}

- (void).cxx_destruct;
- (void)realtimeClientDidDisconnect;
- (void)_removeAllObjects;
- (_Bool)_processNotificationOperation:(id)arg1;
- (_Bool)_processReplaceOperation:(id)arg1;
- (_Bool)_processRemoveOperation:(id)arg1;
- (_Bool)_processAddOperation:(id)arg1;
- (_Bool)patchStoreWithOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTUIManagerObserver.h"

@class NSHashTable, NSString;

@interface RCTUIManagerObserverCoordinator : NSObject <RCTUIManagerObserver>
{
    NSHashTable *_observers;
    struct mutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)uiManagerDidPerformMounting:(id)arg1;
- (_Bool)uiManager:(id)arg1 performMountingWithBlock:(CDUnknownBlockType)arg2;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)uiManagerDidPerformLayout:(id)arg1;
- (void)uiManagerWillPerformLayout:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


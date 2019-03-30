//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimer, IGFeedStarterKit;

@interface IGFeedUpdateCollator : NSObject
{
    double _deferredUpdateDelay;
    _Bool _deferUntilRefreshComplete;
    IGFeedStarterKit *_feed;
    FBTimer *_pendingUpdateTimer;
    CDStruct_7a09f4de _pendingUpdate;
}

- (void).cxx_destruct;
- (void)_processInflightUpdate;
- (void)enqueueUpdateFeedAnimated:(_Bool)arg1 hidingRefresh:(_Bool)arg2;
- (void)deferUpdatesTillRefreshComplete;
- (id)initWithFeed:(id)arg1 deferredUpdateDelay:(double)arg2;
- (id)initWithFeed:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"
#import "NSKeyedUnarchiverDelegate.h"

@class IGFeedItemStore, IGUserStore, NSString;

@interface IGObjectCacheConsolidator : NSObject <IGUserSessionObject, NSKeyedUnarchiverDelegate>
{
    IGUserStore *_userStore;
    IGFeedItemStore *_feedItemStore;
}

- (void).cxx_destruct;
- (id)_didUnarchiverUser:(id)arg1;
- (id)_didUnarchiveFeedItem:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)_initWithFeedItemStore:(id)arg1 userStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

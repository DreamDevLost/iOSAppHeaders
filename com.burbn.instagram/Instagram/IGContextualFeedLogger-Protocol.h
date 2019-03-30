//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSDictionary;

@protocol IGContextualFeedLogger <NSObject>
@property(readonly, nonatomic) _Bool isSessionAlive;
- (NSDictionary *)navigationExtras;
- (void)logReachedEndOfFeed;
- (void)logContextualFeedBottomNuxWasTapped;
- (void)logSessionDidEndWithFeedItem:(IGFeedItem *)arg1;
- (void)logSessionDidStartWithFeedItem:(IGFeedItem *)arg1;
@end

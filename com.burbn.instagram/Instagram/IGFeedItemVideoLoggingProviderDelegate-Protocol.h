//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSDictionary, NSString;

@protocol IGFeedItemVideoLoggingProviderDelegate <NSObject>
@property(readonly, copy, nonatomic) NSString *sessionId;
- (NSDictionary *)extraVideoLoggingDictionaryForFeedItem:(IGFeedItem *)arg1;
@end


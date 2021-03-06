//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSMutableDictionary, NSString;

@interface IGUnifiedTagsListLogger : NSObject
{
    NSString *_analyticsModule;
    IGFeedItem *_feedItem;
    id <IGFeedItemLoggingProviderDelegate> _feedItemLoggingProvider;
    NSMutableDictionary *_loggedTagTypeToIDMap;
}

- (void).cxx_destruct;
- (id)_eventWithEventName:(id)arg1 tag:(id)arg2 position:(long long)arg3;
- (void)logTapForTag:(id)arg1 position:(long long)arg2;
- (void)logTagImpression:(id)arg1 position:(long long)arg2;
- (id)feedItemLoggingExtras;
- (id)tagLoggingExtrasWithListPosition:(long long)arg1;
- (id)analyticsModule;
- (id)initWithFeedItem:(id)arg1 feedItemLoggingProvider:(id)arg2 analyticsModule:(id)arg3;

@end


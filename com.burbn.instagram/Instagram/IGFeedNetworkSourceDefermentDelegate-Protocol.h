//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedNetworkSource, NSArray, NSString;

@protocol IGFeedNetworkSourceDefermentDelegate <NSObject>
- (void)feedNetworkSourceDidDiscardDeferredResponse:(IGFeedNetworkSource *)arg1;
- (void)feedNetworkSource:(IGFeedNetworkSource *)arg1 didDeferLoadingObjects:(NSArray *)arg2 message:(NSString *)arg3;
- (_Bool)feedNetworkSource:(IGFeedNetworkSource *)arg1 shouldDeferResponseProcessingForFetchReason:(long long)arg2 hasNewObjects:(_Bool)arg3;
@end

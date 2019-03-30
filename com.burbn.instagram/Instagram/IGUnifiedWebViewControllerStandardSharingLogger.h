//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUnifiedWebViewControllerSharingLogger.h"

@class IGFeedItem, IGFeedItemTracker, NSString;

@interface IGUnifiedWebViewControllerStandardSharingLogger : NSObject <IGUnifiedWebViewControllerSharingLogger>
{
    IGFeedItem *_feedItem;
    IGFeedItemTracker *_tracker;
    NSString *_module;
}

@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) IGFeedItemTracker *tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)_concatenatedURLsForItems:(id)arg1;
- (void)webViewController:(id)arg1 forItems:(id)arg2 activityType:(id)arg3 wasCompleted:(_Bool)arg4 returnedItems:(id)arg5 activityError:(id)arg6;
- (void)webViewController:(id)arg1 displayedShareActionsForItems:(id)arg2;
- (id)initWithFeedItem:(id)arg1 feedItemTracker:(id)arg2 module:(id)arg3;

@end

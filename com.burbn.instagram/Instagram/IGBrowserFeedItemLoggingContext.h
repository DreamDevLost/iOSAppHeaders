//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBrowserLoggingContext.h"

@class IGBrowserSession, IGFeedItemTracker, NSString;

@interface IGBrowserFeedItemLoggingContext : NSObject <IGBrowserLoggingContext>
{
    IGBrowserSession *_browserSession;
    IGFeedItemTracker *_feedItemTracker;
}

- (void).cxx_destruct;
- (void)browserViewController:(id)arg1 logEventWithName:(id)arg2 analytics:(id)arg3 extraDictionary:(id)arg4;
- (void)browserViewController:(id)arg1 didLaunchWithExtraDictionary:(id)arg2;
- (void)browserViewController:(id)arg1 didEndDisplayWithAnalytics:(id)arg2 extraDictionary:(id)arg3;
- (id)initWithBrowserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


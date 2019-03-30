//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAnalyticsEventLoggingProtocol.h"

@class NSString;

@interface IGNotificationExtensionAnalytics : NSObject <IGAnalyticsEventLoggingProtocol>
{
}

- (void)uploadEvents;
- (void)handleApplicationWillTerminate;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)logTimeSpentForModule:(id)arg1;
- (void)handleFacebookIDUpdated:(id)arg1;
- (void)handleUserIDUpdated:(id)arg1;
- (void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3;
- (void)recordEvent:(id)arg1 forTimer:(id)arg2;
- (void)startTimer:(id)arg1 uuid:(id)arg2;
- (void)startTimer:(id)arg1;
- (void)incrementCounter:(id)arg1 byAmount:(long long)arg2;
- (void)incrementCounter:(id)arg1;
- (void)setFunnelLogger:(id)arg1;
- (void)enableNoLatencyFallbackToRegularChannel;
- (void)enableLogFileCompression;
- (void)enablePeriodicUploadWithTimeInterval:(long long)arg1;
- (void)enablePerEventCounterLoggingSynchronizeAfterArchive:(_Bool)arg1;
- (void)addEventObserver:(id)arg1;
- (void)logEventImmediately:(id)arg1;
- (void)logEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


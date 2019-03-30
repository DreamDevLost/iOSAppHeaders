//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBFunnelLogger, IGAnalyticsEvent, NSString;

@protocol IGAnalyticsEventLoggingProtocol <NSObject>
- (void)addEventObserver:(id <IGAnalyticsEventObserver>)arg1;
- (void)uploadEvents;
- (void)handleApplicationWillTerminate;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)logTimeSpentForModule:(NSString *)arg1;
- (void)handleFacebookIDUpdated:(NSString *)arg1;
- (void)handleUserIDUpdated:(NSString *)arg1;
- (void)recordEvent:(NSString *)arg1 forTimer:(NSString *)arg2 uuid:(NSString *)arg3;
- (void)recordEvent:(NSString *)arg1 forTimer:(NSString *)arg2;
- (void)startTimer:(NSString *)arg1 uuid:(NSString *)arg2;
- (void)startTimer:(NSString *)arg1;
- (void)incrementCounter:(NSString *)arg1 byAmount:(long long)arg2;
- (void)incrementCounter:(NSString *)arg1;
- (void)setFunnelLogger:(FBFunnelLogger *)arg1;
- (void)enableNoLatencyFallbackToRegularChannel;
- (void)enableLogFileCompression;
- (void)enablePeriodicUploadWithTimeInterval:(long long)arg1;
- (void)enablePerEventCounterLoggingSynchronizeAfterArchive:(_Bool)arg1;
- (void)logEventImmediately:(IGAnalyticsEvent *)arg1;
- (void)logEvent:(IGAnalyticsEvent *)arg1;
@end


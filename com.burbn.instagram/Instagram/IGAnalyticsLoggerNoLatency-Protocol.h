//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAnalyticsLoggerProtocol.h"

@class FBFunnelLogger, NSString;

@protocol IGAnalyticsLoggerNoLatency <IGAnalyticsLoggerProtocol>
- (void)setFunnelLogger:(FBFunnelLogger *)arg1;
- (void)enableFallbackToRegularChannel;
- (void)uploadEventsIfNecessary;
- (void)setFacebookID:(NSString *)arg1;
- (NSString *)facebookID;
- (void)setUserID:(NSString *)arg1;
- (NSString *)userID;
@end


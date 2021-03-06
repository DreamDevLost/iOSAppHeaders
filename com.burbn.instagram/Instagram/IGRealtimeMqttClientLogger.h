//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMQTTAnalyticsLogger.h"

@class IGUserSession, NSSet;

@interface IGRealtimeMqttClientLogger : NSObject <FBMQTTAnalyticsLogger>
{
    NSSet *_allowedDefaultMQTTEvent;
    _Bool _loggingEnabled;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)logCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3;
- (void)logEvent:(id)arg1 module:(id)arg2 extraBlock:(CDUnknownBlockType)arg3;
- (void)_logUnsampledAnalyticsEvent:(id)arg1 extraBlock:(id)arg2;
- (void)logIGAnalyticsEvent:(id)arg1 extraBlock:(id)arg2;
- (id)initWithLoggingEnabled:(_Bool)arg1 userSession:(id)arg2;

@end


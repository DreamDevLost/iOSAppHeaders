//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCameraActionPerformanceLoggerProviding.h"

@class NSString;

@interface FBCameraActionPerformanceLogger : NSObject <FBCameraActionPerformanceLoggerProviding>
{
    id <FBProductionDebugLogger> _debugLogger;
    id <FBQuickPerformanceLoggerProtocol> _quickPerformanceLogger;
    id <FBCameraAnalyticsPayloadProviding> _analyticsPayloadProvider;
}

@property(retain, nonatomic) id <FBCameraAnalyticsPayloadProviding> analyticsPayloadProvider; // @synthesize analyticsPayloadProvider=_analyticsPayloadProvider;
- (void).cxx_destruct;
- (void)logExtras:(id)arg1 forEventInfo:(const struct FBCameraEventLoggingInfo *)arg2;
- (void)logPoint:(id)arg1 forEventInfo:(const struct FBCameraEventLoggingInfo *)arg2 timestamp:(double)arg3;
- (void)logPoint:(id)arg1 forEventInfo:(const struct FBCameraEventLoggingInfo *)arg2;
- (void)logStopForEventInfo:(const struct FBCameraEventLoggingInfo *)arg1 withStatus:(const variant_f50e7bf6 *)arg2 timestamp:(double)arg3;
- (void)logStopForEventInfo:(const struct FBCameraEventLoggingInfo *)arg1 withStatus:(const variant_f50e7bf6 *)arg2;
- (void)logStartForEventInfo:(const struct FBCameraEventLoggingInfo *)arg1;
- (id)initWithAnalyticsPayloadProvider:(id)arg1 quickPerformanceLogger:(id)arg2 debugLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

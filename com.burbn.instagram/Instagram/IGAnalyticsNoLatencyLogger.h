//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAnalyticsLoggerNoLatency.h"

@class FBFunnelLogger, IGAnalyticsDiagnostics, IGAnalyticsProcessingQueue, IGAnalyticsSessionIdProvider, NSString;

@interface IGAnalyticsNoLatencyLogger : NSObject <IGAnalyticsLoggerNoLatency>
{
    id <IGAnalyticsLoggerBatched> _batchedLogger;
    NSString *_APIKey;
    NSString *_clientToken;
    NSString *_appID;
    NSString *_deviceID;
    id <IGAnalyticsLogFileManagerProtocol> _fileManager;
    id <IGAnalyticsUploader> _uploader;
    _Bool _stripNonJSON;
    id <IGAnalyticsSamplingConfiguration> _samplingConfiguration;
    IGAnalyticsProcessingQueue *_queue;
    IGAnalyticsSessionIdProvider *_sessionIdProvider;
    IGAnalyticsDiagnostics *_diagnostics;
    _Bool _fallbackToRegularChannel;
    _Bool _uploadingData;
    NSString *_userID;
    NSString *_facebookID;
    FBFunnelLogger *_funnelLogger;
}

+ (void)_sendRequestForurlStrings:(id)arg1;
@property _Bool uploadingData; // @synthesize uploadingData=_uploadingData;
@property(readonly, nonatomic) FBFunnelLogger *funnelLogger; // @synthesize funnelLogger=_funnelLogger;
@property(nonatomic) _Bool fallbackToRegularChannel; // @synthesize fallbackToRegularChannel=_fallbackToRegularChannel;
@property(copy, nonatomic) NSString *facebookID; // @synthesize facebookID=_facebookID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (double)_currentTimestamp;
- (void)_logFunnelAction:(id)arg1 instanceID:(unsigned long long)arg2;
- (void)_uploadSessionDataInBackground:(id)arg1 event:(id)arg2 allowableRetries:(long long)arg3 funnelInstanceID:(unsigned long long)arg4 parameters:(id)arg5;
- (void)_uploadSessionData:(id)arg1 event:(id)arg2 allowableRetries:(long long)arg3 funnelInstanceID:(unsigned long long)arg4;
- (void)_doLogEvent:(id)arg1;
- (void)setSamplingConfiguration:(id)arg1;
- (void)setFunnelLogger:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)enableFallbackToRegularChannel;
- (void)uploadEventsIfNecessary;
- (id)initWithBatchedLogger:(id)arg1 config:(id)arg2 queue:(id)arg3 fileManager:(id)arg4 uploader:(id)arg5 sessionIdProvider:(id)arg6 diagnostics:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


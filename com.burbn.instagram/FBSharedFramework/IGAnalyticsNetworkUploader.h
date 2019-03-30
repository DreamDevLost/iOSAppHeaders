//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAnalyticsUploader.h"

@class IGAnalyticsDiagnostics, IGAnalyticsProcessingQueue, NSString, NSURL, UIApplication;

@interface IGAnalyticsNetworkUploader : NSObject <IGAnalyticsUploader>
{
    _Bool _processing;
    unsigned long long _retryCount;
    long long _allowableFailureRetryCount;
    IGAnalyticsProcessingQueue *_queue;
    unsigned long long _backgroundTaskIdentifier;
    id <IGAnalyticsLogFileManagerProtocol> _fileManager;
    NSString *_apiKey;
    NSString *_clientToken;
    _Bool _logOperations;
    _Bool _loggingEnabled;
    NSString *_channelName;
    UIApplication *_application;
    _Bool _aldrinMode;
    long long _maxNumberOfLogFiles;
    long long _maxNumberOfRetries;
    long long _numberOfFilesToRetainAfterCleanup;
    _Bool _retryUploadIndefinitelyForCertainErrors;
    id <IGNetworking> _networker;
    id <IGNetworkingConnectionManagerProtocol> _connectionManager;
    _Bool _uploadLogsAfterCleanup;
    id <IGAnalyticsSamplingConfiguration> _samplingConfiguration;
    IGAnalyticsDiagnostics *_diagnostics;
    long long _retryDelaySeconds;
    NSURL *_currentFileURL;
    _Bool _preventDoubleUploadEnabled;
}

- (void).cxx_destruct;
- (void)_incrementRequestFailureCounterBasedOnError:(id)arg1;
- (void)_trackRequestDuration:(double)arg1;
- (void)_incrementRequestCompleteCounter;
- (void)_incrementRequestStartCounter;
- (void)_logFileDeletedNotSent;
- (void)_logTrimmingFileCount:(unsigned long long)arg1;
- (_Bool)uploadWithParameters:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)_scheduleRetryWithRetryCount:(long long)arg1;
- (void)_finishProcessingLogFile:(id)arg1;
- (void)_fileFailedToSuccessfullyUpload:(id)arg1 errorShouldAllowIndefiniteRetries:(_Bool)arg2;
- (_Bool)_sendAnalyticsLogsInFile:(id)arg1;
- (void)_processNextLogFile;
- (void)setSamplingConfiguration:(id)arg1;
- (void)processLogFiles;
- (void)prepareLogFile:(id)arg1;
- (id)initWithConfig:(id)arg1 queue:(id)arg2 fileManager:(id)arg3 logOperations:(_Bool)arg4 loggingEnabled:(_Bool)arg5 channelName:(id)arg6 application:(id)arg7 networker:(id)arg8 connectionManager:(id)arg9 diagnostics:(id)arg10;

@end


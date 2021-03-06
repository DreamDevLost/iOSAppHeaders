//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface FBBreakpadExceptionHandler : NSObject
{
    _Bool _hadCrashesOnStartup;
    NSMutableSet *_breakpadExtraParameters;
    long long _currentSessionGeneratedStackTracesCount;
    void *_breakpad;
}

- (void).cxx_destruct;
- (id)_crashPathFromConfigName:(id)arg1 dumpDirectory:(id)arg2;
- (id)_crashReportsToUpload;
- (void)recreateExceptionBackgroundNSURLSessionWithDelegate:(id)arg1;
- (void)saveLastFatalCrashReport:(id)arg1;
- (void)cleanupCrashReport:(id)arg1;
- (void)handleBackgroundCrashReportUploadingCompletion:(id)arg1 error:(id)arg2;
- (int)processReports:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)breakpadGenerateReportWithParamsGetAllFiles:(id)arg1 isQuickReport:(_Bool)arg2 exception:(id)arg3;
- (id)breakpadGenerateReportWithParams:(id)arg1 isQuickReport:(_Bool)arg2;
- (id)breakpadCopyLargeParamsToNewExtraFile;
- (id)generateExtraFileName;
- (void)breakpadCleanExtra:(id)arg1;
- (long long)compareFileByCreationDate:(id)arg1 withFile:(id)arg2 inDirectory:(id)arg3;
- (void)processSingleReport:(id)arg1 crashReportConfigName:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)process:(id)arg1 asynchronouslyOnQueue:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)processSynchronously:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)process:(id)arg1;
- (void)send;
- (void)resetGeneratedStackTracesCountFromUserDefaults;
- (void)incrementGeneratedStackTracesCounter;
- (int)crashReportCountExcludingExplicitlyGeneratedStacktraces;
- (int)crashReportCount;
- (_Bool)hadCrashesOnStartup;
- (id)_latestBreakpadReportIncludingUnprocessedReports:(_Bool)arg1 startWithLatest:(_Bool)arg2;
- (id)latestUnsentBreakpadCrashReport;
- (id)latestBreakpadCrashReportIncludingUnprocessedReports;
- (id)latestBreakpadCrashReport;
- (id)genericGetBreakpadParamForKey:(id)arg1;
- (void)setExceptionInfoStringWithExpensiveWrite:(id)arg1 forKey:(id)arg2;
- (id)initWithExceptionParams:(id)arg1;

@end


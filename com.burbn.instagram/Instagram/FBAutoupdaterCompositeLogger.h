//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAutoupdaterLogger.h"

@class NSArray, NSString;

@interface FBAutoupdaterCompositeLogger : NSObject <FBAutoupdaterLogger>
{
    NSArray *_loggers;
}

- (void).cxx_destruct;
- (void)logDidHitNonCriticalError:(id)arg1 update:(id)arg2;
- (void)logBundleActivated:(id)arg1;
- (void)logProcessFailed:(id)arg1 error:(id)arg2;
- (void)logProcessCanceled:(id)arg1;
- (void)logInstallCompleted:(id)arg1;
- (void)logDeltaPatchCompleted:(id)arg1;
- (void)logUnarchiveCompleted:(id)arg1;
- (void)logDownloadCompleted:(id)arg1;
- (void)logDownloadStarted:(id)arg1;
- (void)addLogger:(id)arg1;
- (id)initWithLoggers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


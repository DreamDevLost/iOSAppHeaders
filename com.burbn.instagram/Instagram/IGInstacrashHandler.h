//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGInstacrashDetectorDelegate.h"
#import "IGInstacrashPurgerDelegate.h"

@class IGInstacrashDetector, IGInstacrashHandlerConfig, IGInstacrashLogger, IGInstacrashMitigationFetcher, IGInstacrashPurger;

@interface IGInstacrashHandler : NSObject <IGInstacrashPurgerDelegate, IGInstacrashDetectorDelegate>
{
    IGInstacrashDetector *_instacrashDetector;
    IGInstacrashHandlerConfig *_instacrashConfig;
    _Bool _recoveringAfterInstacrash;
    _Bool _forceInstacrashMitigation;
    IGInstacrashMitigationFetcher *_mitigationFetcher;
    IGInstacrashLogger *_logger;
    IGInstacrashPurger *_purger;
    _Bool _didAttemptActiveLog;
    _Bool _canCacheQEValues;
    id <IGInstacrashHandlerDataSource> _dataSource;
}

@property(nonatomic) __weak id <IGInstacrashHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_analyticsExtras:(_Bool)arg1;
- (void)_clearDataMitigation;
- (void)_didBecomeActive;
- (void)_logInstacrashMitigationCompleteEvent:(long long)arg1 startInterval:(double)arg2 endInterval:(double)arg3 fromDisk:(_Bool)arg4;
- (void)instacrashDetectionTimerDidElapse:(id)arg1;
- (void)instacrashPurgerDidClearData:(id)arg1;
- (void)instacrashPurgerWillClearData:(id)arg1;
- (void)clearFlags;
- (void)cacheQEValues:(id)arg1;
- (long long)handleInstacrash;
- (_Bool)isRecoveringAfterInstacrash;
- (id)initWithExceptionHandler:(id)arg1 canCacheQEValues:(_Bool)arg2 mitigationFetcher:(id)arg3 logger:(id)arg4 purger:(id)arg5;
- (id)initWithExceptionHandler:(id)arg1 canCacheQEValues:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARModelManagerLogging.h"

@class FBARStatefulQPLLogger, NSString;

@interface FBARModelManagerQPLLogger : NSObject <FBARModelManagerLogging>
{
    FBARStatefulQPLLogger *_statefulQPLLogger;
}

+ (id)newWithQPLLogger:(id)arg1;
- (void).cxx_destruct;
- (void)abortAllPendingEvents;
- (void)didSuccessfullyDownloadMetadataForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 loggingInfo:(id)arg3;
- (void)didFailToDownloadMetadataForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 error:(id)arg3 loggingInfo:(id)arg4;
- (void)willStartDownloadingMetadataForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 loggingInfo:(id)arg3;
- (void)didCheckCacheForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 cacheHit:(_Bool)arg3 loggingInfo:(id)arg4;
- (void)willCheckCacheForCapability:(unsigned long long)arg1 minVersion:(unsigned long long)arg2 loggingInfo:(id)arg3;
- (id)initWithQPLLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


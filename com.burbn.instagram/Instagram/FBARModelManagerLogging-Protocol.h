//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAREffectLoggingInfo, NSError;

@protocol FBARModelManagerLogging <NSObject>
- (void)abortAllPendingEvents;
- (void)didFailToDownloadMetadataForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 error:(NSError *)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)didSuccessfullyDownloadMetadataForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 loggingInfo:(FBAREffectLoggingInfo *)arg3;
- (void)willStartDownloadingMetadataForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 loggingInfo:(FBAREffectLoggingInfo *)arg3;
- (void)didCheckCacheForCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 cacheHit:(_Bool)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4;
- (void)willCheckCacheForCapability:(unsigned long long)arg1 minVersion:(unsigned long long)arg2 loggingInfo:(FBAREffectLoggingInfo *)arg3;
@end


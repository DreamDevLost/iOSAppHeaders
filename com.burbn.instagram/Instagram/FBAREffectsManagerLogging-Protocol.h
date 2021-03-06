//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAREffectLoggingInfo, NSError;

@protocol FBAREffectsManagerLogging <NSObject>
- (void)abortAllPendingEvents;
- (void)didStopEffect:(FBAREffectLoggingInfo *)arg1;
- (void)didApplyEffect:(FBAREffectLoggingInfo *)arg1;
- (void)didFailToLoadEffectWithError:(NSError *)arg1 loggingInfo:(FBAREffectLoggingInfo *)arg2;
- (void)didSuccessfullyLoadEffect:(FBAREffectLoggingInfo *)arg1;
- (void)willLoadEffect:(FBAREffectLoggingInfo *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGQPDataStore, IGQPFilterHandlersHelper, IGUserSession;

@interface IGQPEligibilityChecker : NSObject
{
    IGUserSession *_userSession;
    IGQPFilterHandlersHelper *_filterHandlersHelper;
    IGQPDataStore *_dataStore;
}

@property(nonatomic) __weak IGQPDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (_Bool)_promotionActionsAreEligible:(id)arg1 surfaceID:(id)arg2;
- (_Bool)_promotionHasReachedEventLimit:(id)arg1 debugInfo:(id *)arg2 surfaceID:(id)arg3;
- (_Bool)_isPromotionActive:(id)arg1;
- (_Bool)_promotion:(id)arg1 respondsToTriggerID:(id)arg2;
- (id)_eligibilityWaterfallWithPromotion:(id)arg1 triggerID:(id)arg2 surfaceID:(id)arg3 additionalEligibilityBlock:(CDUnknownBlockType)arg4 debugInfo:(id *)arg5;
- (_Bool)_promotionIsEligible:(id)arg1 triggerID:(id)arg2 surfaceID:(id)arg3 additionalEligibilityBlock:(CDUnknownBlockType)arg4 debugInfo:(id *)arg5;
- (id)_eligiblePromotions:(id)arg1 triggerID:(id)arg2 surfaceID:(id)arg3 additionalEligibilityBlock:(CDUnknownBlockType)arg4 returnOnlyHighestPriority:(_Bool)arg5;
- (id)chooseBestEligibleWithPromotions:(id)arg1 triggerID:(id)arg2 surfaceID:(id)arg3 additionalEligibilityBlock:(CDUnknownBlockType)arg4;
- (id)initWithDataStore:(id)arg1 userSession:(id)arg2;

@end

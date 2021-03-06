//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGQPPromotion, IGQPSurfaceID, IGQPTriggerID, UIViewController;

@protocol IGQPPresenterProtocol <NSObject>
@property(nonatomic) __weak id <IGQPDelegate> qpCoordinator;
@property(readonly, nonatomic) _Bool didPrepareContext;
@property(readonly, nonatomic) int qpType;
@property(readonly, nonatomic) IGQPPromotion *currentPromotion;
@property(readonly, copy, nonatomic) IGQPSurfaceID *qpSurfaceID;
- (void)dismissCurrentPromotion;
- (void)setBestPromotion:(IGQPPromotion *)arg1;
- (IGQPPromotion *)bestPromotionForTriggerID:(IGQPTriggerID *)arg1;

@optional
- (_Bool)presentForTriggerID:(IGQPTriggerID *)arg1 fromViewController:(UIViewController *)arg2;
- (void)didPrepareWithServerContext;
- (void)prepareWithServerContext:(id <IGQPServerContextProtocol>)arg1;
@end


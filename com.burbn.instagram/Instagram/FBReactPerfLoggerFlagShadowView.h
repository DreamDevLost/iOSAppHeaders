//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTShadowView.h"

#import "RCTUIManagerObserver.h"

@class FBReactPerfLoggerFlagData, NSString, RCTBridge;

@interface FBReactPerfLoggerFlagShadowView : RCTShadowView <RCTUIManagerObserver>
{
    RCTBridge *_bridge;
    FBReactPerfLoggerFlagData *_data;
}

- (void).cxx_destruct;
- (void)uiManagerDidPerformMounting:(id)arg1;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)uiManagerDidPerformLayout:(id)arg1;
- (void)uiManagerWillPerformLayout:(id)arg1;
- (void)_logData;
- (void)setFlagId:(long long)arg1;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


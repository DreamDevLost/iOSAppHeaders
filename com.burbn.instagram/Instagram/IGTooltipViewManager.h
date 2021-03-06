//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTBridgeModule.h"

@class IGTooltipView, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface IGTooltipViewManager : RCTViewManager <RCTBridgeModule>
{
    IGTooltipView *_tooltipView;
}

+ (const struct RCTMethodInfo *)__rct_export__481;
+ (const struct RCTMethodInfo *)__rct_export__400;
+ (id)propConfig_arrowDirection;
+ (id)propConfig_tipAnchor;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (id)getConstants;
- (id)constantsToExport;
- (id)view;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)hideAnimated:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NativeNavigationSpec.h"
#import "RCTIGUserSessionModule.h"

@class IGReactModule, IGUserSession, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface IGReactNavigator : NSObject <RCTIGUserSessionModule, NativeNavigationSpec>
{
    IGUserSession *_userSession;
    IGReactModule *_reactModule;
}

+ (const struct RCTMethodInfo *)__rct_export__21010;
+ (const struct RCTMethodInfo *)__rct_export__2059;
+ (const struct RCTMethodInfo *)__rct_export__2008;
+ (const struct RCTMethodInfo *)__rct_export__1827;
+ (const struct RCTMethodInfo *)__rct_export__1636;
+ (const struct RCTMethodInfo *)__rct_export__1565;
+ (const struct RCTMethodInfo *)__rct_export__1484;
+ (const struct RCTMethodInfo *)__rct_export__1413;
+ (const struct RCTMethodInfo *)__rct_export__1032;
+ (const struct RCTMethodInfo *)__rct_export__911;
+ (const struct RCTMethodInfo *)__rct_export__830;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
+ (void)registerOpenURLHandlerBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) IGReactModule *reactModule; // @synthesize reactModule=_reactModule;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)setInstanceStateToSave:(double)arg1 key:(id)arg2 state:(id)arg3;
- (void)getSavedInstanceState:(double)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateAppRegistryConfiguration:(id)arg1;
- (void)setRouteStack:(double)arg1 routes:(id)arg2;
- (void)replaceTarget:(double)arg1 target:(id)arg2 type:(id)arg3;
- (void)present:(double)arg1 url:(id)arg2;
- (void)updateNativeRoutesConfiguration:(id)arg1;
- (void)reloadReact;
- (void)clearRightBarButton:(double)arg1;
- (void)setBarPrimaryAction:(double)arg1 action:(id)arg2;
- (void)setBarLeftAction:(double)arg1 action:(id)arg2;
- (void)setBarTitle:(double)arg1 title:(id)arg2;
- (void)dismiss:(double)arg1 options:(id)arg2;
- (void)pop:(double)arg1;
- (void)navigate:(double)arg1 target:(id)arg2 params:(id)arg3;
- (void)popToScreen:(double)arg1 destinationReactTag:(double)arg2;
- (void)openURL:(double)arg1 url:(id)arg2;
- (id)getConstants;
- (id)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (id)initWithReactModule:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


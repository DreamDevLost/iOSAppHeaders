//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBreakpadExceptionHandler.h"

@class NSDictionary, NSString;

@protocol IGExceptionHandler <IGBreakpadExceptionHandler>
@property(readonly, nonatomic) _Bool hasEmptyCrashReport;
- (void)setReactNativeModuleName:(NSString *)arg1;
- (void)updateTopViewController:(NSString *)arg1 moduleName:(NSString *)arg2;
- (NSString *)previousAppSessionLastAppState;
- (NSString *)previousAppSessionLastModule;
- (NSString *)previousAppSessionLastVC;
- (NSString *)currentAppSessionAppState;
- (NSString *)currentAppSessionVC;
- (NSString *)currentAppSessionModule;
- (void)setExperimentsGroupsMapping:(NSDictionary *)arg1;
- (void)setThermalStateName:(NSString *)arg1;
- (void)didSwitchToNewUserPK:(NSString *)arg1 username:(NSString *)arg2;
- (void)didLogoutAllUsers;
- (void)setupWithUserSessionProvider:(id <IGUserSessionProvider>)arg1;
@end

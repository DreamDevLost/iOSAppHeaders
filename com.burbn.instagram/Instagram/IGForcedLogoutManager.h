//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLogoutForcing.h"

@class IGMultipleAccountTracker, NSString;

@interface IGForcedLogoutManager : NSObject <IGLogoutForcing>
{
    long long _serverLogoutCount;
    _Bool _isForcingOut;
    id <IGLogoutManaging> _logoutManager;
    id <IGAccountSwitching> _accountSwitcher;
    IGMultipleAccountTracker *_multipleAccountTracker;
}

- (void).cxx_destruct;
- (void)_logUserSessionOut:(id)arg1 errorTitle:(id)arg2 errorBody:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)forceLogOutUserSession:(id)arg1 sessionCookieValue:(id)arg2 userInfo:(id)arg3;
- (id)initWithLogoutManager:(id)arg1 multipleAccountTracker:(id)arg2 accountSwitcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


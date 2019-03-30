//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@protocol IGUserSessionResolving <NSObject>
- (_Bool)canSwitchAccounts;
- (NSString *)peekCurrentUserPK;
- (IGUserSession *)currentUserSession;
- (IGUserSession *)userSessionSwitchingAccountsIfNeccessaryForUserPK:(NSString *)arg1 entryPoint:(unsigned long long)arg2 displayLoginOnFailure:(_Bool)arg3;
@end

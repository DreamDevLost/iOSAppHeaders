//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession;

@interface IGShoppingPermissionsNetworker : NSObject
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)getApprovedPartnerAccountsCountWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)updateApprovedPartnerAccountsWithAddedUsers:(id)arg1 removedUsers:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;

@end


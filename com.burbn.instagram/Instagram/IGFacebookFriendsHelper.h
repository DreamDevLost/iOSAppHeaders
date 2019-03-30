//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFindFriendsHelperProtocol.h"

@class IGUserSession, NSString;

@interface IGFacebookFriendsHelper : NSObject <IGFindFriendsHelperProtocol>
{
    id <IGFindFriendsHelperDelegate> _delegate;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGFindFriendsHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onFacebookAuthFailure;
- (void)_onFacebookAuthSuccess;
- (void)updateUserTotalWithCount:(long long)arg1;
- (void)authorizeAndFetchUsersWithViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


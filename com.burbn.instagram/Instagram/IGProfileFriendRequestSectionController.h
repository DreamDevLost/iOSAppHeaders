//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGUser, IGUserSession;

@interface IGProfileFriendRequestSectionController : IGListSectionController
{
    IGUser *_user;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;

@end


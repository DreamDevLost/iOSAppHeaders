//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol IGFindFriendsHelperProtocol <NSObject>
@property(nonatomic) __weak id <IGFindFriendsHelperDelegate> delegate;
- (void)updateUserTotalWithCount:(long long)arg1;
- (void)authorizeAndFetchUsersWithViewController:(UIViewController *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAccountLogoutController, NSArray;

@protocol IGAccountLogoutControllerDelegate <NSObject>
- (void)logoutControllerWillLogoutAllUsersWithoutAllPermission:(IGAccountLogoutController *)arg1 loggedInUsers:(NSArray *)arg2;
- (void)logoutControllerDidCancelOneTapLoginCheckbox:(IGAccountLogoutController *)arg1;
- (void)logoutControllerWillPresentOneTapLoginCheckbox:(IGAccountLogoutController *)arg1;
@end


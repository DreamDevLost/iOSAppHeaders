//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryCameraPermissionViewController;

@protocol IGStoryCameraPermissionViewControllerDelegate <NSObject>
- (void)permissionViewControllerWillOpenSettings:(IGStoryCameraPermissionViewController *)arg1;
- (void)permissionViewControllerDidCancel:(IGStoryCameraPermissionViewController *)arg1;
- (void)permissionViewControllerDidTapEnableAudio:(IGStoryCameraPermissionViewController *)arg1;
- (void)permissionViewControllerDidTapEnableVideo:(IGStoryCameraPermissionViewController *)arg1;
- (void)permissionViewControllerDidAuthorizeAudioAndVideo:(IGStoryCameraPermissionViewController *)arg1;
- (void)permissionViewControllerDidAuthorizeAudio:(IGStoryCameraPermissionViewController *)arg1;
- (void)permissionViewControllerDidAuthorizeVideo:(IGStoryCameraPermissionViewController *)arg1;
@end


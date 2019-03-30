//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGProfilePictureHelper, NSString, UIImage;

@protocol IGProfilePictureHelperDelegate <NSObject>

@optional
- (void)profilePictureHelperWantsEditProfileViewToSaveChangeWithCompletionHandler:(void (^)(void))arg1;
- (void)profilePictureHelperWillPresentCameraFlow;
- (void)profilePictureHelperDidFinishFacebookAuth:(IGProfilePictureHelper *)arg1;
- (void)profilePictureHelperDidFailDownloadingProfilePicture:(IGProfilePictureHelper *)arg1;
- (void)profilePictureHelperWillStartDownloadingProfilePicture:(IGProfilePictureHelper *)arg1;
- (void)profilePictureHelperRemovePictureButtonTapped:(IGProfilePictureHelper *)arg1;
- (void)profilePictureHelper:(IGProfilePictureHelper *)arg1 willPerformAction:(long long)arg2;
- (void)profilePictureHelper:(IGProfilePictureHelper *)arg1 didFinishDownloadingAnonymousProfilePicture:(UIImage *)arg2;
- (_Bool)profilePictureHelperShouldShowRemovePicture:(IGProfilePictureHelper *)arg1;
- (void)profilePictureHelper:(IGProfilePictureHelper *)arg1 didFinishDownloadingProfilePicture:(UIImage *)arg2 fromOption:(long long)arg3;
- (void)profilePictureHelper:(IGProfilePictureHelper *)arg1 didFinishDownloadingProfilePictureWithURL:(NSString *)arg2 fromOption:(long long)arg3;
@end

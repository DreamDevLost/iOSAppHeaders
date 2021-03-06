//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGCoreTextLinkHandler.h"
#import "IGNUXPictureAddedViewDelegate.h"
#import "IGProfilePictureHelperDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "IGStandardizedNUXInterstitialViewDelegate.h"

@class IGNUXInterstitialView, IGNUXPictureAddedView, IGProfilePictureHelper, IGRUXCoordinator, IGStandardizedNUXInterstitialView, IGUserSession, NSString, UIImage;

@interface IGRegistrationAddPictureViewController : UIViewController <IGAnalyticsModule, IGProfilePictureHelperDelegate, IGProfilePictureImageViewDelegate, IGCoreTextLinkHandler, IGStandardizedNUXInterstitialViewDelegate, IGNUXPictureAddedViewDelegate>
{
    IGProfilePictureHelper *_profilePictureHelper;
    _Bool _postToFeed;
    long long _source;
    IGUserSession *_userSession;
    _Bool _shouldPrefillProfilePhoto;
    NSString *_photoURLString;
    _Bool _isNUXRedesignEnabled;
    id <IGRegistrationAddPictureViewControllerDelegate> _delegate;
    IGRUXCoordinator *_ruxCoordinator;
    UIImage *_profilePhoto;
    IGNUXInterstitialView *_addPictureView;
    IGStandardizedNUXInterstitialView *_standardizedAddPictureView;
    IGNUXPictureAddedView *_pictureAddedView;
    long long _profilePhotoOption;
}

@property(nonatomic) long long profilePhotoOption; // @synthesize profilePhotoOption=_profilePhotoOption;
@property(retain, nonatomic) IGNUXPictureAddedView *pictureAddedView; // @synthesize pictureAddedView=_pictureAddedView;
@property(retain, nonatomic) IGStandardizedNUXInterstitialView *standardizedAddPictureView; // @synthesize standardizedAddPictureView=_standardizedAddPictureView;
@property(retain, nonatomic) IGNUXInterstitialView *addPictureView; // @synthesize addPictureView=_addPictureView;
@property(retain, nonatomic) UIImage *profilePhoto; // @synthesize profilePhoto=_profilePhoto;
@property(retain, nonatomic) IGRUXCoordinator *ruxCoordinator; // @synthesize ruxCoordinator=_ruxCoordinator;
@property(nonatomic) __weak id <IGRegistrationAddPictureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pictureAddedViewDidTapNext:(id)arg1;
- (void)standardizedNUXInterstitialViewDidTapSkip:(id)arg1;
- (void)standardizedNUXInterstitialViewDidTapNext:(id)arg1;
- (long long)_actionSheetMode;
- (id)_stringForProfilePictureOption:(long long)arg1;
- (void)_logWithEventName:(id)arg1 extras:(id)arg2;
- (void)_logWithEventName:(id)arg1;
- (void)_triggerActionSheet;
- (_Bool)_shouldHideSkip;
- (void)_removeProfilePhoto;
- (void)_configurePictureAddedViewWithImage:(id)arg1 tintColor:(id)arg2;
- (id)analyticsModule;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (_Bool)profilePictureHelperShouldShowRemovePicture:(id)arg1;
- (void)profilePictureHelperDidFailDownloadingProfilePicture:(id)arg1;
- (void)profilePictureHelper:(id)arg1 willPerformAction:(long long)arg2;
- (void)profilePictureHelperRemovePictureButtonTapped:(id)arg1;
- (void)profilePictureHelperDidFinishFacebookAuth:(id)arg1;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(long long)arg3;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (void)_addPhotoButtonTapped;
- (void)_skipButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 photoURLString:(id)arg2 source:(long long)arg3 layoutSpec:(id)arg4 standardizedLayoutSpec:(id)arg5 isNUXRedesignEnabled:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


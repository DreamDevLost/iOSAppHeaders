//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGBusinessFacebookPageClaimServiceDelegate.h"
#import "IGConnectExistingPageFlowDelegate.h"
#import "IGFacebookEntrypointBadgeManagerListener.h"
#import "IGSideTrayItemSectionController.h"

@class IG4BLogger, IGBusinessFacebookPageClaimService, IGSideTrayRowItemModel, IGUserSession, NSString;

@interface IGProfileSideTrayFacebookEntrypointSectionController : IGListSectionController <IGBusinessFacebookPageClaimServiceDelegate, IGFacebookEntrypointBadgeManagerListener, IGConnectExistingPageFlowDelegate, IGSideTrayItemSectionController>
{
    IGSideTrayRowItemModel *_item;
    IGUserSession *_userSession;
    id <IGSideTrayLoggingController> _loggingController;
    _Bool _useRealTimeBadgingForFBEntrypoint;
    _Bool _qeShouldOpenAppStoreForFacebookEntrypoint;
    _Bool _qeShouldUseSingleSignOnForFacebookEntrypoint;
    _Bool _qeShowUnconnectedInterstitialForFacebookEntrypoint;
    NSString *_fbUserId;
    long long _badgeCount;
    id <IGSideTrayItemSectionControllerDelegate> _delegate;
    IGBusinessFacebookPageClaimService *_pageClaimService;
    IG4BLogger *_pageClaimLogger;
}

@property(retain, nonatomic) IG4BLogger *pageClaimLogger; // @synthesize pageClaimLogger=_pageClaimLogger;
@property(retain, nonatomic) IGBusinessFacebookPageClaimService *pageClaimService; // @synthesize pageClaimService=_pageClaimService;
@property(readonly, nonatomic) __weak id <IGSideTrayItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateFacebookEntrypointBadgeCount:(long long)arg1;
- (void)_fetchFacebookEntrypointBadgeStatus;
- (void)_navigateToFBWithNavigationController:(id)arg1;
- (void)facebookBadgeManager:(id)arg1 didFetchFBUserId:(id)arg2;
- (void)facebookBadgeManager:(id)arg1 didUpdateBadgeCount:(long long)arg2;
- (void)connectExistingPageFlow:(id)arg1 didSwitchToPage:(id)arg2;
- (id)_createPageClaimLoggerForFBUserID:(id)arg1;
- (void)_pageClaimCompletedHandler:(id)arg1 error:(id)arg2 fbAccessToken:(id)arg3;
- (void)_createPageWithFBAccessToken:(id)arg1;
- (void)_claimPageWithFBAccessToken:(id)arg1;
- (void)_loginFacebookWithSuccessHandler:(CDUnknownBlockType)arg1;
- (void)businessFacebookPageClaimServiceDidSelectCreatePage:(id)arg1;
- (void)_navigateToConnecExistingPageFlow:(id)arg1;
- (void)businessFacebookPageClaimServiceDidSelectConnectToExistingPage:(id)arg1;
- (void)businessFacebookPageClaimServiceDidSelectDismiss:(id)arg1;
- (void)businessFacebookPageClaimServiceDidSelectClaimPage:(id)arg1;
- (void)_navigateToFB:(id)arg1 userSession:(id)arg2 openClaimPage:(_Bool)arg3;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (_Bool)isBadged;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 loggingController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


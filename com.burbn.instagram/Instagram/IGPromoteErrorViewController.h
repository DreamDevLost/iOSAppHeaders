//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class IGBusinessFacebookPageClaimService, IGPromoteEnterErrorModel, IGPromoteErrorView, IGUserSession;

@interface IGPromoteErrorViewController : IGViewController
{
    IGUserSession *_userSession;
    IGPromoteErrorView *_errorView;
    IGBusinessFacebookPageClaimService *_pageClaimSerivce;
    IGPromoteEnterErrorModel *_error;
    id <IGPromoteErrorViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPromoteErrorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_onCancleBarButtonTapped;
- (void)_pageClaimCompletedHandler:(id)arg1 error:(id)arg2;
- (void)_termsLinkTapped:(id)arg1;
- (void)_changeAdAccount;
- (void)_publishPage;
- (void)_claimPage;
- (id)_createUnknownError;
- (id)_bottomButtonsViewStyle:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 error:(id)arg2;

@end


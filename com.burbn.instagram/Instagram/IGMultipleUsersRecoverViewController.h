//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGUserLoginCardSectionControllerDelegate.h"

@class IGAuthenticator, IGListAdapter, IGMultipleUsersRecoverView, IGNUXLayoutSpec, IGRetroRegistrationBackgroundView, IGVerifyMultipleUsersContext, NSString, UIButton;

@interface IGMultipleUsersRecoverViewController : UIViewController <IGListAdapterDataSource, IGUserLoginCardSectionControllerDelegate>
{
    IGVerifyMultipleUsersContext *_verifyContext;
    IGNUXLayoutSpec *_layoutSpec;
    IGRetroRegistrationBackgroundView *_backgroundView;
    IGMultipleUsersRecoverView *_recoveryView;
    UIButton *_backButton;
    IGListAdapter *_listAdapter;
    _Bool _isAuthenticating;
    IGAuthenticator *_authenticator;
    id <IGAPIClient> _networker;
    id <IGMultipleUsersRecoverViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGMultipleUsersRecoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loginUser:(id)arg1;
- (void)userLoginCardSectionControllerDidTapTappableArea:(id)arg1;
- (id)analyticsModule;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_didTapBackButton;
- (id)_createBackButton;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLoad;
- (id)initWithVerifyMultipleUsersContext:(id)arg1 networker:(id)arg2 authenticator:(id)arg3 layoutSpec:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

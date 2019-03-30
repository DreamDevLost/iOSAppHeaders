//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBusinessToolAlertViewControllerDelegate.h"
#import "IGBusinessToolAlertViewDelegate.h"
#import "IGTooltipViewDelegate.h"
#import "IGViewAppearListener.h"
#import "IGViewDisappearListener.h"
#import "UIGestureRecognizerDelegate.h"

@class IG4BLogger, IGProfileNavigationBarController, IGQuickPromotionCoordinator, IGTooltipView, IGUser, IGUserSession, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIViewController;

@interface IGProfileNUXController : NSObject <IGViewAppearListener, IGViewDisappearListener, IGBusinessToolAlertViewDelegate, IGTooltipViewDelegate, IGBusinessToolAlertViewControllerDelegate, UIGestureRecognizerDelegate>
{
    IGUser *_user;
    IGUserSession *_userSession;
    _Bool _isMainProfileSurface;
    UIViewController *_viewController;
    IGProfileNavigationBarController *_navigationBarController;
    _Bool _isCurrentUser;
    IG4BLogger *_ig4bPopUpLogger;
    IG4BLogger *_businessConversionLogger;
    IGTooltipView *_NUXView;
    UITapGestureRecognizer *_mainNuxDismissTap;
    UIPanGestureRecognizer *_mainNuxDismissDrag;
    UITapGestureRecognizer *_titleNuxDismissTap;
    _Bool _hasPostedStorySinceLastNUX;
    IGQuickPromotionCoordinator *_qpCoordinator;
    struct CGRect _savedToggleButtonFrame;
    struct CGRect _addShopButtonFrame;
    struct CGRect _editProfileButtonFrame;
}

@property(nonatomic) struct CGRect editProfileButtonFrame; // @synthesize editProfileButtonFrame=_editProfileButtonFrame;
@property(nonatomic) struct CGRect addShopButtonFrame; // @synthesize addShopButtonFrame=_addShopButtonFrame;
@property(nonatomic) struct CGRect savedToggleButtonFrame; // @synthesize savedToggleButtonFrame=_savedToggleButtonFrame;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_onStoryPosted:(id)arg1;
- (void)didTapTooltipView:(id)arg1;
- (void)businessToolAlertViewControllerDidTapDismissActionButton:(id)arg1;
- (void)businessToolAlertViewControllerDidTapActionButton:(id)arg1;
- (void)didTapActionButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapDismissActionButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapLinkInSubtitle:(id)arg1 withBusinessToolAlertView:(id)arg2;
- (void)didTapCTAButtonWithBusinessToolAlertView:(id)arg1;
- (void)didTapCloseButtonWithBusinessToolAlertView:(id)arg1;
- (void)_navigationToURL:(id)arg1;
- (void)_showAddShopTooltip;
- (void)_showActionBarTooltipForButtonFrame:(struct CGRect)arg1 text:(id)arg2 analyticsTag:(id)arg3;
- (void)_confirmPolicyNoticeShown;
- (void)_showStoryArchiveNUX;
- (void)_disableNuxGestures;
- (void)_enableNuxGestures;
- (_Bool)_viewControllerIsTopMost;
- (void)_hideGestureDidDrag:(id)arg1;
- (void)_hideToolTip;
- (void)_showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2 inView:(id)arg3 inDirection:(long long)arg4 analyticsTag:(id)arg5;
- (void)_showNUXWithTitle:(id)arg1 textAlignment:(long long)arg2 atPoint:(struct CGPoint)arg3 inView:(id)arg4 inDirection:(long long)arg5 constraint:(struct UIEdgeInsets)arg6 analyticsTag:(id)arg7;
- (void)showAddShopTooltipIfNecessary;
- (void)showStoryArchiveNUXIfNecessary;
- (void)showTopAccountInsightsTooltipIfNecessary;
- (void)showPolicyNoticeOverlayIfNecessary;
- (void)showBusinessSignUpOverlayWithFullname:(id)arg1;
- (void)_showCreatorOverlayWithDelegate:(id)arg1 pageName:(id)arg2 skippedPageConnection:(_Bool)arg3;
- (void)_showBusinessOverlayWithDelegate:(id)arg1 pageName:(id)arg2 skippedPageConnection:(_Bool)arg3;
- (void)showAccountConvertedOverlayWithPageName:(id)arg1 skippedPageConnection:(_Bool)arg2;
- (void)hideToolTipDismissedByUser:(_Bool)arg1;
- (void)_resetProfileTooltipsForDogfooding;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 isMainProfileSurface:(_Bool)arg3 viewController:(id)arg4 navigationBarController:(id)arg5;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewDidAppearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillAppearAnimated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


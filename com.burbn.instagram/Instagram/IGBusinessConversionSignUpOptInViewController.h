//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGDismissableViewController.h"
#import "IGNUXIntroViewDelegate.h"

@class IG4BLogger, IGBottomButtonsView, IGBusinessConversionInfoDataSource, IGBusinessSelectionFlowHeaderView, IGNUXIntroView, IGUserSession, NSString;

@interface IGBusinessConversionSignUpOptInViewController : IGGroupedTableViewController <IGDismissableViewController, IGCoreTextLinkHandler, IGNUXIntroViewDelegate>
{
    IGUserSession *_userSession;
    IGNUXIntroView *_introView;
    IGBusinessSelectionFlowHeaderView *_headerView;
    IGBusinessConversionInfoDataSource *_headerDataSource;
    NSString *_socialContext;
    NSString *_headerSubtitle;
    NSString *_headerTitle;
    IGBottomButtonsView *_signUpButton;
    IG4BLogger *_logger;
    double _bufferSpaceForSocialContext;
    id <IGBusinessConversionSignUpOptInViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBusinessConversionSignUpOptInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_nextButtonClickedFromSecondary:(id)arg1;
- (void)_nextButtonClicked:(id)arg1;
- (void)_setupIntroView;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_updateCurrentPage;
- (void)nuxIntroView:(id)arg1 swipeableViewDidEndDecelerating:(id)arg2;
- (void)nuxIntroView:(id)arg1 didScrollSwipeableViewWithContentOffsetX:(double)arg2;
- (void)nuxIntroView:(id)arg1 didDisplayPageAt:(unsigned long long)arg2;
- (void)nuxIntroView:(id)arg1 didTapContinueButton:(id)arg2;
- (void)didDismissViewController;
- (id)_createSignUpButtonWithUserSession:(id)arg1;
- (void)_handleSocialContext:(id)arg1;
- (void)_fetchSocialContext;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

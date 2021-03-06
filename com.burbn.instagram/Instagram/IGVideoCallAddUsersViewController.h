//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGDirectRecipientListViewControllerDelegate.h"
#import "IGGestureHandler.h"
#import "IGListAdapterDataSource.h"
#import "IGVideoCallGroupExpansionStateDelegate.h"
#import "IGVideoCallInviteListHeaderViewViewModelDelegate.h"

@class IGDirectRecipientOneTapStateTracker, IGDirectThreadService, IGListAdapter, IGUserSession, IGVideoCallAddUsersView, IGVideoCallInviteListHeaderViewDataSource, IGVideoCallSession, IGViewController<IGDirectRecipientListViewControllerType>, NSMutableSet, NSString;

@interface IGVideoCallAddUsersViewController : UIViewController <IGDirectRecipientListViewControllerDelegate, IGListAdapterDataSource, IGVideoCallInviteListHeaderViewViewModelDelegate, IGVideoCallGroupExpansionStateDelegate, IGAnalyticsModule, IGGestureHandler>
{
    IGVideoCallAddUsersView *_addUsersView;
    IGUserSession *_userSession;
    IGVideoCallSession *_videoCallSession;
    IGVideoCallInviteListHeaderViewDataSource *_headerViewDataSource;
    IGListAdapter *_headerViewListAdapter;
    IGDirectRecipientOneTapStateTracker *_oneTapStateTracker;
    IGViewController<IGDirectRecipientListViewControllerType> *_recipientListViewController;
    IGDirectThreadService *_directThreadService;
    NSMutableSet *_recipientsManuallyMarkedAsAdded;
}

- (void).cxx_destruct;
- (void)videoCallGroupExpansionStateDidUpdate:(long long)arg1;
- (void)videoCallInviteListHeaderViewDataSource:(id)arg1 failedToAddItems:(id)arg2;
- (void)videoCallInviteListHeaderViewDataSource:(id)arg1 didRemoveItems:(id)arg2;
- (void)videoCallInviteListHeaderViewDataSource:(id)arg1 didAddItems:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didTapWhatsappShareWithFeedItem:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didTapSMSShareWithFeedItem:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didTapGeneralShareWithFeedItem:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didTapCopyLinkWithFeedItem:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didTapDirectReplyToAuthorWithFeedItem:(id)arg2;
- (void)selectRecipientViewControllerDidPresentFullscreen:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 wantsToToggleFullScreen:(_Bool)arg2;
- (void)selectRecipientViewController:(id)arg1 didSwipeOnHeaderWithDirection:(unsigned long long)arg2;
- (void)selectRecipientViewController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)selectRecipientViewController:(id)arg1 didUpdateSelectedRecipients:(id)arg2;
- (void)selectRecipientViewControllerDidTapBackButton:(id)arg1;
- (void)selectRecipientViewControllerDidDismissRecipientList:(id)arg1 selectedStorySendTarget:(long long)arg2 selectedExternalServices:(id)arg3 selectedDirectRecipients:(id)arg4 recipientsFromSearch:(id)arg5 bumpedRecipients:(id)arg6 oneTapStateTracker:(id)arg7 fromOneTap:(_Bool)arg8;
- (void)selectRecipientViewControllerDidTapFinishButton:(id)arg1 storySendTarget:(long long)arg2 sender:(id)arg3 directRecipients:(id)arg4 externalServices:(id)arg5 text:(id)arg6 fromOneTap:(_Bool)arg7 storyViewerViewModel:(id)arg8 storyViewerLoggingContext:(id)arg9 currentStoryItem:(id)arg10 loggingProvider:(id)arg11 feedItem:(id)arg12;
- (id)selectedRecipientsSoFarFromOneTapping:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToSharedStories:(id)arg2;
- (void)selectRecipientViewControllerDidTapAddToHighlight:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToBlastList:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToDirectRecipient:(id)arg2 messageText:(id)arg3;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToExternalService:(long long)arg2;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToStoryTarget:(long long)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_setupRecipientListViewController;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 videoCallSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


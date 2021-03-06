//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDirectShareSheetOneTapDelegate.h"
#import "IGFollowButtonAnalyticsDelegate.h"
#import "IGFollowListCollectionCellDelegate.h"
#import "IGListDisplayDelegate.h"
#import "IGOneTapStateTrackerDelegate.h"
#import "IGPendingRequestControllerDelegate.h"
#import "IGReelSeenStateStoreListener.h"
#import "IGUserListFavoriteSelectionDelegate.h"
#import "IGUserListSchoolCollectionCellDelegate.h"

@class IGLabelSupplementaryViewSource, IGUser, IGUserListItemConfiguration, IGUserSession, NSString;

@interface IGUserListSectionController : IGListSectionController <IGFollowListCollectionCellDelegate, IGPendingRequestControllerDelegate, IGFollowButtonAnalyticsDelegate, IGUserListFavoriteSelectionDelegate, IGDirectShareSheetOneTapDelegate, IGUserListSchoolCollectionCellDelegate, IGReelSeenStateStoreListener, IGListDisplayDelegate, IGOneTapStateTrackerDelegate>
{
    NSString *_module;
    _Bool _supportStoryRing;
    _Bool _selected;
    _Bool _disabled;
    _Bool _showBottomSeparator;
    IGUser *_user;
    id <IGUserListDataSource> _userListDataSource;
    id <IGUserListSectionControllerSelectionDelegate> _selectionDelegate;
    id <IGCommenterListSectionControllerSelectionDelegate> _commenterSelectionDelegate;
    id <IGFavoritesListSectionControllerSelectionDelegate> _favoritesSelectionDelegate;
    id <IGUserListSectionControllerStoryDelegate> _storyDelegate;
    id <IGUserListSectionControllerSchoolDelegate> _schoolDelegate;
    id <IGUserListSectionControllerOneTapDelegate> _oneTapDelegate;
    id <IGUserListSectionControllerTapDelegate> _tapDelegate;
    id <IGFollowPeopleLoggerProtocol> _followListLogger;
    IGUserSession *_userSession;
    long long _type;
    IGUserListItemConfiguration *_item;
    IGLabelSupplementaryViewSource *_headerViewSource;
}

@property(readonly, nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(retain, nonatomic) IGLabelSupplementaryViewSource *headerViewSource; // @synthesize headerViewSource=_headerViewSource;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) IGUserListItemConfiguration *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <IGFollowPeopleLoggerProtocol> followListLogger; // @synthesize followListLogger=_followListLogger;
@property(nonatomic) __weak id <IGUserListSectionControllerTapDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
@property(nonatomic) __weak id <IGUserListSectionControllerOneTapDelegate> oneTapDelegate; // @synthesize oneTapDelegate=_oneTapDelegate;
@property(nonatomic) __weak id <IGUserListSectionControllerSchoolDelegate> schoolDelegate; // @synthesize schoolDelegate=_schoolDelegate;
@property(nonatomic) __weak id <IGUserListSectionControllerStoryDelegate> storyDelegate; // @synthesize storyDelegate=_storyDelegate;
@property(nonatomic) __weak id <IGFavoritesListSectionControllerSelectionDelegate> favoritesSelectionDelegate; // @synthesize favoritesSelectionDelegate=_favoritesSelectionDelegate;
@property(nonatomic) __weak id <IGCommenterListSectionControllerSelectionDelegate> commenterSelectionDelegate; // @synthesize commenterSelectionDelegate=_commenterSelectionDelegate;
@property(nonatomic) __weak id <IGUserListSectionControllerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) __weak id <IGUserListDataSource> userListDataSource; // @synthesize userListDataSource=_userListDataSource;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)reelSeenStateStoreDidUpdateReelPK:(id)arg1;
- (void)schoolCollectionCell:(id)arg1 didTapProfilePictureWithStoryViewerEntryView:(id)arg2 withUser:(id)arg3;
- (void)schoolCollectionCell:(id)arg1 didTapOverflowWithUser:(id)arg2;
- (void)schoolCollectionCell:(id)arg1 didTapDirectWithUser:(id)arg2;
- (void)oneTapStateTrackerDidFinalize:(id)arg1 userInfo:(id)arg2;
- (void)shareSheetOneTapButtonDidTapUndo:(id)arg1;
- (void)shareSheetOneTapButtonDidTapSend:(id)arg1;
- (void)shareSheetOneTapButtonShouldPerformAction:(id)arg1 isSelectableBlock:(CDUnknownBlockType)arg2;
- (void)userListFavoritesCellDidTapUserSelectButton:(id)arg1;
- (void)didTapToChangeFollowStatusWithAction:(long long)arg1;
- (void)didTapProfilePictureWithStoryViewerEntryView:(id)arg1 forFollowListCollectionCell:(id)arg2;
- (void)didTapMoreButtonForFollowListCollectionCell:(id)arg1;
- (void)didTapRemoveFollowerForFollowListCollectionCell:(id)arg1;
- (void)_navigateToProfileViewAtIndex:(long long)arg1;
- (void)_handleCellTapped;
- (void)_logRemoveFollowerAnalyticsEvent:(id)arg1;
- (void)logFollowButtonTapWithAction:(long long)arg1 targetID:(id)arg2;
- (void)pendingControllerDidIgnoreRequest:(id)arg1;
- (void)pendingControllerDidAcceptRequest:(id)arg1;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)_selectableCellOfClass:(Class)arg1 index:(long long)arg2;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)_createHeaderViewSource;
- (id)supplementaryViewSource;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 type:(long long)arg2 followListLogger:(id)arg3 selected:(_Bool)arg4 disabled:(_Bool)arg5 module:(id)arg6 supportStoryRingOnUserList:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


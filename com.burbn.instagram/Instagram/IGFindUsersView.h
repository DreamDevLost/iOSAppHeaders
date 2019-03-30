//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGFindUsersViewDataSourceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGFindUsersViewDataSource, IGFollowAllUsersView, IGGroupedTableView, IGUserSession, NSArray, NSMutableArray, NSString, UIColor;

@interface IGFindUsersView : UIView <UITableViewDataSource, UITableViewDelegate, IGFindUsersViewDataSourceDelegate>
{
    IGFollowAllUsersView *_followAllUsersView;
    NSString *_module;
    _Bool _hideTopSeparator;
    _Bool _showPhotoGrid;
    id <IGFindUsersViewDelegate> _delegate;
    IGGroupedTableView *_tableView;
    UIView *_headerContentView;
    IGFindUsersViewDataSource *_dataSource;
    UIColor *_cellBackgroundColor;
    NSMutableArray *_currentSelectedUserIDs;
    IGUserSession *_userSession;
    UIView *_headerView;
    NSArray *_userList;
    unsigned long long _lastThumbnailFetchOffset;
    long long _photoLayout;
    id <IGFollowButtonAnalyticsDelegate> _analyticsDelegate;
    NSArray *_allUserIDs;
    struct UIEdgeInsets _separatorEdgeInsets;
}

+ (struct CGSize)thumbnailSizeForLayout:(long long)arg1;
@property(retain, nonatomic) NSArray *allUserIDs; // @synthesize allUserIDs=_allUserIDs;
@property(nonatomic) __weak id <IGFollowButtonAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) long long photoLayout; // @synthesize photoLayout=_photoLayout;
@property(nonatomic) unsigned long long lastThumbnailFetchOffset; // @synthesize lastThumbnailFetchOffset=_lastThumbnailFetchOffset;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSMutableArray *currentSelectedUserIDs; // @synthesize currentSelectedUserIDs=_currentSelectedUserIDs;
@property(nonatomic) _Bool showPhotoGrid; // @synthesize showPhotoGrid=_showPhotoGrid;
@property(nonatomic) struct UIEdgeInsets separatorEdgeInsets; // @synthesize separatorEdgeInsets=_separatorEdgeInsets;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(nonatomic) _Bool hideTopSeparator; // @synthesize hideTopSeparator=_hideTopSeparator;
@property(nonatomic) __weak IGFindUsersViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(retain, nonatomic) IGGroupedTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <IGFindUsersViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doFollowSelectedAccounts;
- (void)doFollowAllTopAccounts:(unsigned long long)arg1;
- (void)_followAll:(id)arg1;
- (void)setDataSource:(id)arg1 lazilyReloadView:(_Bool)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserListFromCache:(id)arg2;
- (void)findUsersViewDataSourceWillLoadUserList:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 andNearbyBusinesses:(id)arg3;
- (void)_fetchThumbnailURLsIfNeeded;
- (_Bool)_shouldFetchThumbnailURLsForUserInfo:(id)arg1;
- (_Bool)_hasViewPermissionForUser:(id)arg1;
- (void)_onScrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_hasPhotosForUserAtUserIndex:(long long)arg1;
- (id)_photoGridCellForTableView:(id)arg1 atUserIndex:(long long)arg2;
- (id)_userCellForTableView:(id)arg1 atUserIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 followAllRowEnabled:(_Bool)arg2 headerHeight:(double)arg3 photoLayout:(long long)arg4 analyticsDelegate:(id)arg5 userSession:(id)arg6 module:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

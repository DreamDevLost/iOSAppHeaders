//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFacebookPagesDataSourceDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGTVCrossPostingFBConnectSectionControllerDelegate.h"
#import "IGTVCrossPostingFBPageSectionControllerDelegate.h"

@class FBSDKAccessToken, IGBusinessSelectionFlowHeaderView, IGFacebookPagesDataSource, IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGTVCrossPostingViewController : IGViewController <IGFacebookPagesDataSourceDelegate, IGTVCrossPostingFBConnectSectionControllerDelegate, IGTVCrossPostingFBPageSectionControllerDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGBusinessSelectionFlowHeaderView *_headerView;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFacebookPagesDataSource *_pagesDataSource;
    FBSDKAccessToken *_facebookAccessToken;
    NSArray *_pageResults;
    _Bool _isFetchingPages;
    long long _selectedIndex;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)fbPageSectionControllerDidSelect:(id)arg1;
- (void)fBConnectSectionControllerDidTap:(id)arg1;
- (void)pagesDataSource:(id)arg1 didReceiveError:(id)arg2;
- (void)pagesDataSource:(id)arg1 didLoadPages:(id)arg2;
- (void)_updateDoneButton;
- (void)_fetchPages;
- (_Bool)_isLoggedInToFacebook;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


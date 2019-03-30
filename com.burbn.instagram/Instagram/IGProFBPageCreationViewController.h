//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDismissableViewController.h"
#import "IGInterestCategorySelectionViewControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGProFBPageCategoryCellSectionControllerDelegate.h"
#import "IGProFBPageNameCellSectionControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IG4BLogger, IGBottomButtonsView, IGBusinessConversionFacebookPageCategory, IGBusinessConversionFacebookPageDataSource, IGFacebookPageInfo, IGListAdapter, IGProFBPageCategoryViewModel, IGUserSession, NSMutableArray<IGListDiffable>, NSString, UICollectionView;

@interface IGProFBPageCreationViewController : IGViewController <IGDismissableViewController, IGInterestCategorySelectionViewControllerDelegate, IGListAdapterDataSource, IGProFBPageCategoryCellSectionControllerDelegate, IGProFBPageNameCellSectionControllerDelegate, UIGestureRecognizerDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    NSMutableArray<IGListDiffable> *_viewModels;
    id <IGProFBPageCreationViewControllerDelegate> _delegate;
    IGBottomButtonsView *_dockedNavigationButtons;
    IGBusinessConversionFacebookPageDataSource *_dataSource;
    IG4BLogger *_logger;
    _Bool _shouldAllowSkip;
    _Bool _shouldSwitchToCreatedPage;
    _Bool _shouldUseBottomNavigation;
    NSString *_suggestedPageName;
    IGBusinessConversionFacebookPageCategory *_suggestedPageCategory;
    NSString *_pageName;
    long long _verticalID;
    id <IGFBIdentityProvisioning> _fbIdProvisioner;
    NSString *_navigationTitle;
    long long _toAccountType;
    IGProFBPageCategoryViewModel *_categoryViewModel;
    NSString *_categoryID;
    IGFacebookPageInfo *_pageInfo;
}

@property(retain, nonatomic) IGFacebookPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) IGProFBPageCategoryViewModel *categoryViewModel; // @synthesize categoryViewModel=_categoryViewModel;
- (void).cxx_destruct;
- (void)_logPageCreationCancelByLogger:(id)arg1;
- (void)_logPageCreationFinishStepByLogger:(id)arg1 withPageID:(id)arg2 pageName:(id)arg3 subcategoryID:(id)arg4;
- (void)_logPageCreationSubmitErrorByLogger:(id)arg1 withPageName:(id)arg2 subcategoryID:(id)arg3 subcategoryName:(id)arg4 errorMessage:(id)arg5 fbUserID:(id)arg6;
- (void)_logPageCreationSubmitByLogger:(id)arg1 withPageName:(id)arg2 subcategoryID:(id)arg3 subcategoryName:(id)arg4;
- (void)_logPageCreationPageNameCheckErrorByLogger:(id)arg1 withInputPageName:(id)arg2 errorMessage:(id)arg3;
- (void)_logPageCreationPageNameCheckByLogger:(id)arg1 withInputPageName:(id)arg2 suggestedPageName:(id)arg3;
- (void)didDismissViewController;
- (void)interestCategorySelectionViewController:(id)arg1 didTapSearchBar:(id)arg2;
- (void)interestCategorySelectionViewController:(id)arg1 didTapOutsideSearchBar:(id)arg2 query:(id)arg3;
- (void)interestCategorySelectionViewController:(id)arg1 didTapDoneForSearchBar:(id)arg2 query:(id)arg3;
- (void)interestCategorySelectionViewController:(id)arg1 didEnterQuery:(id)arg2;
- (void)interestCategorySelectionViewController:(id)arg1 didCompleteCategorySelectionWithCategory:(id)arg2 query:(id)arg3;
- (void)pageCategoryCellSectionController:(id)arg1 didTapSelectButtonWithViewModel:(id)arg2;
- (void)pageNameCellSectionController:(id)arg1 didValidatePageName:(id)arg2 errorMessage:(id)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_setIsLoading:(_Bool)arg1;
- (void)_finishStepWithPageInfo:(id)arg1;
- (void)_switchToPageWithPageInfoCompleted:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)_switchToPageWithPageInfo:(id)arg1;
- (void)_createPageCompletedWithPageInfo:(id)arg1 categoryID:(id)arg2 categoryName:(id)arg3 error:(id)arg4 fbUserID:(id)arg5;
- (void)_createButtonTapped:(id)arg1;
- (void)_updateStatus;
- (void)_skipButtonTapped:(id)arg1;
- (void)_viewTapped:(id)arg1;
- (void)_initializeViewModels;
- (void)_setupNavigationButtons;
- (void)_setupCollectionView;
- (id)_headerViewModel;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 logger:(id)arg3 fbIdProvisioner:(id)arg4 shouldAllowSkip:(_Bool)arg5 shouldSwitchToCreatedPage:(_Bool)arg6 shouldUseBottomNavigation:(_Bool)arg7 suggestedPageName:(id)arg8 suggestedPageCategory:(id)arg9 verticalID:(long long)arg10 navigationTitle:(id)arg11 toAccountType:(long long)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


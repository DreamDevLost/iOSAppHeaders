//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGHashtagCreationTitleViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGSearchNetworkDataSourceDelegate.h"
#import "IGTokenFieldDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGActionableConfirmationToastController, IGAutocompleteLocalDataSource, IGEmptySearchHashtagModel, IGHashtagCreationNetworker, IGHashtagCreationTitleView, IGHashtagPostCreationLogger, IGListAdapter, IGMediaMetadata, IGSearchNetworkDataSource, IGTokenField, IGUserSession, NSMutableDictionary, NSString, UICollectionView;

@interface IGHashtagPostCreationViewController : IGViewController <IGHashtagCreationTitleViewDelegate, IGListAdapterDataSource, IGSearchNetworkDataSourceDelegate, IGTokenFieldDelegate, UICollectionViewDelegate, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    IGTokenField *_tokenField;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGAutocompleteLocalDataSource *_hashtagsLocalDataSource;
    IGSearchNetworkDataSource *_hashtagsRemoteDataSource;
    IGMediaMetadata *_mediaMetadata;
    id <IGHashtagPostCreationViewControllerDelegate> _delegate;
    IGActionableConfirmationToastController *_hashtagErrorToastController;
    IGHashtagCreationNetworker *_hashtagCreationNetworker;
    IGEmptySearchHashtagModel *_emptySearchHashtags;
    IGHashtagPostCreationLogger *_hashtagCreationLogger;
    NSMutableDictionary *_tagnamesToAddDraftHashtagLoggingModels;
    IGHashtagCreationTitleView *_titleView;
    _Bool _searchingForHashtags;
    NSString *_previousQuery;
}

- (void).cxx_destruct;
- (void)_resetSearchedHashtags;
- (void)_removeTokenWithHashtagModel:(id)arg1;
- (void)_addTokenWithHashtagLoggingModel:(id)arg1 showEmptySearchResults:(_Bool)arg2;
- (void)_displayTooManyHashtagsError;
- (void)configureHashtagErrorToastControllerWithString:(id)arg1;
- (void)_onDoneTapped;
- (void)_onCancelTapped;
- (_Bool)prefersTabBarHidden;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (id)analyticsModule;
- (void)didTapXButton:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchText:(id)arg2 results:(id)arg3 rankToken:(id)arg4 clearClientCache:(_Bool)arg5;
- (void)networkDataSource:(id)arg1 didFailForSearchText:(id)arg2;
- (void)networkDataSource:(id)arg1 cachedResultsForSearchText:(id)arg2 cachedResults:(id)arg3 rankToken:(id)arg4 fullResultsLoaded:(_Bool)arg5;
- (void)networkDataSource:(id)arg1 didBeginFetchForSearchText:(id)arg2;
- (void)tokenField:(id)arg1 didPressReturnWithQuery:(id)arg2;
- (void)tokenFieldDidBeginEditing:(id)arg1;
- (void)tokenFieldWillFocusToken:(id)arg1;
- (void)tokenFieldWillBeginEditing:(id)arg1;
- (void)tokenField:(id)arg1 reachedTokenFieldLimitWithQuery:(id)arg2;
- (void)tokenField:(id)arg1 didTypeExistingQuery:(id)arg2;
- (void)tokenField:(id)arg1 triedTypingQuery:(id)arg2;
- (void)tokenField:(id)arg1 didDeleteToken:(id)arg2;
- (void)tokenField:(id)arg1 didChangeQuery:(id)arg2;
- (_Bool)tokenFieldCanFinishEditing:(id)arg1;
- (id)tokenFieldViewForTokenOverlay:(id)arg1;
- (void)_tokenizeString:(id)arg1 hashtagSource:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_displayEmptySearchHashtags;
- (void)_tryDisplayEmptySearchHashtagsWithEmptyTokenField;
- (void)_didSelectHashtagModel:(id)arg1 section:(long long)arg2;
- (void)_setupTitleView;
- (void)_setupCollectionViewAndListAdapter;
- (void)_setUpTokenField;
- (void)_setUpNavigationBarItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 mediaMetadata:(id)arg2 hashtagCreationLogger:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


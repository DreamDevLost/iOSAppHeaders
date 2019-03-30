//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGEditPostTextViewControllerDelegate.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGSearchNetworkDataSourceDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGEditBioSearchResultsListKitDataSource, IGEditPostTextViewController, IGInsetLabel, IGKeyboardObserver, IGListAdapter, IGSearchNetworkDataSource, IGStringStyle, IGTooltipView, IGUserSession, NSDate, NSString, UICollectionView;

@interface IGEditProfileBioViewController : IGViewController <UICollectionViewDelegate, UIScrollViewDelegate, IGSearchNetworkDataSourceDelegate, IGEditPostTextViewControllerDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate>
{
    IGUserSession *_userSession;
    IGSearchNetworkDataSource *_searchNetworkDataSource;
    IGEditBioSearchResultsListKitDataSource *_listKitDataSource;
    IGListAdapter *_listAdapter;
    NSString *_currentSearchText;
    unsigned long long _currentSearchTextLocation;
    IGEditPostTextViewController *_textViewController;
    UICollectionView *_searchResultCollectionView;
    NSString *_previousTextViewString;
    id <IGEditProfileBioViewControllerDelegate> _delegate;
    IGInsetLabel *_characterCountLabel;
    IGKeyboardObserver *_keyboardObserver;
    NSString *_originalBioText;
    IGStringStyle *_textStringStyle;
    NSDate *_searchStartTime;
    IGTooltipView *_nuxView;
}

@property(retain, nonatomic) IGTooltipView *nuxView; // @synthesize nuxView=_nuxView;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)prefersTabBarHidden;
- (long long)statusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_logMASAccountLinks;
- (void)_hideNuxIfPossible;
- (void)_showNux;
- (void)_showNuxIfPossible;
- (void)_updateDoneButtonEnabled;
- (void)_updateCharacterCoundLabel;
- (void)_resetSearchResults;
- (void)_showHashtagSearchNullState;
- (void)_showUserSearchNullState;
- (void)_didSelectDoneButton;
- (void)_didSelectBackButton;
- (void)_setupSearchResultsCollectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)networkDataSource:(id)arg1 didFailForSearchText:(id)arg2;
- (void)networkDataSource:(id)arg1 cachedResultsForSearchText:(id)arg2 cachedResults:(id)arg3 rankToken:(id)arg4 fullResultsLoaded:(_Bool)arg5;
- (void)networkDataSource:(id)arg1 didFinishFetchForSearchText:(id)arg2 results:(id)arg3 rankToken:(id)arg4 clearClientCache:(_Bool)arg5;
- (void)networkDataSource:(id)arg1 didBeginFetchForSearchText:(id)arg2;
- (void)_boldHashtagAndUsers;
- (id)_attributedStringWithBioText:(id)arg1 profileLinks:(id)arg2;
- (void)_resetTextViewWithCaretLocation:(unsigned long long)arg1;
- (void)_executeSearchWithText:(id)arg1;
- (void)textViewController:(id)arg1 textViewDidChange:(id)arg2;
- (void)textViewController:(id)arg1 textViewDidChangeSelection:(id)arg2;
- (_Bool)textViewController:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewController:(id)arg1 didChangeContentHeightToHeight:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 bioText:(id)arg2 bioLinks:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

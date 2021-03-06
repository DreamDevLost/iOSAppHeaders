//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGEmptyFeedViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterUpdateListener.h"
#import "IGNetworkSourceDelegate.h"
#import "IGTextViewSectionControllerDelegate.h"

@class IGEmptyFeedView, IGListAdapter, IGNetworkSource, IGShoppingPurchaseProtectionResponse, IGUserSession, NSString, UICollectionView;

@interface IGShoppingPurchaseProtectionViewController : IGViewController <IGEmptyFeedViewDelegate, IGListAdapterDataSource, IGListAdapterUpdateListener, IGNetworkSourceDelegate, IGTextViewSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGNetworkSource *_networkSource;
    IGShoppingPurchaseProtectionResponse *_response;
    IGEmptyFeedView *_emptyFeedView;
    id <IGShoppingPurchaseProtectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingPurchaseProtectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)_createEmptyFeedViewIfNeeded;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


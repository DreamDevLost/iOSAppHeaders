//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGStoryFundraiserNonprofitSectionControllerDelegate.h"
#import "UICollectionViewDelegate.h"

@class IGAsyncTask, IGListAdapter, IGSpinnerLabelViewModel, IGStoryFundraiserNonprofitListModel, IGUserSession, NSMutableArray, NSString, UICollectionView;

@interface IGStoryFundraiserNonprofitNullstateListViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGStoryFundraiserNonprofitSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGAsyncTask *_listRequest;
    NSMutableArray *_followingItems;
    NSMutableArray *_suggestedItems;
    IGListAdapter *_listAdapter;
    IGSpinnerLabelViewModel *_spinnerModel;
    IGStoryFundraiserNonprofitListModel *_nonprofitListModel;
    UICollectionView *_collectionView;
    id <IGStoryFundraiserNonprofitNullstateListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryFundraiserNonprofitNullstateListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_onListRequestFailure:(id)arg1;
- (void)_onListRequestSuccess:(id)arg1;
- (void)_fetchNextPage;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)fundraiserNonprofitSectionController:(id)arg1 didTapOnNonprofit:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGListAdapterDataSource.h"

@class IGBottomButtonsView, IGBusinessAttributeSyncInfo, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGBusinessAttributeSyncInfoViewController : IGViewController <IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGBusinessAttributeSyncInfo *_dataModel;
    long long _flowStep;
    NSString *_buttonTitle;
    IGBottomButtonsView *_getStartedButton;
    id <IGBusinessAttributeSyncInfoViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBusinessAttributeSyncInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)didTapButtonForNextStage;
- (void)_setupFlowButton;
- (void)_didTapButtonForNextStage:(id)arg1;
- (id)_determineTitleAndSubtitleForFlowStep;
- (void)_determineButtonTitle;
- (void)onCancelModal;
- (void)_setupNavigationBar;
- (void)_setupIGListKit;
- (void)_setupCollectionView;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 flowStep:(long long)arg2 dataModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

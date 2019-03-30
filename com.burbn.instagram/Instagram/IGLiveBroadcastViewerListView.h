//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGLiveBroadcastViewerListHeaderViewDelegate.h"

@class IGListAdapter, IGLiveBroadcastViewerListHeaderView, IGLiveBroadcastViewerListViewDataSource, NSString, UICollectionView;

@interface IGLiveBroadcastViewerListView : UIView <IGLiveBroadcastViewerListHeaderViewDelegate>
{
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    id <IGLiveBroadcastViewerListViewDelegate> _delegate;
    IGLiveBroadcastViewerListHeaderView *_headerView;
    IGLiveBroadcastViewerListViewDataSource *_listDataSource;
}

@property(readonly, nonatomic) IGLiveBroadcastViewerListViewDataSource *listDataSource; // @synthesize listDataSource=_listDataSource;
@property(readonly, nonatomic) IGLiveBroadcastViewerListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <IGLiveBroadcastViewerListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void).cxx_destruct;
- (void)doneButtonTappedInHeaderView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewerDelegate:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


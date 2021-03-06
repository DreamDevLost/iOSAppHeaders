//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGListAdapterDataSource.h"

@class IGKVOHandle, IGListAdapter, NSString, UICollectionView;

@interface IGProfileHeaderView : UIView <IGListAdapterDataSource>
{
    IGKVOHandle *_contentSizeHandle;
    id <IGProfileHeaderViewDelegate> _delegate;
    id <IGProfileHeaderViewDataSource> _dataSource;
    IGListAdapter *_adapter;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


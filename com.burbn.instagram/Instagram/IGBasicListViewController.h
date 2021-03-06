//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class IGListAdapter, NSString, UICollectionView;

@interface IGBasicListViewController : IGViewController
{
    NSString *_analyticsModule;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void).cxx_destruct;
- (struct UIEdgeInsets)preferredContentInsets;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAnalyticsModule:(id)arg1;

@end


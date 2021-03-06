//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGLoginActivityDataSourceDelegate.h"
#import "IGLoginActivityListInfoSectionControllerDelegate.h"
#import "IGLoginActivityMapContainerSectionControllerDelegate.h"

@class IGListAdapter, IGLoginActivityDataSource, IGLoginActivityInfo, IGUserSession, NSString, UICollectionView;

@interface IGLoginActivityViewController : IGViewController <IGListAdapterDataSource, IGLoginActivityDataSourceDelegate, IGLoginActivityListInfoSectionControllerDelegate, IGLoginActivityMapContainerSectionControllerDelegate>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGLoginActivityDataSource *_dataSource;
    IGLoginActivityInfo *_loginActivityInfo;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_showChangePasswordSuccessMessage;
- (id)_labelItemViewModelWithTitle:(id)arg1;
- (void)loginActivityMapContainerSectionController:(id)arg1 didChangePassword:(_Bool)arg2;
- (void)loginActivityListInfoSectionController:(id)arg1 didChangePassword:(_Bool)arg2;
- (void)loginActivityDataSource:(id)arg1 didFetchLoginActivityInfo:(id)arg2;
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


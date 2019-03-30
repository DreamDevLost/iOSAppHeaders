//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLeadGenFooterViewDelegate.h"
#import "IGLeadGenStageController.h"
#import "IGListAdapterDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGLeadGenEndStageViewModel, IGLeadGenLinkHandler, IGLeadGenLogger, IGLeadGenStageDefaultView, IGListAdapter, NSMutableArray, NSString, UICollectionView;

@interface IGLeadGenEndScreenStageController : NSObject <IGLeadGenFooterViewDelegate, IGListAdapterDataSource, UIScrollViewDelegate, UICollectionViewDelegate, IGLeadGenStageController>
{
    IGLeadGenStageDefaultView *_stageView;
    UICollectionView *_collectionView;
    IGLeadGenEndStageViewModel *_stageViewModel;
    id <IGLeadGenFooterViewDelegate> _footerViewDelegate;
    IGLeadGenLinkHandler *_linkHandler;
    IGListAdapter *_listAdapter;
    NSMutableArray *_dataSource;
    IGLeadGenLogger *_logger;
}

+ (id)controllerForStageViewModel:(id)arg1 scrollViewDelegate:(id)arg2 footerViewDelegate:(id)arg3 linkHandler:(id)arg4 logger:(id)arg5;
- (void).cxx_destruct;
- (void)_handleThankyouScreenCTA;
- (void)footerViewDidTapSecondaryButton:(id)arg1;
- (void)footerViewDidTapPrimaryButton:(id)arg1;
- (id)stageView;
- (id)userInputForFormSubmission;
- (void)didExitStageController;
- (void)didEnterStageController;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)_initWithStageViewModel:(id)arg1 scrollViewDelegate:(id)arg2 footerViewDelegate:(id)arg3 linkHandler:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

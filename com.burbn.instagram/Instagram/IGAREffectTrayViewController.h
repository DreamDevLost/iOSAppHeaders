//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAREffectCollectionControllerDataSource.h"
#import "IGARPlatformMoreInfoControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGAREffectApplicator, IGAREffectCollectionController, IGAREffectTrayView, IGARPlatformMoreInfoController, IGUserSession, NSIndexPath, NSString, UISelectionFeedbackGenerator;

@interface IGAREffectTrayViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGAREffectCollectionControllerDataSource, IGARPlatformMoreInfoControllerDelegate>
{
    IGAREffectApplicator *_arEffectApplicator;
    id <IGAREffectTrayViewControllerPresentationDelegate> _presentationDelegate;
    NSIndexPath *_currentAREffectIndexPath;
    IGAREffectTrayView *_trayView;
    _Bool _compactTrayDesignEnabled;
    IGUserSession *_userSession;
    CDStruct_fc792133 _config;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _Bool _isTrayAnimatingScrollToItem;
    IGAREffectCollectionController *_effectCollectionController;
    IGARPlatformMoreInfoController *_arPlatformMoreInfoController;
    id <IGAREffectTrayViewControllerDataSource> _dataSource;
}

@property(nonatomic) __weak id <IGAREffectTrayViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (unsigned long long)_numberOfItemsInTray;
- (unsigned long long)_trayCellIndexForAREffectIndex:(unsigned long long)arg1;
- (unsigned long long)_arEffectIndexForRow:(long long)arg1;
- (id)_cellFromAREffectIndex:(long long)arg1;
- (void)_presentMoreInfoSheetForItemAtIndex:(long long)arg1;
- (void)arPlatformControllerDidDismiss:(id)arg1;
- (void)arPlatformController:(id)arg1 didRequestRemoveEffectWithID:(id)arg2;
- (long long)arEffectCollectionControllerSurface:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_selectItemAtIndexPath:(id)arg1 canShowMoreInfoSheet:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_applyAREffectAtIndexPath:(id)arg1 effectPersistedMetadata:(id)arg2;
- (void)_processDidSelectItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 effectPersistedMetadata:(id)arg3;
- (void)setAutoSelectTrayBehaviorEnabled:(_Bool)arg1;
- (void)showMoreInfoSheet;
- (id)selectedAREffectID;
- (long long)selectedAREffectIndex;
- (void)selectAREffectAtIndex:(long long)arg1 effectPersistedMetadata:(id)arg2;
- (void)selectAREffectAtIndex:(long long)arg1;
- (void)selectAREffectWithID:(id)arg1 effectPersistedMetadata:(id)arg2;
- (void)deselectsAREffect;
- (void)reloadAREffectsForSwitcherMode:(long long)arg1;
- (void)_logImpressionForAREffectAtCollectionViewIndexPath:(id)arg1;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (struct CGSize)preferredSizeForConstrainingSize:(struct CGSize)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAREffectApplicator:(id)arg1 presentationDelegate:(id)arg2 config:(CDStruct_fc792133)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


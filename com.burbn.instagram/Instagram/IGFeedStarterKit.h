//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedScrollViewListener.h"
#import "IGViewDisappearListener.h"
#import "IGViewLayoutListener.h"
#import "IGViewLoadListener.h"

@class IGAnnouncer, IGFeedScrollViewAnnouncer, IGFeedStatusSectionController, IGListAdapter, IGListAdapterUpdater, IGRefreshControl, IGScrollPerfLogger, IGUserSession, IGViewController, NSString, UICollectionView;

@interface IGFeedStarterKit : NSObject <IGFeedScrollViewListener, IGViewDisappearListener, IGViewLoadListener, IGViewLayoutListener>
{
    IGScrollPerfLogger *_scrollPerfLogger;
    IGAnnouncer *_adapterAnnouncer;
    double _scrollViewTopInset;
    CDUnknownBlockType _collectionViewBlock;
    IGUserSession *_userSession;
    _Bool _enableScrollPerfLogging;
    _Bool _displayRefreshControlOnAppear;
    _Bool _disableRefreshControl;
    NSString *_module;
    NSString *_accessibilityIdentifier;
    IGViewController *_viewController;
    IGListAdapter *_adapter;
    IGListAdapterUpdater *_updater;
    UICollectionView *_collectionView;
    IGRefreshControl *_refreshControl;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedStatusSectionController *_statusSectionController;
}

@property(nonatomic) _Bool disableRefreshControl; // @synthesize disableRefreshControl=_disableRefreshControl;
@property(nonatomic) _Bool displayRefreshControlOnAppear; // @synthesize displayRefreshControlOnAppear=_displayRefreshControlOnAppear;
@property(readonly, nonatomic) IGFeedStatusSectionController *statusSectionController; // @synthesize statusSectionController=_statusSectionController;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer=_scrollViewAnnouncer;
@property(readonly, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGListAdapterUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) _Bool enableScrollPerfLogging; // @synthesize enableScrollPerfLogging=_enableScrollPerfLogging;
@property(readonly, nonatomic) __weak IGViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)viewControllerViewDidLayoutSubviews:(id)arg1;
- (void)viewControllerViewWillLayoutSubviews:(id)arg1;
- (void)viewControllerViewDidLoad:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateListAdapterWithReload:(_Bool)arg1 animated:(_Bool)arg2 hidingRefresh:(_Bool)arg3;
- (void)_setContentInsets:(struct UIEdgeInsets)arg1 collectionView:(id)arg2;
- (void)updateContentInsetsWithAdditionalInsets:(struct UIEdgeInsets)arg1;
- (void)updateContentInsets;
- (void)reloadFeedHidingRefresh:(_Bool)arg1;
- (void)updateFeedAnimated:(_Bool)arg1 hidingRefresh:(_Bool)arg2;
- (void)removeAdapterListener:(id)arg1;
- (void)addAdapterListener:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 scrollViewTopInset:(double)arg3 module:(id)arg4 accessibilityIdentifier:(id)arg5 enableScrollPerfLogging:(_Bool)arg6 workingRangeSize:(long long)arg7 collectionViewBlock:(CDUnknownBlockType)arg8;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 scrollViewTopInset:(double)arg3 module:(id)arg4 accessibilityIdentifier:(id)arg5 enableScrollPerfLogging:(_Bool)arg6 workingRangeSize:(long long)arg7;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 module:(id)arg3 accessibilityIdentifier:(id)arg4 enableScrollPerfLogging:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedScrollViewListener.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate.h"
#import "IGPurchaseExperienceBridgeModuleDelegate.h"
#import "IGSaveStatusListener.h"
#import "IGShoppingFeedNetworkerDelegate.h"
#import "IGShoppingPDPHeaderControllerDelegate.h"
#import "IGShoppingPDPListKitDataSourceDelegate.h"
#import "IGShoppingPDPModuleHeaderSectionControllerDelegate.h"

@class IGActionableConfirmationToastController, IGFeedItem, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGListAdapter, IGSaveProductLogger, IGScrollPerfLogger, IGShoppingConsumptionFeedItemLogger, IGShoppingFeedNetworker, IGShoppingPDPHeaderController, IGShoppingPDPListKitDataSource, IGSimpleWebViewController, IGUser, IGUserSession, NSString, NSURL, UICollectionView;

@interface IGShoppingPDPViewController : IGViewController <IGFeedScrollViewListener, IGMediaThumbnailSectionControllerSelectionDelegate, IGPurchaseExperienceBridgeModuleDelegate, IGSaveStatusListener, IGShoppingFeedNetworkerDelegate, IGShoppingPDPHeaderControllerDelegate, IGShoppingPDPListKitDataSourceDelegate, IGShoppingPDPModuleHeaderSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGUser *_merchant;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGShoppingPDPListKitDataSource *_dataSource;
    IGShoppingFeedNetworker *_networker;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedPreviewHandler *_mftbPreviewHandler;
    IGSimpleWebViewController *_reportingFlowWebVC;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSaveProductLogger *_saveProductLogger;
    IGActionableConfirmationToastController *_toastController;
    IGShoppingPDPHeaderController *_headerController;
    IGScrollPerfLogger *_scrollPerfLogger;
    NSString *_analyticsModule;
    NSString *_entryPoint;
    NSString *_checkoutSessionId;
    NSURL *_thumbnailImageURL;
    id <IGShoppingPDPViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)infoViewSectionController:(id)arg1 cellTappedWithViewModel:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (_Bool)productWithContextCardSectionController:(id)arg1 containsLastSavedProductItem:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 willOpenContextMediaWithViewModel:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 willNavigateToPDPForViewModel:(id)arg2;
- (void)productWithContextCardSectionController:(id)arg1 didUpdateProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3;
- (void)shoppingPDPModuleHeaderSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)variantSelectorSectionController:(id)arg1 didFetchProductGroup:(id)arg2 withViewModel:(id)arg3;
- (void)variantSelectorSectionController:(id)arg1 didSelectProductItem:(id)arg2;
- (void)shoppingPDPProductDetailsSectionController:(id)arg1 didTapSaveButtonWithShouldSave:(_Bool)arg2;
- (void)purchaseExperienceBridgeModuleCheckoutWillDismiss:(id)arg1;
- (void)purchaseExperienceBridgeModule:(id)arg1 didSuccessfullyCompletePurchase:(id)arg2;
- (void)shoppingPDPMediaCarouselSectionController:(id)arg1 didTapFeedItem:(id)arg2 forViewModel:(id)arg3;
- (void)didSelectFeedItem:(id)arg1;
- (void)shoppingPDPHeaderController:(id)arg1 didUpdateHeaderStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)shoppingPDPHeaderControllerDidTapBackButton:(id)arg1;
- (void)shoppingPDPHeaderControllerDidTapMoreButton:(id)arg1;
- (void)feedNetworker:(id)arg1 didLoadResponse:(id)arg2 requestConfiguration:(id)arg3;
- (void)feedNetworker:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)_updateProductItem:(id)arg1 withSaveStatus:(_Bool)arg2;
- (void)_presentSaveToastWithProductItem:(id)arg1 saveStatus:(_Bool)arg2;
- (void)_handleTapToUpdateProductItem:(id)arg1 withSaveStatus:(_Bool)arg2;
- (void)_showFetchFailureAlertBar;
- (void)_navigateToContextualFeedForMediaCollection:(id)arg1 collectionType:(long long)arg2 feedItem:(id)arg3;
- (void)_logReportingEvent:(unsigned long long)arg1;
- (void)_didTapReportingFlowDone;
- (void)_enterReportingFlow;
- (void)_updateStatusBarAnimated:(_Bool)arg1;
- (void)_updateDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchFeed;
- (_Bool)shouldConsiderSafeAreaForPreferredContentBottomInset;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 feedItem:(id)arg3 merchant:(id)arg4 entryPoint:(id)arg5 priorModule:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


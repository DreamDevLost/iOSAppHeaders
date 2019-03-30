//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAnalyticsModule.h"
#import "IGBrandedContentUpsellHelperDelegate.h"
#import "IGBroadcastAccountCellCollectionViewCellDelegate.h"
#import "IGBroadcastShareLocationManagerDelegate.h"
#import "IGFavoritesAlertControllerDelegate.h"
#import "IGHashtagPostCreationViewControllerDelegate.h"
#import "IGPostSettingsViewControllerAddPartnerDelegate.h"
#import "IGShareListManagerDelegate.h"
#import "IGShareManager.h"
#import "IGShareNUXControllerDelegate.h"
#import "IGShoppingFeedNetworkerDelegate.h"
#import "IGTaggingViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGAutocompleteController, IGBrandedContentUpsellHelper, IGBroadcastShareGroupManager, IGBroadcastShareLocationManager, IGComposition, IGFBPageCrossPostSettingsManager, IGFavoritesAlertController, IGHashtagPostCreationLogger, IGMediaMetadata, IGPostSettingsCell, IGPostSettingsViewController, IGShareListManager, IGShareNUXController, IGShareSocialShareManager, IGShoppingFeedNetworker, IGShoppingUserCanTagProductsFromMerchantResponse, IGUserSession, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString, UICollectionView, UIScrollView, UISwitch, UIView, UIViewController<IGAnalyticsModule>;

@interface IGBroadcastShareManager : IGViewController <IGShareListManagerDelegate, IGShareNUXControllerDelegate, IGTaggingViewControllerDelegate, IGBroadcastAccountCellCollectionViewCellDelegate, IGBroadcastShareLocationManagerDelegate, IGFavoritesAlertControllerDelegate, IGPostSettingsViewControllerAddPartnerDelegate, IGBrandedContentUpsellHelperDelegate, IGHashtagPostCreationViewControllerDelegate, IGShoppingFeedNetworkerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGAnalyticsModule, IGShareManager>
{
    IGShareNUXController *_nuxController;
    NSOrderedSet *_loggedInUsers;
    NSMutableOrderedSet *_listedUsers;
    NSString *_selectedUserPKOnAccountSwitcher;
    NSMutableSet *_selectedUserPKs;
    IGPostSettingsCell *_postSettingsCell;
    IGBrandedContentUpsellHelper *_brandedContentUpsellHelper;
    IGFBPageCrossPostSettingsManager *_crossPostSettingsManager;
    IGHashtagPostCreationLogger *_hashtagPostCreationLogger;
    _Bool _showLoggedInUsers;
    _Bool _didAddSponsorPartner;
    _Bool _hashtagCreationEnabled;
    _Bool _isLoggedInUserTrayOpen;
    IGShoppingFeedNetworker *_tagProductsFromBrandedSponsorNetworker;
    IGShoppingUserCanTagProductsFromMerchantResponse *_canTagProductsFromMerchantResponse;
    _Bool _productTaggingEnabledForCurrentPost;
    _Bool _showFavoritesRow;
    _Bool _enteredShoppingOnboardingFlow;
    _Bool _isAutoPostShareToFacebookEnabled;
    _Bool _isAutoPostShareToFacebookNuxEligible;
    NSString *_shareString;
    UIViewController<IGAnalyticsModule> *_delegate;
    id <IGBroadcastShareTagDelegate> _tagDelegate;
    id <IGBroadcastShareLocationDelegate> _locationDelegate;
    id <IGBroadcastShareAccountDelegate> _accountDelegate;
    id <IGBroadcastShareFavoritesDelegate> _favoritesDelegate;
    id <IGBroadcastShareBrandedContentUpsellDelegate> _brandedContentUpsellDelegate;
    IGBroadcastShareGroupManager *_groupManager;
    IGUserSession *_userSession;
    IGComposition *_composition;
    IGMediaMetadata *_editingTagsMediaMetadata;
    id <IGTaggingViewConfiguration> _taggingViewConfig;
    IGMediaMetadata *_mediaMetadata;
    IGShareListManager *_shareListManager;
    UICollectionView *_collectionView;
    UIView *_headerView;
    UIView *_headerBackgroundView;
    NSString *_searchSessionId;
    IGBroadcastShareLocationManager *_locationManager;
    IGShareSocialShareManager *_socialShareManager;
    UIView *_overlayView;
    IGAutocompleteController *_autocompleteController;
    UISwitch *_favoritesSwitch;
    IGFavoritesAlertController *_favoritesAlertController;
    IGPostSettingsViewController *_advancedSettingsView;
}

@property(readonly, nonatomic) _Bool isAutoPostShareToFacebookNuxEligible; // @synthesize isAutoPostShareToFacebookNuxEligible=_isAutoPostShareToFacebookNuxEligible;
@property(readonly, nonatomic) _Bool isAutoPostShareToFacebookEnabled; // @synthesize isAutoPostShareToFacebookEnabled=_isAutoPostShareToFacebookEnabled;
@property(readonly, nonatomic) _Bool enteredShoppingOnboardingFlow; // @synthesize enteredShoppingOnboardingFlow=_enteredShoppingOnboardingFlow;
@property(retain, nonatomic) IGPostSettingsViewController *advancedSettingsView; // @synthesize advancedSettingsView=_advancedSettingsView;
@property(retain, nonatomic) IGFavoritesAlertController *favoritesAlertController; // @synthesize favoritesAlertController=_favoritesAlertController;
@property(retain, nonatomic) UISwitch *favoritesSwitch; // @synthesize favoritesSwitch=_favoritesSwitch;
@property(nonatomic) _Bool showFavoritesRow; // @synthesize showFavoritesRow=_showFavoritesRow;
@property(retain, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) IGShareSocialShareManager *socialShareManager; // @synthesize socialShareManager=_socialShareManager;
@property(retain, nonatomic) IGBroadcastShareLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(nonatomic) _Bool productTaggingEnabledForCurrentPost; // @synthesize productTaggingEnabledForCurrentPost=_productTaggingEnabledForCurrentPost;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(retain, nonatomic) id <IGTaggingViewConfiguration> taggingViewConfig; // @synthesize taggingViewConfig=_taggingViewConfig;
@property(retain, nonatomic) IGMediaMetadata *editingTagsMediaMetadata; // @synthesize editingTagsMediaMetadata=_editingTagsMediaMetadata;
@property(retain, nonatomic) IGComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGBroadcastShareGroupManager *groupManager; // @synthesize groupManager=_groupManager;
@property(nonatomic) __weak id <IGBroadcastShareBrandedContentUpsellDelegate> brandedContentUpsellDelegate; // @synthesize brandedContentUpsellDelegate=_brandedContentUpsellDelegate;
@property(nonatomic) __weak id <IGBroadcastShareFavoritesDelegate> favoritesDelegate; // @synthesize favoritesDelegate=_favoritesDelegate;
@property(nonatomic) __weak id <IGBroadcastShareAccountDelegate> accountDelegate; // @synthesize accountDelegate=_accountDelegate;
@property(nonatomic) __weak id <IGBroadcastShareLocationDelegate> locationDelegate; // @synthesize locationDelegate=_locationDelegate;
@property(nonatomic) __weak id <IGBroadcastShareTagDelegate> tagDelegate; // @synthesize tagDelegate=_tagDelegate;
@property(nonatomic) __weak UIViewController<IGAnalyticsModule> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *shareString; // @synthesize shareString=_shareString;
- (void).cxx_destruct;
- (long long)_tagProductState;
- (_Bool)_shouldShowTagProductsTooltip;
- (void)postSettingsViewControllerAddPartnerDidCloseForm:(_Bool)arg1;
- (void)hashtagPostCreationViewControllerAddedHashtags:(id)arg1;
- (void)autoSharingToFacebookOptionWasDismissed:(id)arg1;
- (void)autoSharingToFacebookOptionWasSelected:(id)arg1;
- (void)sharedNUXControllerConnectFacebookTooltipDidAppear:(id)arg1;
- (void)sharedNUXControllerTagFBFriendsTooltipDidAppear:(id)arg1;
- (void)tagProductsTooltipDidAppear:(id)arg1;
- (void)crossPostNUXWasDismissed:(id)arg1;
- (void)crossPostNUXDidAppear:(id)arg1;
- (id)analyticsModule;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (void)_updateSharingMetadata;
- (id)viewControllerForShareConfiguration;
- (void)shareListNeedsReloadForServiceAtIndex:(long long)arg1 userInteraction:(_Bool)arg2;
- (void)shareListNeedsFullReload;
- (void)_openAdvancedSettings;
- (void)broadcastAccountCollectionViewCell:(id)arg1 didToggleUser:(id)arg2 on:(_Bool)arg3;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2;
- (void)brandedContentUpsellHelperDidTapAddTagButtonWithSignals:(id)arg1;
- (void)_showBrandedContentUpsellNux;
- (void)showBrandedContentFeedUpsellAlert;
- (_Bool)shouldShowBrandedContentUpsellAlertWithCaption:(id)arg1;
- (void)_configureAccountCell:(id)arg1 row:(unsigned long long)arg2;
- (void)_configureAccountTrayCell:(id)arg1 isTrayOpen:(_Bool)arg2;
- (void)_configureLocationCell:(id)arg1;
- (void)locationTokenTapped:(id)arg1;
- (void)locationListPresented:(id)arg1;
- (void)taggingViewController:(id)arg1 didRemoveTag:(id)arg2;
- (void)taggingViewControllerDidOpenSearch;
- (void)taggingViewController:(id)arg1 finishedWithAssets:(id)arg2;
- (void)taggingViewControllerCancelled:(id)arg1;
- (void)feedNetworker:(id)arg1 didLoadResponse:(id)arg2 requestConfiguration:(id)arg3;
- (void)feedNetworker:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)_closeTaggingViewController:(id)arg1;
- (id)_productItemTagsSet;
- (id)_userTagsSet;
- (id)_fbUserTagSet;
- (void)_openTagProductsViewController;
- (void)_startProductTaggingFlow;
- (void)_openHashtagsCreationViewController;
- (void)_openTagPeopleViewControllerForMetadata:(id)arg1;
- (void)_loadAbilityToTagProductFromSponsorPartner:(id)arg1;
- (void)_configureHashtagsCell:(id)arg1;
- (void)_configurePeopleCell:(id)arg1;
- (void)favoritesAlertControllerDidCancelSetup:(id)arg1;
- (void)favoritesAlertControllerDidFinishSetup:(id)arg1;
- (_Bool)_isCrossSharingToOtherIGAccount;
- (void)setAccountSwitcherUser:(id)arg1 shouldUpdateCollectionView:(_Bool)arg2;
- (void)accountSwitcherNonCurrentUserSelected:(_Bool)arg1;
- (void)_onFavoritesLongPress:(id)arg1;
- (void)_updateFavoritesAndShareManagerForMediaAudience;
- (void)_updateForFavoritesChange;
- (void)_configureFavoritesCell:(id)arg1;
- (void)_didToggleFavorites;
- (void)_didTapFavoritesRow;
- (void)configureWithHeaderView:(id)arg1;
- (void)_configureCaptionCell:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_didTapProductTagCell:(id)arg1;
- (void)_didTapPeopleTagCell;
- (void)_didTapHashtagsCellRow:(int)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)_numberOfItemsForAccountsSection;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) _Bool isReadyToShare;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)_assets;
- (_Bool)_sidecarEnabled;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (id)_initWithUserSession:(id)arg1 shareListManager:(id)arg2;
- (void)_prepareAutoPostShareToFacebook;
- (void)_resetFacebookSharingEnabled;
- (id)initWithComposition:(id)arg1 shareListManager:(id)arg2 userSession:(id)arg3;
- (id)initWithMediaMetadata:(id)arg1 shareListManager:(id)arg2 userSession:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


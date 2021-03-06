//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGBusinessAttributeSyncFlowDelegate.h"
#import "IGBusinessAttributeSyncNetworkerDelegate.h"
#import "IGBusinessAttributeSyncTableViewCellDelegate.h"
#import "IGBusinessConversionAddressViewControllerDelegate.h"
#import "IGBusinessConversionEditableCellDelegate.h"
#import "IGBusinessFlowInstantExperienceSelfServeControllerDelegate.h"
#import "IGBusinessFlowPresenterDelegate.h"
#import "IGChangePhoneNumberViewControllerDelegate.h"
#import "IGDismissableViewController.h"
#import "IGTextFieldDelegate.h"

@class IG4BLogger, IGBusinessAttributeSyncFlow, IGBusinessAttributeSyncInfo, IGBusinessAttributeSyncNetworker, IGBusinessAttributeSyncSettingsViewModel, IGBusinessFlowInstantExperienceSelfServeController, IGBusinessInstantExperienceInfo, IGFacebookPageInfo, IGUser, IGUserSession, NSArray, NSString;

@interface IGEditBusinessProfileViewController : IGGroupedTableViewController <IGBusinessAttributeSyncFlowDelegate, IGBusinessAttributeSyncNetworkerDelegate, IGBusinessAttributeSyncTableViewCellDelegate, IGBusinessConversionAddressViewControllerDelegate, IGBusinessConversionEditableCellDelegate, IGBusinessFlowInstantExperienceSelfServeControllerDelegate, IGBusinessFlowPresenterDelegate, IGChangePhoneNumberViewControllerDelegate, IGDismissableViewController, IGTextFieldDelegate>
{
    IGBusinessInstantExperienceInfo *_ixInfo;
    IGBusinessFlowInstantExperienceSelfServeController *_instantExperienceSelfServeController;
    IGUser *_user;
    IGUserSession *_userSession;
    NSString *_ixSelfServeURLString;
    IGBusinessAttributeSyncInfo *_attributeDataModel;
    IGBusinessAttributeSyncNetworker *_attributeNetworker;
    _Bool _showAttributeSyncCell;
    IGBusinessAttributeSyncSettingsViewModel *_attributeViewModel;
    IGBusinessAttributeSyncFlow *_attributeSyncFlow;
    _Bool _needsSave;
    _Bool _isModalPresented;
    _Bool _bookButtonInitialValue;
    _Bool _bookNowOriginalValue;
    id <IGEditBusinessProfileViewControllerModalDelegate> _modalDelegate;
    IGFacebookPageInfo *_pageInfo;
    IG4BLogger *_logger;
    NSArray *_contactOptions;
}

@property(nonatomic) _Bool bookNowOriginalValue; // @synthesize bookNowOriginalValue=_bookNowOriginalValue;
@property(nonatomic) _Bool bookButtonInitialValue; // @synthesize bookButtonInitialValue=_bookButtonInitialValue;
@property(readonly, nonatomic) NSArray *contactOptions; // @synthesize contactOptions=_contactOptions;
@property(nonatomic) _Bool isModalPresented; // @synthesize isModalPresented=_isModalPresented;
@property(readonly, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(retain, nonatomic) IGFacebookPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak id <IGEditBusinessProfileViewControllerModalDelegate> modalDelegate; // @synthesize modalDelegate=_modalDelegate;
- (void).cxx_destruct;
- (void)didSelectDismissButtonAtFlowStep:(long long)arg1;
- (void)didSelectCompleteButtonWithUpdatedDataModel:(id)arg1;
- (id)_buildContactOptions;
- (id)_actionRowToggleLabel;
- (id)analyticsModule;
- (void)cell:(id)arg1 didSwitchValueTo:(_Bool)arg2;
- (void)businessAttributeSyncNetworker:(id)arg1 fetchFailedWithError:(id)arg2 responseDict:(id)arg3;
- (void)businessAttributeSyncNetworker:(id)arg1 didUpdateAttributeData:(id)arg2;
- (void)businessAttributeSyncNetworker:(id)arg1 didFetchBusinessAttributeDataModel:(id)arg2;
- (id)businessFlowMegaphonePresenter;
- (id)businessFlowMegaphonePresenterDelegate;
- (id)businessFlowPresentingViewController;
- (void)businessFlowInstantExperienceSelfServeController:(id)arg1 partnerURL:(id)arg2 partnerName:(id)arg3;
- (void)editableCellDidEndEditing:(id)arg1;
- (_Bool)editableCellWantsReturn:(id)arg1 withValue:(id)arg2 forKey:(id)arg3;
- (void)editableCellBeganEditing:(id)arg1;
- (void)editableCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3;
- (void)changePhonenumberViewController:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)changePhonenumberViewController:(id)arg1 willPresentCountryCodeViewController:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned long long)arg4;
- (void)addressViewController:(id)arg1 didUpdateInfo:(id)arg2;
- (void)_setupAttributeSyncNetworker;
- (_Bool)_hasContact;
- (void)_logBookNowButtonChanges;
- (void)_save;
- (void)_updateRightButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)_bookNowSwitched:(id)arg1;
- (void)_configureBusinessProfileActionCell:(id)arg1;
- (void)_configureBusinessProfileAddressCell:(id)arg1;
- (void)_configureBusinessProfilePhoneNumberCell:(id)arg1;
- (void)_configureBusinessProfileEmailCell:(id)arg1;
- (void)_configureBusinessProfileTableViewCell:(id)arg1 forItem:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didDismissViewController;
- (id)_loggerContactDictionary;
- (void)_onModalCancel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


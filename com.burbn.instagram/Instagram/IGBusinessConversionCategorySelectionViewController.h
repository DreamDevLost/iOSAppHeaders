//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBusinessCategorySelectionViewControllerDelegate.h"
#import "IGDismissableViewController.h"

@class IG4BLogger, IGBusinessCategorySelectionViewController, IGBusinessConversionFacebookPageCategory, IGUserSession, NSString;

@interface IGBusinessConversionCategorySelectionViewController : IGViewController <IGBusinessCategorySelectionViewControllerDelegate, IGDismissableViewController>
{
    IGUserSession *_userSerssion;
    IGBusinessCategorySelectionViewController *_categorySelectionVC;
    IGBusinessConversionFacebookPageCategory *_selectedCategory;
    IG4BLogger *_logger;
    _Bool _useBottomContinueButton;
    id <IGBusinessConversionCategorySelectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBusinessConversionCategorySelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)categorySelectionViewControllerdidStartEditingSearchCell:(id)arg1;
- (void)categorySelectionViewControllerdidStartTypingInCategorySearchCell:(id)arg1 searchText:(id)arg2;
- (void)categorySelectionViewController:(id)arg1 didTapContinueButton:(id)arg2;
- (void)categorySelectionViewController:(id)arg1 didFetchSuggestedCategoryError:(id)arg2 forPageName:(id)arg3;
- (void)categorySelectionViewController:(id)arg1 didFetchSuggestedCategories:(id)arg2 forPageName:(id)arg3;
- (void)categorySelectionViewController:(id)arg1 didFetchSubCategoryError:(id)arg2 forSuperCategory:(id)arg3;
- (void)categorySelectionViewController:(id)arg1 didFetchSubCategories:(id)arg2 forSuperCategory:(id)arg3;
- (void)categorySelectionViewController:(id)arg1 didFetchSuperCategoryError:(id)arg2;
- (void)categorySelectionViewController:(id)arg1 didFetchSuperCategories:(id)arg2;
- (void)categorySelectionViewController:(id)arg1 userDidSelectCategory:(id)arg2;
- (void)didDismissViewController;
- (void)_finishCategorySelection;
- (void)_nextButtonTapped:(id)arg1;
- (void)_updateNextButtonStatus;
- (void)_loadCategorySubcontroller:(id)arg1;
- (void)_setupRightBarButtonItem;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)setupCategorySelectionViewController;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 useBottomContinueButton:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


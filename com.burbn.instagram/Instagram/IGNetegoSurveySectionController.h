//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGActionSheetDelegate.h"
#import "IGGenericSurveyAlertAssistantDeleagte.h"
#import "IGGenericSurveyQuestionListSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListDisplayDelegate.h"
#import "IGListSupplementaryViewSource.h"
#import "IGNetegoSurveyHeaderDelegate.h"
#import "IGNetegoSurveyLearnMoreMessageCellDelegate.h"

@class IGGenericSurveyAlertAssistant, IGListAdapter, IGListAdapterScrollingContext, IGNetegoSurveyItem, IGNetegoSurveyLogger, IGUserSession, NSString, UICollectionView;

@interface IGNetegoSurveySectionController : IGListSectionController <IGActionSheetDelegate, IGGenericSurveyAlertAssistantDeleagte, IGGenericSurveyQuestionListSectionControllerDelegate, IGListAdapterDataSource, IGListDisplayDelegate, IGListSupplementaryViewSource, IGNetegoSurveyHeaderDelegate, IGNetegoSurveyLearnMoreMessageCellDelegate>
{
    IGUserSession *_userSession;
    IGNetegoSurveyItem *_surveyItem;
    unsigned long long _hiddenState;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGListAdapterScrollingContext *_scrollingContext;
    _Bool _surveyDidAppear;
    _Bool _pendingDidEndDisplayCollapse;
    _Bool _didCompleteSurvey;
    _Bool _didScrollAwayAfterCompleteSurvey;
    long long _currentQuestionIndex;
    IGNetegoSurveyLogger *_logger;
    IGGenericSurveyAlertAssistant *_alertAssistant;
    NSString *_module;
}

+ (id)_netegoSurveyCellTypeClassMap;
- (void).cxx_destruct;
- (void)_hideForDidEndDisplay;
- (void)_updatePendingEndScreen;
- (void)_onNetegoSurveyItemHiddenReasonSelected:(id)arg1;
- (void)_onNetegoSurveyItemHidden:(id)arg1;
- (void)_notifyHideActionSelected;
- (void)alertAssistantDetectErrorWithMessage:(id)arg1;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)_navigateToUserProfile:(id)arg1;
- (void)netegoSurveyLearnMoreMessageDidTapOnURL:(id)arg1;
- (void)netegoSurveyHeaderDidTapOnMoreButton:(id)arg1;
- (void)netegoSurveyHeaderDidTapOnAvatar:(id)arg1;
- (void)netegoSurveyHeaderDidTapUser:(id)arg1;
- (void)genericSurveyQuestionListSectionController:(id)arg1 didReceiveSurveyResult:(id)arg2 extraDict:(id)arg3;
- (void)genericSurveyQuestionListSectionControllerWillDismissKeyboard:(id)arg1;
- (void)genericSurveyQuestionListSectionController:(id)arg1 willShowKeyboardWithItemHeight:(double)arg2;
- (void)genericSurveyQuestionListSectionController:(id)arg1 didCompleteWithSurveyResults:(id)arg2 extraDict:(id)arg3;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)_supplementaryViewKindClasses;
- (id)supportedElementKinds;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)_hiddenPlaceholderCell;
- (id)_hiddenConfirmationListCell;
- (id)_hiddenReasonListCell;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_setupListAdapter;
- (void)_setupCollectionView;
- (id)initWithUserSession:(id)arg1 scollingContext:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


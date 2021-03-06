//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGGenericSurveyNetworkSourceDelegate.h"
#import "IGGenericSurveyPageSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGSimpleActionPresentableViewer.h"

@class IGAlertBar, IGGenericSurveyItem, IGGenericSurveyLoggingContext, IGGenericSurveyNetworkSource, IGListAdapter, IGRankedTitleView, IGSpinnerLabelViewModel, IGUserSession, NSString, UIBarButtonItem, UICollectionView;

@interface IGGenericSurveyViewController : IGViewController <IGGenericSurveyNetworkSourceDelegate, IGGenericSurveyPageSectionControllerDelegate, IGListAdapterDataSource, IGSimpleActionPresentableViewer>
{
    IGUserSession *_userSession;
    unsigned long long _surveyType;
    IGGenericSurveyNetworkSource *_networkSource;
    IGSpinnerLabelViewModel *_spinner;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGGenericSurveyItem *_surveyItem;
    UIBarButtonItem *_dismissBarButton;
    UIBarButtonItem *_skipBarButton;
    IGRankedTitleView *_rankedTitleView;
    long long _currentPageIndex;
    IGAlertBar *_alertBar;
    IGGenericSurveyLoggingContext *_loggingContext;
    double _currentPageStartTime;
    double _currentPageTimeSpent;
    id <IGSimpleActionPresentableViewerDelegate> _simpleActionDelegate;
}

@property(nonatomic) __weak id <IGSimpleActionPresentableViewerDelegate> simpleActionDelegate; // @synthesize simpleActionDelegate=_simpleActionDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)networkSource:(id)arg1 failedWithError:(id)arg2;
- (void)networkSource:(id)arg1 item:(id)arg2;
- (void)_resetTimer;
- (double)_currentPageTimeSpent;
- (id)currentPageID;
- (void)_scrollToPageWithIndex:(long long)arg1;
- (void)_logWithResults:(id)arg1 extraDict:(id)arg2;
- (void)_allPagesDidComplete;
- (void)_currentPageDidComplete;
- (void)genericSurveyPageSectionController:(id)arg1 didDetectErrorWithMessage:(id)arg2;
- (void)genericSurveyPageSectionController:(id)arg1 didReceiveSurveyResult:(id)arg2 extraDict:(id)arg3;
- (void)genericSurveyPageSectionController:(id)arg1 didCompleteWithSurveyResults:(id)arg2 extraDict:(id)arg3;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)_didTapOnSkipButton;
- (void)_didTapDismissButton;
- (void)_updatePromptForCurrentItem:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupNavigationBar;
- (void)_setupCollectionViewAndAdapter;
- (void)_appWillEnterForeground:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 surveyType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


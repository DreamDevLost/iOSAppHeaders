//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGGenericSurveyAnswerListSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"

@class IGGenericSurveyAlertAssistant, IGGenericSurveyAnswerListCollectionDataSource, IGGenericSurveyTapCTAContext, IGListAdapter, NSString, UICollectionView;

@interface IGGenericSurveyAnswerListCollectionSectionController : IGListSectionController <IGGenericSurveyAnswerListSectionControllerDelegate, IGListAdapterDataSource>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    long long _currentIndex;
    IGGenericSurveyAnswerListCollectionDataSource *_dataSource;
    id <IGGenericSurveyAnswerListCollectionSectionControllerDelegate> _delegate;
    IGGenericSurveyAlertAssistant *_alertAssistant;
    IGGenericSurveyTapCTAContext *_tapCTAContext;
}

- (void).cxx_destruct;
- (_Bool)genericSurveyAnswerListSectionControllerIsSubmitButtonEnabled:(id)arg1;
- (void)genericSurveyAnswerListSectionController:(id)arg1 didSubmitWithAnswers:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)scrollToAnswerListWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_setupCollectionViewAndAdapter;
- (id)initWithDelegate:(id)arg1 alertAssistant:(id)arg2 tapCTAContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


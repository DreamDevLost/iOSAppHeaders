//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGGenericSurveyQuestionDelegate.h"

@class IGGenericSurveyQuestionTitlesDataSource, NSString;

@interface IGGenericSurveyQuestionTitleListSectionController : IGListSectionController <IGGenericSurveyQuestionDelegate>
{
    long long _currentQuestionIndex;
    long long _maxQuestionIndex;
    IGGenericSurveyQuestionTitlesDataSource *_dataSource;
    id <IGGenericSurveyQuestionTitleListSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (unsigned long long)_navBarButtonStatusWithQuestionIndex:(long long)arg1;
- (id)_visibleCell;
- (void)genericSurveyQuestionCellDidTapBackButton:(id)arg1;
- (void)genericSurveyQuestionCellDidTapForwardButton:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)updateQuestionTitleBarButtonStatus:(unsigned long long)arg1;
- (void)proceedToQuestionWithIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


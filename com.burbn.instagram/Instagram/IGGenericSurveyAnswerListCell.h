//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGGenericSurveyAnswerListViewModel, NSMutableSet, NSString, UILongPressGestureRecognizer, UITableView;

@interface IGGenericSurveyAnswerListCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate>
{
    IGGenericSurveyAnswerListViewModel *_viewModel;
    id <IGGenericSurveyAnswerListCellDelegate> _delegate;
    UITableView *_tableView;
    NSMutableSet *_mutableSelectionSet;
    UILongPressGestureRecognizer *_longPressRecognizer;
}

- (void).cxx_destruct;
- (void)_unselectCellWithIndexPath:(id)arg1;
- (void)_selectCellWithIndexPath:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)clearAllSelections;
- (void)configureAnswerListWithViewModel:(id)arg1 previousSelectedAnswers:(id)arg2 delegate:(id)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


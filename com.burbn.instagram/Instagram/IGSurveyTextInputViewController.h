//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGSurveyTextInputCellDelegate.h"

@class IGSurveyDataProvider, IGSurveyHeaderView, IGSurveyQuestionObj, NSString, UIView;

@interface IGSurveyTextInputViewController : IGGroupedTableViewController <IGSurveyTextInputCellDelegate>
{
    IGSurveyQuestionObj *_question;
    IGSurveyHeaderView *_headerView;
    IGSurveyDataProvider *_dataProvider;
    UIView *_headViewLineView;
    NSString *_questionAnswers;
}

@property(copy, nonatomic) NSString *questionAnswers; // @synthesize questionAnswers=_questionAnswers;
@property(retain, nonatomic) UIView *headViewLineView; // @synthesize headViewLineView=_headViewLineView;
@property(readonly, nonatomic) IGSurveyDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) IGSurveyHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) IGSurveyQuestionObj *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)surveyTextViewDidChange:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_cancelSurvey;
- (void)_nextView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithQuestion:(id)arg1 dataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGUsageInsightsDeleteReminderViewDelegate.h"
#import "IGUsageInsightsSetReminderViewDelegate.h"

@class IGUsageInsightsLogger, IGUserSession, UIImpactFeedbackGenerator, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGUsageInsightsReminderViewController : IGViewController <IGUsageInsightsSetReminderViewDelegate, IGUsageInsightsDeleteReminderViewDelegate>
{
    IGUserSession *_userSession;
    IGUsageInsightsLogger *_logger;
    UIView *_visibleReminderView;
    UIView *_backgroundView;
    _Bool _appearingTransitionCompleted;
    UITapGestureRecognizer *_tapToDismissGesture;
    UISwipeGestureRecognizer *_swipeToDismissGesture;
    UIImpactFeedbackGenerator *_impactGenerator;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_dismissSelf;
- (void)_backgroundDismissAction:(id)arg1;
- (void)reminderViewDidEdit:(id)arg1;
- (void)reminderViewDidCancel:(id)arg1;
- (void)reminderView:(id)arg1 didSubmitWithNumHours:(unsigned long long)arg2 numMinutes:(unsigned long long)arg3;
- (_Bool)prefersTabBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

@end


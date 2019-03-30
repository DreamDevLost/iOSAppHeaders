//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGSimpleActionViewDelegate.h"

@class IGGenericSurveyEndingScreenContext, IGUserSession, UIView;

@interface IGGenericSurveyEndingScreenViewController : IGViewController <IGSimpleActionViewDelegate>
{
    IGGenericSurveyEndingScreenContext *_context;
    IGUserSession *_userSession;
    UIView *_contentView;
    id <IGSimpleActionPresentableViewerDelegate> _simpleActionDelegate;
}

@property(nonatomic) __weak id <IGSimpleActionPresentableViewerDelegate> simpleActionDelegate; // @synthesize simpleActionDelegate=_simpleActionDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)simpleActionViewDidTapDismissButton:(id)arg1;
- (void)simpleActionViewDidTapStartButton:(id)arg1 withSimpleAction:(id)arg2;
- (void)_didTapDoneButton;
- (void)_setupContentView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 userSession:(id)arg2;

@end

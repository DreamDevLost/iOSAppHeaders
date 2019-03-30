//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGestureHandler.h"
#import "IGLeadGenFooterViewDelegate.h"
#import "IGLeadGenHeaderViewDelegate.h"
#import "IGStoryCTAInteractionControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGFeedItem, IGLeadGenFormViewModel, IGLeadGenHeaderView, IGLeadGenLinkHandler, IGLeadGenLogger, IGLeadGenMutationHandler, IGUserSession, NSMutableDictionary, NSString, UIView;

@interface IGLeadGenRootViewController : IGViewController <IGLeadGenFooterViewDelegate, IGLeadGenHeaderViewDelegate, UIScrollViewDelegate, IGAnalyticsModule, IGGestureHandler, IGStoryCTAInteractionControllerDelegate>
{
    IGLeadGenFormViewModel *_formViewModel;
    NSMutableDictionary *_stageControllers;
    IGUserSession *_session;
    IGLeadGenMutationHandler *_mutationHandler;
    IGLeadGenHeaderView *_headerView;
    NSString *_analyticsModule;
    IGLeadGenLinkHandler *_linkHandler;
    IGFeedItem *_feedItem;
    IGLeadGenLogger *_logger;
    unsigned long long _formStage;
    UIView *_stageView;
}

@property(retain, nonatomic) UIView *stageView; // @synthesize stageView=_stageView;
@property(readonly, nonatomic) unsigned long long formStage; // @synthesize formStage=_formStage;
- (void).cxx_destruct;
- (_Bool)storyCTAInteractionControllerShouldUseDismissGesture:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)storyCTAInteractionControllerDidBeginInteraction;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_initializeForm;
- (void)_updateStageViewModelsWithSubmissionStatus:(unsigned long long)arg1;
- (void)_submitForm;
- (void)_logFunnelActionsOnSecondaryButtonTap;
- (void)_logFunnelActionsOnPrimaryButtonTap;
- (void)_logFunnelActionsOnCloseButtonTap;
- (void)footerViewDidTapSecondaryButton:(id)arg1;
- (void)footerViewDidTapPrimaryButton:(id)arg1;
- (void)didTapCloseButton;
- (void)setFormStage:(unsigned long long)arg1;
- (void)configureWithViewModel:(id)arg1;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)arg1 userSession:(id)arg2 loggingDelegate:(id)arg3 feedItem:(id)arg4 feedItemTracker:(id)arg5 directResponseInfo:(id)arg6 context:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

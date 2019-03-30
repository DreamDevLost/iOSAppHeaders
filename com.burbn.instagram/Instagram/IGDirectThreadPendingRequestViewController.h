//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGDirectThreadRequestSplitButtonViewDelegate.h"

@class CAGradientLayer, CALayer, IGDirectPendingInboxService, IGDirectPublishedThread, IGDirectThreadReportActionController, IGDirectThreadRequestSplitButtonView, IGUserSession, NSAttributedString, NSString, UILabel;

@interface IGDirectThreadPendingRequestViewController : UIViewController <IGDirectThreadRequestSplitButtonViewDelegate>
{
    IGDirectPublishedThread *_thread;
    IGUserSession *_userSession;
    IGDirectPendingInboxService *_pendingInboxService;
    IGDirectThreadRequestSplitButtonView *_splitButtonView;
    CAGradientLayer *_gradient;
    CALayer *_labelSeparator;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    NSString *_socialContext;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_socialContextLabel;
    NSString *_allowAcceptButtonTitle;
    _Bool _blockFromMessageRequestsEnabled;
    IGDirectThreadReportActionController *_reportActionController;
    NSString *_module;
    id <IGDirectThreadPendingRequestViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectThreadPendingRequestViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)directThreadRequestSplitButtonView:(id)arg1 didTapDestructiveButtonWithTitle:(id)arg2;
- (void)directThreadRequestSplitButtonView:(id)arg1 didTapPrimaryButtonWithTitle:(id)arg2;
- (void)_presentBlockOptions;
- (void)_displayError;
- (double)_horizontalPadding;
- (double)_verticalPadding;
- (struct CGSize)_subtitleLabelSize;
- (struct CGSize)_socialContextLabelSize;
- (struct CGSize)_titleLabelSize;
- (struct CGSize)_maxContentSize;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)_handleTapGesture:(id)arg1;
- (void)viewDidLoad;
- (void)_setupSubviews;
- (id)initWithThread:(id)arg1 userSession:(id)arg2 pendingInboxService:(id)arg3 blockFromMessageRequestsEnabled:(_Bool)arg4 module:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


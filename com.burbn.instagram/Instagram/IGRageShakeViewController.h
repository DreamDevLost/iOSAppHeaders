//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCaptionCellDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "IGPromoteFeedbackTermsViewLinkHandler.h"
#import "IGRageShakeViewControllerType.h"

@class IGCaptionCell, IGGroupedTableViewHeaderView, IGKeyboardObserver, IGPromoteFeedbackTermsView, IGRageShakeReport, IGTextButton, IGUserSession, NSNumber, NSString;

@interface IGRageShakeViewController : IGViewController <IGCaptionCellDelegate, IGKeyboardObserverShowDelegate, IGPromoteFeedbackTermsViewLinkHandler, IGRageShakeViewControllerType>
{
    IGUserSession *_userSession;
    IGTextButton *_installButton;
    IGGroupedTableViewHeaderView *_headerLabel;
    IGCaptionCell *_captionCell;
    IGPromoteFeedbackTermsView *_promoteFeedbackTermsView;
    _Bool _versionUpdateAvailable;
    NSString *_appStoreVersion;
    _Bool _allowAdditionalAttachments;
    IGKeyboardObserver *_keyboardObserver;
    id <IGRageShakeViewControllerAdditionalAttachmentsDelegate> _additionalAttachmentsDelegate;
    id <IGRageShakeViewControllerDelegate> _delegate;
    NSString *_lastViewControllerName;
    IGRageShakeReport *_report;
    long long _reportType;
    id <IGRageShakeViewControllerUploader> _uploader;
    NSNumber *_categoryIdOverride;
}

@property(copy, nonatomic) NSNumber *categoryIdOverride; // @synthesize categoryIdOverride=_categoryIdOverride;
@property(readonly, nonatomic) id <IGRageShakeViewControllerUploader> uploader; // @synthesize uploader=_uploader;
@property(nonatomic) long long reportType; // @synthesize reportType=_reportType;
@property(readonly, nonatomic) IGRageShakeReport *report; // @synthesize report=_report;
@property(copy, nonatomic) NSString *lastViewControllerName; // @synthesize lastViewControllerName=_lastViewControllerName;
@property(nonatomic) __weak id <IGRageShakeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGRageShakeViewControllerAdditionalAttachmentsDelegate> additionalAttachmentsDelegate; // @synthesize additionalAttachmentsDelegate=_additionalAttachmentsDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_logAnalyticsForAppUpdateAction:(id)arg1;
- (id)_installButton;
- (void)_onUpdateButton:(id)arg1;
- (void)_showVersionUpdateButton;
- (id)_appStoreVersionForDictionaryResponse:(id)arg1;
- (void)_checkVersionUpdates;
- (void)_sendReport;
- (id)_contentPresentingViewController;
- (void)openLinkWithURL:(id)arg1;
- (_Bool)captionTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2;
- (void)captionTextViewDidBeginEditing:(id)arg1;
- (void)captionTextViewWillBeginEditing:(id)arg1;
- (void)captionCellEditButtonTapped;
- (void)captionCellMediaOverlayViewTapped;
- (_Bool)captionCellMediaOverlayViewTapEnabled;
- (void)captionTextViewDidChange:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)onCancelModal;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 uploader:(id)arg2 allowAdditionalAttachments:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 uploader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


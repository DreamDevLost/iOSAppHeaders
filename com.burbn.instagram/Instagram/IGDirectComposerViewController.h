//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGDirectAnimatedMediaViewControllerDelegate.h"
#import "IGDirectComposerTextListener.h"
#import "IGDirectEmojiReactionsBarDelegate.h"
#import "IGPartialModalSheetListener.h"

@class IGDirectAnimatedMediaViewController, IGDirectComposer, IGDirectEmojiReactionsBar, IGDirectNUXManager, IGDirectThreadService, IGPartialModalSheetViewController, IGVideoPlayerManager, NSString;

@interface IGDirectComposerViewController : UIViewController <IGDirectAnimatedMediaViewControllerDelegate, IGDirectComposerTextListener, IGDirectEmojiReactionsBarDelegate, IGPartialModalSheetListener>
{
    IGVideoPlayerManager *_videoPlayerManager;
    id <IGExperimentSetProviding> _experimentSetProvider;
    id <IGConfigurationCoordinatorProviding> _configurationCoordinatorProvider;
    IGDirectThreadService *_threadService;
    NSString *_threadId;
    id <IGNetworking> _networker;
    IGDirectNUXManager *_nuxManager;
    UIViewController *_nuxPresentingViewController;
    NSString *_analyticsModule;
    id <IGAnalyticsEventLoggingProtocol> _eventLogger;
    IGDirectAnimatedMediaViewController *_animatedMediaViewController;
    IGDirectEmojiReactionsBar *_emojiBarView;
    IGPartialModalSheetViewController *_overflowTrayViewController;
    id <IGDirectOverflowTrayContentViewControllerProviding> _overflowTrayContentViewControllerProvider;
    _Bool _quickRepliesEnabled;
    IGDirectComposer *_composerView;
    id <IGDirectComposerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectComposerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)emojiReactionsBar:(id)arg1 didTapEmoji:(id)arg2;
- (void)composerDidEndEditing:(id)arg1;
- (void)composerDidBeginEditing:(id)arg1;
- (void)composerDidTapOnTextArea:(id)arg1;
- (void)composerDidReachMaxTextLength:(id)arg1;
- (void)composer:(id)arg1 didChangeToText:(id)arg2 mode:(id)arg3;
- (void)directAnimatedMediaViewController:(id)arg1 didTapGiphyModel:(id)arg2 isRandom:(_Bool)arg3;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidDismiss;
- (void)_dismissComposerOverflowTrayIfNeeded;
- (void)_presentComposerOverflowTrayIfNeededWithInitialSearchQuery:(id)arg1 initialTab:(unsigned long long)arg2;
- (void)_restoreDraftMessage;
- (void)_restoreDraftMessageIfEligible;
- (void)_persistDraftMessage;
- (void)_persistDraftMessageIfEligible;
- (id)_draftMessage;
- (_Bool)_exposeStickersEnabled;
- (void)_initializeEmojiBarViewIfNeeded;
- (void)_initializeAnimatedMediaViewControllerWithText:(id)arg1 searchMode:(long long)arg2;
- (id)_animatedMediaAttachmentViewSpecWithSearchMode:(long long)arg1;
- (id)_emojiBarAttachmentViewSpec;
- (CDUnknownBlockType)_oneLineLayoutSpecProviderWithExperimentSetProvider:(id)arg1 configurationCoordinatorProvider:(id)arg2;
- (CDUnknownBlockType)_layoutSpecProviderWithExperimentSetProvider:(id)arg1 configurationCoordinatorProvider:(id)arg2;
- (void)_initializeComposerViewIfNeeded;
- (void)lookupCreatorWithName:(id)arg1 isSticker:(_Bool)arg2;
- (void)dismissComposerOverflowTrayViewController;
- (void)presentComposerOverflowTrayViewController;
@property(readonly, nonatomic) IGDirectComposer *composerView; // @synthesize composerView=_composerView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithExperimentSetProvider:(id)arg1 videoPlayerManager:(id)arg2 configurationCoordinatorProvider:(id)arg3 threadService:(id)arg4 threadId:(id)arg5 networker:(id)arg6 nuxManager:(id)arg7 nuxPresentingViewController:(id)arg8 overflowTrayContentViewControllerProvider:(id)arg9 quickRepliesEnabled:(_Bool)arg10 analyticsModule:(id)arg11 eventLogger:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectQuickReplyListViewControllerDelegate.h"

@class IGDirectQuickReplyLogger, IGUserSession, NSString, UIView<IGDirectComposerProtocol>;

@interface IGDirectThreadQuickReplyController : NSObject <IGDirectQuickReplyListViewControllerDelegate>
{
    IGUserSession *_userSession;
    UIView<IGDirectComposerProtocol> *_inputView;
    IGDirectQuickReplyLogger *_logger;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1 hostViewController:(id)arg2 isFullScreen:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)quickReplyService;
- (void)quickReplyListViewController:(id)arg1 didSelectQuickReply:(id)arg2;
- (id)messageForShortcut:(id)arg1;
- (_Bool)containsShortcutForText:(id)arg1;
- (void)logTapQuickReplyButtonWithIsHighlighted:(_Bool)arg1;
- (void)presentQuickReplyCreationWithSavedMessage:(id)arg1 viewController:(id)arg2;
- (void)presentQuickReplyListFromViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 inputView:(id)arg2 threadId:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


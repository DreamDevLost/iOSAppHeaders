//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectCameraPresentationManagerProtocol.h"
#import "IGInteractiveDismissTransitionControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGUserSession, NSString, UIView;

@interface IGDirectCameraPresentationManager : NSObject <IGInteractiveDismissTransitionControllerDelegate, UIViewControllerTransitioningDelegate, IGDirectCameraPresentationManagerProtocol>
{
    IGUserSession *_userSession;
    id <IGDirectCameraPresentationManagerDelegate> _delegate;
    UIView *_anchorView;
    struct CGPoint _anchorPointInView;
    id _sourceIdentifier;
    id <IGInteractiveDismissTransitionControllerType> _transitionController;
}

+ (void)setCustomTextModeTransitionControllerClass:(Class)arg1;
+ (void)setCustomViewerTransitionControllerClass:(Class)arg1;
+ (void)setCustomTransitionControllerClass:(Class)arg1;
- (void).cxx_destruct;
- (void)dismissWithExitPoint:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 asset:(id)arg6;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (void)_dismissCreationViewController:(id)arg1 animated:(_Bool)arg2 destinationView:(id)arg3 directRecipients:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_dismissCreationViewController:(id)arg1 animated:(_Bool)arg2 exitPoint:(long long)arg3 storySendTarget:(long long)arg4 directRecipients:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cameraTransitionController:(id)arg1 didDragToDismissViewController:(id)arg2;
- (void)presentWithConfiguration:(id)arg1 entryPoint:(unsigned long long)arg2 cameraTargetEffectId:(id)arg3 switcherMode:(long long)arg4 delegate:(id)arg5 navigationDelegate:(id)arg6 fromController:(id)arg7 anchorView:(id)arg8 anchorPointInView:(struct CGPoint)arg9 sourceIdentifier:(id)arg10 animated:(_Bool)arg11 completion:(CDUnknownBlockType)arg12;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


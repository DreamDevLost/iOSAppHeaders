//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGDirectVisualMessageViewerController, IGUserSession, NSString, UINavigationController;

@interface IGDirectVisualMessageViewerPresentationManager : NSObject <UIViewControllerTransitioningDelegate, IGUserSessionObject>
{
    IGUserSession *_userSession;
    IGDirectVisualMessageViewerController *_viewer;
    UINavigationController *_viewerNavigationController;
    id <NSObject> _contextIdentifier;
    _Bool _isPreloading;
    id <IGDirectVisualMessageViewerPresentationManagerContextDelegate> _contextDelegate;
}

- (void).cxx_destruct;
- (void)_clearPreloadContextIdentifier;
- (void)_beginPreloadingForCurrentContextIdentifier;
- (void)_handleCleanup;
- (void)_handleReadyToPresentViewer:(id)arg1 sourceController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadMediaForVisualMessage:(id)arg1 threadId:(id)arg2 service:(id)arg3 viewer:(id)arg4 sourceController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_presentVisualMessageViewerForThreadId:(id)arg1 visualMessage:(id)arg2 suppliedWindowOfVisualMessages:(id)arg3 threadService:(id)arg4 entryPoint:(long long)arg5 sourceController:(id)arg6 contextIdentifier:(id)arg7 contextDelegate:(id)arg8 autoLoopingMode:(unsigned long long)arg9 analyticsModule:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (long long)maxViewerLimit;
- (id)currentPreloadContextIdentifier;
- (void)cancelPresentationForContextDelegate:(id)arg1;
- (void)presentVisualMessageViewerForThreadId:(id)arg1 visualMessage:(id)arg2 suppliedWindowOfVisualMessages:(id)arg3 threadService:(id)arg4 entryPoint:(long long)arg5 sourceController:(id)arg6 contextIdentifier:(id)arg7 contextDelegate:(id)arg8 autoLoopingMode:(unsigned long long)arg9 analyticsModule:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


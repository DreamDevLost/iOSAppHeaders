//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectOutgoingUpdateListener.h"

@class IGDirectPublishedThread, IGDirectThreadAnalyticsLogger, IGDirectThreadService, IGUserSession, NSString, UIBarButtonItem, UIViewController;

@interface IGDirectThreadFlagController : NSObject <IGDirectOutgoingUpdateListener>
{
    IGDirectPublishedThread *_thread;
    _Bool _isCurrentlyFlagging;
    _Bool _toFlag;
    IGDirectThreadAnalyticsLogger *_analyticsLogger;
    IGUserSession *_userSession;
    IGDirectThreadService *_threadService;
    UIBarButtonItem *_flagBarButtonItem;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_updateFlagButtonWithFlagged:(_Bool)arg1;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)updateThread:(id)arg1;
- (void)toggleFlagThread;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 thread:(id)arg2 flagButton:(id)arg3 logger:(id)arg4 presentingViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


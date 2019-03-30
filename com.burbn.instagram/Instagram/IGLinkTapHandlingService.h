//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBrowserControllerDelegate.h"
#import "IGWebViewControllerBrowsingDelegate.h"

@class IGLinkshimService, IGMessengerDotMeURLHandler, IGUserSession, NSDate, NSString;

@interface IGLinkTapHandlingService : NSObject <IGWebViewControllerBrowsingDelegate, IGBrowserControllerDelegate>
{
    IGUserSession *_userSession;
    IGLinkshimService *_linkshimService;
    NSDate *_browsingStartDate;
    IGMessengerDotMeURLHandler *_messengerDotMeURLHandler;
    NSString *_webViewEventAnalyticsModule;
    NSString *_viewerSessionId;
}

- (void).cxx_destruct;
- (void)_logWebviewEndWithViewerSessionId:(id)arg1 browsingStartDate:(id)arg2;
- (void)webViewControllerDidEndBrowsing:(id)arg1;
- (void)webViewControllerDidReceiveUserFirstScroll:(id)arg1;
- (void)webViewControllerDidLoadFirstPageDOM:(id)arg1;
- (void)webViewControllerDidBeginBrowsing:(id)arg1;
- (void)browserControllerDidDismissWithUrl:(id)arg1 uid:(id)arg2;
- (void)_showAlertController:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForAddress:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForPhoneNumber:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForExternalURL:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForInternalURL:(id)arg1 sourceController:(id)arg2;
- (void)handleTapForURL:(id)arg1 sourceController:(id)arg2;
- (id)initWithUserSession:(id)arg1 webViewEventAnalyticsModule:(id)arg2 viewerSessionId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


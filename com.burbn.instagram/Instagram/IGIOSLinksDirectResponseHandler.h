//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAppStoreViewControllerDelegate.h"
#import "IGBrowserControllerDelegate.h"
#import "IGDirectResponseHandling.h"
#import "SFSafariViewControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"

@class IGBrowserController, IGMessengerDotMeURLHandler, IGUserSession, NSMutableDictionary, NSString;

@interface IGIOSLinksDirectResponseHandler : NSObject <IGAppStoreViewControllerDelegate, SFSafariViewControllerDelegate, SKStoreProductViewControllerDelegate, IGBrowserControllerDelegate, IGDirectResponseHandling>
{
    IGMessengerDotMeURLHandler *_messengerDotMeURLHandler;
    id <IGDirectReplyToAuthorViewControllerPresenting> _replyToAuthorVCPresenter;
    NSMutableDictionary *_lastURLs;
    IGBrowserController *_browserController;
    IGUserSession *_userSession;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
}

@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)browserControllerDidDismissWithUrl:(id)arg1 uid:(id)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)appStoreViewControllerDidFinish:(id)arg1;
- (_Bool)_handleCanvasDocument:(id)arg1 feedItem:(id)arg2 feedItemTracker:(id)arg3 viewController:(id)arg4 userSession:(id)arg5 module:(id)arg6;
- (_Bool)_handleDeeplinkUri:(id)arg1 viewController:(id)arg2 userSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_handleAppInstallForAppId:(id)arg1 feedItem:(id)arg2 viewController:(id)arg3 destinationURL:(id)arg4 userSession:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_handleClickToDirectForFeedItem:(id)arg1 viewController:(id)arg2;
- (_Bool)_handleProfileVisitForFeedItem:(id)arg1 feedItemTracker:(id)arg2 context:(unsigned long long)arg3 directResponseInfo:(id)arg4 mediaPosition:(long long)arg5 pageCellState:(id)arg6 userId:(id)arg7 userSession:(id)arg8 viewController:(id)arg9;
- (_Bool)_handleLeadAdForFeedItem:(id)arg1 feedItemTracker:(id)arg2 directResponseInfo:(id)arg3 viewController:(id)arg4 pageCellState:(id)arg5 mediaPosition:(long long)arg6 userSession:(id)arg7 completion:(CDUnknownBlockType)arg8 module:(id)arg9 context:(unsigned long long)arg10;
- (_Bool)_handlePhoneNumberForURI:(id)arg1 showCallConfirmation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_handleWebViewForLink:(id)arg1 feedItem:(id)arg2 feedItemTracker:(id)arg3 directResponseInfo:(id)arg4 module:(id)arg5 pageCellState:(id)arg6 userSession:(id)arg7 context:(unsigned long long)arg8 viewController:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (id)handleFeedItem:(id)arg1 feedItemTracker:(id)arg2 directResponseInfo:(id)arg3 viewController:(id)arg4 pageCellState:(id)arg5 mediaPosition:(long long)arg6 userSession:(id)arg7 context:(unsigned long long)arg8 module:(id)arg9 showCallConfirmation:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;
- (id)initWithLoggingDelegate:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


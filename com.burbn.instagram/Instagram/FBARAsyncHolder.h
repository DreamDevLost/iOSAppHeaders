//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBARAsyncNavigationDelegate, FBARScriptMessageHandler, NSObject<OS_dispatch_group>, WKUserContentController, WKWebView;

@interface FBARAsyncHolder : NSObject
{
    FBARAsyncNavigationDelegate *_navigationDelegate;
    WKUserContentController *_userContentController;
    WKWebView *_webView;
    FBARScriptMessageHandler *_messageHandler;
}

@property(readonly, nonatomic) FBARScriptMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *initialNavigationDispatchGroup;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)dealloc;
- (id)init;

@end


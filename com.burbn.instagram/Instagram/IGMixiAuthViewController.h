//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "FBWebViewDelegate.h"

@class IGUserSession, NSString, UIView<FBWebView>;

@interface IGMixiAuthViewController : IGViewController <FBWebViewDelegate>
{
    IGUserSession *_userSession;
    UIView<FBWebView> *_webView;
}

@property(retain, nonatomic) UIView<FBWebView> *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5;
- (void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2;
- (id)_codeFromURL:(id)arg1;
- (_Bool)_errorExistsInURL:(id)arg1;
- (_Bool)_stringContainsCallbackURL:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


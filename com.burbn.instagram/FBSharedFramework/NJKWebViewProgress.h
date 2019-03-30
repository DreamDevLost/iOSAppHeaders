//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL;

@interface NJKWebViewProgress : NSObject <UIWebViewDelegate>
{
    unsigned long long _loadingCount;
    unsigned long long _maxLoadCount;
    _Bool _interactive;
    id <NJKWebViewProgressDelegate> _progressDelegate;
    id <UIWebViewDelegate> _webViewProxyDelegate;
    double _progress;
    NSURL *_currentURL;
}

@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) id <UIWebViewDelegate> webViewProxyDelegate; // @synthesize webViewProxyDelegate=_webViewProxyDelegate;
@property(nonatomic) id <NJKWebViewProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)webViewDidFinishOrFailLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)reset;
- (void)setProgress:(double)arg1;
- (void)completeProgress;
- (void)incrementProgress;
- (void)startProgress;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


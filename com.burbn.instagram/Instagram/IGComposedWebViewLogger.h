//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUnifiedWebViewControllerWebViewLoggingDelegate.h"

@class NSArray;

@interface IGComposedWebViewLogger : NSObject <IGUnifiedWebViewControllerWebViewLoggingDelegate>
{
    NSArray *_loggers;
}

@property(readonly, nonatomic) NSArray *loggers; // @synthesize loggers=_loggers;
- (void).cxx_destruct;
- (void)webViewDidGoForward:(id)arg1;
- (void)webViewDidGoBack:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 willStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)init;

@end

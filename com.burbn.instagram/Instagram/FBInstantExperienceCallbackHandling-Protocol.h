//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@protocol FBInstantExperienceCallbackHandling <NSObject>
- (void)invokeJavaScriptCallbackWithError:(unsigned long long)arg1 errorMessage:(NSString *)arg2 messageName:(NSString *)arg3 messageParams:(NSDictionary *)arg4 startWebsiteURL:(NSURL *)arg5 webView:(id <FBWebView>)arg6;
- (void)invokeJavaScriptCallbackWithResult:(_Bool)arg1 returnParams:(NSDictionary *)arg2 messageName:(NSString *)arg3 messageParams:(NSDictionary *)arg4 startWebsiteURL:(NSURL *)arg5 webView:(id <FBWebView>)arg6;
@end


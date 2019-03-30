//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBScriptMessageHandlerBase.h"

@class FBBusinessExtensionRequestAutoFillHandlerConfig, NSString, NSURL;

@interface FBBusinessExtensionRequestAutoFillHandler : FBScriptMessageHandlerBase
{
    id <FBInstantExperienceDelegate> _delegate;
    FBBusinessExtensionRequestAutoFillHandlerConfig *_config;
    NSURL *_websiteURL;
    NSString *_messageName;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 extra:(id)arg2;
- (void)_hideAutoFillBanner;
- (void)_showAutofillBannerWithAutofillGroups:(id)arg1 webView:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (id)initWithDelegate:(id)arg1 config:(id)arg2;

@end


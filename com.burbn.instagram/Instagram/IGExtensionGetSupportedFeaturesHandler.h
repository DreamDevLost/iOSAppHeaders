//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBScriptMessageHandlerBase.h"

@interface IGExtensionGetSupportedFeaturesHandler : FBScriptMessageHandlerBase
{
    id <FBInstantExperienceDelegate> _delegate;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
- (id)_supportedFeatures;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireHttps;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (id)initWithDelegate:(id)arg1;

@end


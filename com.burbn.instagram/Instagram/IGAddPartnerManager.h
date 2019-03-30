//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession;

@interface IGAddPartnerManager : NSObject
{
    IGUserSession *_userSession;
}

+ (id)_buildBrandedContentTagsDictionary:(id)arg1 removedUsers:(id)arg2;
+ (id)_builderForEditMedia:(id)arg1;
- (void).cxx_destruct;
- (void)_sendAPIRequest:(id)arg1 feedItem:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)sendReplaceSponsorPartnerToStoryRequest:(id)arg1 previousUser:(id)arg2 newUser:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)sendRemoveSponsorPartnerToStoryRequest:(id)arg1 user:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)sendAddSponsorPartnerToStoryRequest:(id)arg1 user:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;

@end


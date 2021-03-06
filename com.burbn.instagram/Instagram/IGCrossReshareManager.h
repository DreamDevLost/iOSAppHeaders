//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGUserSession, NSMutableDictionary, NSString;

@interface IGCrossReshareManager : NSObject <IGUserSessionObject>
{
    NSMutableDictionary *_recipientProviders;
    struct recursive_mutex _mutex;
    IGUserSession *_userSession;
    NSMutableDictionary *_networks;
    NSMutableDictionary *_recipientDataSources;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_recipientDataSourceForUser:(id)arg1;
- (id)_networkerForUserPK:(id)arg1;
- (void)sendReshareWithSender:(id)arg1 recipients:(id)arg2 text:(id)arg3 post:(id)arg4;
- (void)searchRecipientsWithText:(id)arg1 user:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)checkMediaAccessibilityForMediaId:(id)arg1 userPK:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)recipientProviderWithUser:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


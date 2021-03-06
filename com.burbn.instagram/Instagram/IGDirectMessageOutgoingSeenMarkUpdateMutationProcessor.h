//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestProcessing.h"

@class IGDirectCache, IGDirectMessageMark, IGDirectMutationNetworker, NSString;

@interface IGDirectMessageOutgoingSeenMarkUpdateMutationProcessor : NSObject <IGDirectMutationRequestProcessing>
{
    IGDirectMessageMark *_messageMark;
    IGDirectCache *_directCache;
    IGDirectMutationNetworker *_networker;
    NSString *_currentUserId;
    id <IGExperimentSetProviding> _experimentProvider;
}

- (void).cxx_destruct;
- (void)_incrementSeenCountForCurrentUser;
- (void)_applyInitialOptimisticStateIfNecessary;
- (_Bool)_shouldApplyOptimisticStateViaProcessor;
- (void)handleMutationStateChange:(id)arg1;
- (void)executeWithResultHandler:(id)arg1 accessoryPackage:(id)arg2;
- (id)initWithMessageMark:(id)arg1 directCache:(id)arg2 networker:(id)arg3 currentUserId:(id)arg4 experimentProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


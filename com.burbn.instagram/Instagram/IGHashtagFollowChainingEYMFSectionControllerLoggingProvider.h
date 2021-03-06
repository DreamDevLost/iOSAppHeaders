//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDiscoveryEYMFSectionControllerLoggingProvider.h"

@class IGHashtagModel, IGUserSession, NSString;

@interface IGHashtagFollowChainingEYMFSectionControllerLoggingProvider : NSObject <IGDiscoveryEYMFSectionControllerLoggingProvider>
{
    IGHashtagModel *_hashtagModel;
    long long _hashtagFeedType;
    IGUserSession *_userSession;
    NSString *_module;
}

- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsExtraForNavigationEvent;
- (id)analyticsModule;
- (id)followControllerContextStringForSuggestedEntityInfo:(id)arg1;
- (id)initWithHashtagModel:(id)arg1 hashtagFeedType:(long long)arg2 userSession:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDiscoveryAccountsEYMFBaseSectionControllerLoggingProvider.h"

@class IGHashtagModel, IGUserSession;

@interface IGHashtagAccountsEYMFSectionControllerLoggingProvider : IGDiscoveryAccountsEYMFBaseSectionControllerLoggingProvider
{
    IGHashtagModel *_hashtagModel;
    long long _hashtagFeedType;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)initWithHashtagModel:(id)arg1 hashtagFeedType:(long long)arg2 userSession:(id)arg3 module:(id)arg4;

@end


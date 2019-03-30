//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGUserListNetworkDataSourceRequestConfig : NSObject
{
    _Bool _rankByMutualFollowers;
    _Bool _shouldGenerateRankToken;
    unsigned long long _httpMethod;
    NSString *_fetchPath;
    NSString *_targetID;
    NSString *_forcedUserID;
    NSString *_module;
    NSString *_allUsersKey;
    NSString *_moreUsersAvailableKey;
}

+ (id)defaultConfigWithFetchPath:(id)arg1;
@property(readonly, nonatomic) _Bool shouldGenerateRankToken; // @synthesize shouldGenerateRankToken=_shouldGenerateRankToken;
@property(readonly, copy, nonatomic) NSString *moreUsersAvailableKey; // @synthesize moreUsersAvailableKey=_moreUsersAvailableKey;
@property(readonly, copy, nonatomic) NSString *allUsersKey; // @synthesize allUsersKey=_allUsersKey;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSString *forcedUserID; // @synthesize forcedUserID=_forcedUserID;
@property(readonly, nonatomic) _Bool rankByMutualFollowers; // @synthesize rankByMutualFollowers=_rankByMutualFollowers;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(readonly, copy, nonatomic) NSString *fetchPath; // @synthesize fetchPath=_fetchPath;
@property(readonly, nonatomic) unsigned long long httpMethod; // @synthesize httpMethod=_httpMethod;
- (void).cxx_destruct;
- (id)initWithHTTPMethod:(unsigned long long)arg1 fetchPath:(id)arg2 targetID:(id)arg3 rankByMutualFollowers:(_Bool)arg4 forcedUserID:(id)arg5 module:(id)arg6 allUsersKey:(id)arg7 moreUsersAvailableKey:(id)arg8 shouldGenerateRankToken:(_Bool)arg9;

@end


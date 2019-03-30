//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGExploreNetworkerRequestConfig, NSError, NSString;

@interface IGExploreTopicalFeedNetworkFetchState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGExploreNetworkerRequestConfig *_reloading_config;
    IGExploreNetworkerRequestConfig *_loadingMore_config;
    NSError *_failed_error;
    NSString *_failed_errorMessage;
}

+ (id)reloadingWithConfig:(id)arg1;
+ (id)loadingMoreWithConfig:(id)arg1;
+ (id)idle;
+ (id)failedWithError:(id)arg1 errorMessage:(id)arg2;
- (void).cxx_destruct;
- (void)matchIdle:(CDUnknownBlockType)arg1 reloading:(CDUnknownBlockType)arg2 loadingMore:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanIdle:(CDUnknownBlockType)arg1 reloading:(CDUnknownBlockType)arg2 loadingMore:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;

@end


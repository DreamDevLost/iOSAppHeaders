//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGRequestPolicyBuilder : NSObject
{
    double _timeoutInterval;
    unsigned long long _cookieManagement;
    unsigned long long _requestType;
    unsigned long long _behavior;
    unsigned long long _retryPolicy;
    CDStruct_e8b93ac9 _privilegeConfiguraiton;
    id <IGCachePolicy> _cachePolicy;
    struct NSString *_offProcessHandlerKey;
    NSString *_surface;
}

+ (id)defaultFNFPlayerPolicyBuilderWithBehavior:(unsigned long long)arg1 surface:(id)arg2;
+ (id)defaultVideoPolicyBuilderWithBehavior:(unsigned long long)arg1 surface:(id)arg2;
+ (id)defaultImageMediaPolicyBuilderWithBehavior:(unsigned long long)arg1 surface:(id)arg2;
+ (id)defaultUploadPolicyBuilderWithBehavior:(unsigned long long)arg1 surface:(id)arg2;
- (void).cxx_destruct;
- (id)policy;
- (id)setSurface:(id)arg1;
- (id)setOffProcessHandlerKey:(struct NSString *)arg1;
- (id)setCachePolicy:(id)arg1;
- (id)setRetryPolicy:(unsigned long long)arg1;
- (id)setBehavior:(unsigned long long)arg1;
- (id)setRequestType:(unsigned long long)arg1;
- (id)setTimeoutInterval:(double)arg1;
- (id)setCookieManagement:(unsigned long long)arg1;
- (id)_initWithCookieManagement:(unsigned long long)arg1 timeoutInterval:(double)arg2 requestType:(unsigned long long)arg3 behavior:(unsigned long long)arg4 retryPolicy:(unsigned long long)arg5 privilegeConfiguration:(CDStruct_e8b93ac9)arg6 cachePolicy:(id)arg7 offProcessKey:(struct NSString *)arg8 surface:(id)arg9;
- (id)initByCopyingContentsOfPolicy:(id)arg1;
- (id)initWithRequestType:(unsigned long long)arg1 requestBehavior:(unsigned long long)arg2 surface:(id)arg3;

@end


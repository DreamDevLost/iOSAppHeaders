//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAREffectAnalyticsInfo, FBARServiceHostConfiguration, NSString;

@interface FBARServiceHostEffect : NSObject
{
    FBARServiceHostConfiguration *_serviceHostConfiguration;
    NSString *_assetsPath;
    FBAREffectAnalyticsInfo *_analyticsInfo;
    shared_ptr_8f3f58d1 _manifest;
    shared_ptr_602211e3 _SDKVersion;
    shared_ptr_f86b0e66 _effectAttribution;
}

+ (id)newWithServiceHostConfiguration:(id)arg1 assetsPath:(id)arg2 manifest:(shared_ptr_8f3f58d1)arg3 SDKVersion:(shared_ptr_602211e3)arg4 analyticsInfo:(id)arg5 effectAttribution:(shared_ptr_f86b0e66)arg6;
@property(readonly, nonatomic) FBAREffectAnalyticsInfo *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(readonly, nonatomic) shared_ptr_f86b0e66 effectAttribution; // @synthesize effectAttribution=_effectAttribution;
@property(readonly, nonatomic) shared_ptr_602211e3 SDKVersion; // @synthesize SDKVersion=_SDKVersion;
@property(readonly, nonatomic) shared_ptr_8f3f58d1 manifest; // @synthesize manifest=_manifest;
@property(readonly, copy, nonatomic) NSString *assetsPath; // @synthesize assetsPath=_assetsPath;
@property(readonly, nonatomic) FBARServiceHostConfiguration *serviceHostConfiguration; // @synthesize serviceHostConfiguration=_serviceHostConfiguration;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithServiceHostConfiguration:(id)arg1 assetsPath:(id)arg2 manifest:(shared_ptr_8f3f58d1)arg3 SDKVersion:(shared_ptr_602211e3)arg4 analyticsInfo:(id)arg5 effectAttribution:(shared_ptr_f86b0e66)arg6;

@end

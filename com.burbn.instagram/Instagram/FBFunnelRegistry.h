//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FBFunnelRegistry : NSObject
{
    NSMutableDictionary *_funnelConfigs;
}

+ (id)sharedRegistry;
@property(copy, nonatomic) NSMutableDictionary *funnelConfigs; // @synthesize funnelConfigs=_funnelConfigs;
- (void).cxx_destruct;
- (id)getFunnelConfigs;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(_Bool)arg4 reuseFunnelIfExists:(_Bool)arg5 timeoutSinceStart:(double)arg6 version:(unsigned long long)arg7 shouldEnableFunnelLevelDataLoss:(_Bool)arg8 shouldEnableContinuousFlushing:(_Bool)arg9;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(_Bool)arg4 reuseFunnelIfExists:(_Bool)arg5 timeoutSinceStart:(double)arg6 version:(unsigned long long)arg7;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(_Bool)arg4 reuseFunnelIfExists:(_Bool)arg5 timeoutSinceStart:(double)arg6;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(_Bool)arg4 reuseFunnelIfExists:(_Bool)arg5;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 reuseFunnelIfExists:(_Bool)arg4;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 timeoutSinceStart:(double)arg4;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(_Bool)arg4;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3 version:(unsigned long long)arg4;
- (void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(_Bool)arg2 timeout:(double)arg3;
- (id)configForFunnel:(id)arg1;

@end


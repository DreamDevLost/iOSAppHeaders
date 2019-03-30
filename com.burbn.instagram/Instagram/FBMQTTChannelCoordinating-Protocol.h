//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMQTTInterface.h"

@class FBMQTTChannelEndpointCapabilities, FBMQTTClientConfiguration, FBMQTTConfigurations, FBMQTTConnectionConfiguration, FBMQTTDebugInfo, NSDictionary, NSString;

@protocol FBMQTTChannelCoordinating <FBMQTTInterface>
- (void)setInBackground:(_Bool)arg1;
- (void)sendMQTTKeepAlive;
- (void)credentialsDidBecomeAvailable;
- (void)resetConnectionConfig:(FBMQTTConnectionConfiguration *)arg1;
- (void)updateRegionPreference:(NSString *)arg1;
- (void)stop;
- (void)start;
- (void)configureWithClientConfig:(FBMQTTClientConfiguration *)arg1 customConnectionConfiguration:(FBMQTTConnectionConfiguration *)arg2 clientCapabilities:(unsigned long long)arg3 endpointCapabilities:(unsigned long long)arg4 appSpecificInfo:(NSDictionary *)arg5 showOnLineOnForegroundBlock:(_Bool (^)(void))arg6 credentialsAvailableBlock:(_Bool (^)(void))arg7 credentialsFetcherBlock:(FBMQTTCredentials * (^)(void))arg8 userAgentFormatterBlock:(NSString * (^)(void))arg9 analyticsLogger:(id <FBMQTTAnalyticsLogger>)arg10;
- (FBMQTTDebugInfo *)debugInfo;
- (FBMQTTChannelEndpointCapabilities *)endpointCapabilities;
- (FBMQTTConnectionConfiguration *)connectionConfig;
- (FBMQTTConfigurations *)config;
- (FBMQTTClientConfiguration *)clientConfig;
- (NSString *)mqttSessionIdForAnalytics;
- (long long)networkStatus;
- (unsigned long long)clientCapabilities;
@end


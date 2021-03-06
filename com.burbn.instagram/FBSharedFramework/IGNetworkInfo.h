//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGNetworkInfo : NSObject
{
    long long _networkReachabilityStatus;
    NSString *_radioType;
}

@property(readonly, nonatomic) NSString *radioType; // @synthesize radioType=_radioType;
@property(readonly, nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
- (void).cxx_destruct;
- (id)_subNetworkType;
- (id)networkTypeString;
- (id)connectionTypeString;
@property(readonly, nonatomic) unsigned long long radioTypeCategory;
- (_Bool)_networkReachabilityStatusNotYetKnown;
- (_Bool)isOnWifiNetwork;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachable;
- (id)initWithNetworkReachabilityStatus:(long long)arg1 radioType:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol IGFeatureRequesting <NSObject>
- (void)checkConsistencyForServerConfigs:(NSDictionary *)arg1 uniqueIdentifier:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)requestFeaturesWithNames:(NSArray *)arg1 uniqueIdentifier:(NSString *)arg2 success:(void (^)(NSDictionary *))arg3 failure:(void (^)(NSError *))arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol IGConfigurationRequesting <NSObject>
- (void)requestConfigurations:(NSArray *)arg1 withUniqueIdentifier:(NSString *)arg2 completion:(void (^)(NSDictionary *))arg3 failure:(void (^)(NSDictionary *, NSError *))arg4;
@end


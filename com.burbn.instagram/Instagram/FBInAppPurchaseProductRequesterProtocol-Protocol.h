//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>;

@protocol FBInAppPurchaseProductRequesterProtocol <NSObject>
- (NSArray *)generateExternalProductsWithModel:(id)arg1;
- (id)fetchProductsWithUpdateCallback:(void (^)(id))arg1 failureCallback:(void (^)(NSError *))arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end


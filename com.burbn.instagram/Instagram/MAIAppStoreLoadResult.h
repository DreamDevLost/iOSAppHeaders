//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class MAISKStoreProductViewController, NSError;

@interface MAIAppStoreLoadResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    MAISKStoreProductViewController *_success_storeProductViewController;
    NSError *_failure_error;
    MAISKStoreProductViewController *_failure_storeProductViewController;
}

+ (id)successWithStoreProductViewController:(id)arg1;
+ (id)failureWithError:(id)arg1 storeProductViewController:(id)arg2;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end


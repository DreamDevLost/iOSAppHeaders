//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class MAISKStoreProductViewController, NSDictionary, NSString;

@interface MAIAppStoreCacheInstance : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_singleCache_cacheIdentifier;
    MAISKStoreProductViewController *_singleCache_cachedStoreProductViewController;
    NSDictionary *_multiCache_cacheStore;
}

+ (id)singleCacheWithCacheIdentifier:(id)arg1 cachedStoreProductViewController:(id)arg2;
+ (id)multiCacheWithCacheStore:(id)arg1;
- (void).cxx_destruct;
- (void)matchSingleCache:(CDUnknownBlockType)arg1 multiCache:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBBaseKeychainStoreDelegate.h"

@class NSString;

@interface FBKeychainItemController : NSObject <FBBaseKeychainStoreDelegate>
{
    NSString *_serviceID;
    NSString *_userID;
    NSString *_accessGroup;
}

+ (id)keychainWithService:(id)arg1;
+ (id)mainAppSessionKeychain;
+ (id)keychainWithService:(id)arg1 appBundle:(id)arg2;
+ (id)sessionKeychainWithAppBundle:(id)arg1;
@property(readonly, copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
- (void).cxx_destruct;
- (_Bool)removeItem:(id *)arg1;
- (_Bool)updateItem:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)loadItem:(id *)arg1;
- (_Bool)saveItem:(id)arg1 error:(id *)arg2;
- (_Bool)createItem:(id)arg1 error:(id *)arg2;
- (void)removeItemWithTargetQueue:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)updateItem:(CDUnknownBlockType)arg1 withTargetQueue:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)saveItem:(id)arg1 withTargetQueue:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)loadItemWithTargetQueue:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)createItem:(id)arg1 withTargetQueue:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)dataForKeychainResult:(id)arg1;
- (id)keychainDictionaryForData:(id)arg1;
- (_Bool)supportsServicesWithMultipleAccounts;
- (_Bool)limitToOneResult;
- (id)initWithService:(id)arg1 appBundle:(id)arg2;
- (id)initWithService:(id)arg1 appBundle:(id)arg2 userID:(id)arg3;
- (id)initWithServiceID:(id)arg1 accessGroup:(id)arg2;
- (id)initWithServiceID:(id)arg1 accessGroup:(id)arg2 userID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


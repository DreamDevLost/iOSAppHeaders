//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARPersistenceServiceDelegateProvider.h"

@class NSString;

@interface FBARLocalPersistenceDelegateProvider : NSObject <FBARPersistenceServiceDelegateProvider>
{
    id <FBKeyValueDataStore> _dataStore;
    NSString *_effectIdentifier;
    shared_ptr_5e1d7b9d _cxxDelegate;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithDataStore:(id)arg1 effectIdentifier:(id)arg2;
@property(readonly, nonatomic) NSString *effectIdentifier; // @synthesize effectIdentifier=_effectIdentifier;
@property(readonly, nonatomic) id <FBKeyValueDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_5e1d7b9d cxxDelegate; // @synthesize cxxDelegate=_cxxDelegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearData;
- (id)initWithDataStore:(id)arg1 effectIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


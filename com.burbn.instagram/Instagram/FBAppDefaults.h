//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInvalidating.h"
#import "FBKeyValueDataStore.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface FBAppDefaults : NSObject <FBKeyValueDataStore, FBInvalidating>
{
    NSObject<OS_dispatch_source> *_timer;
    _Bool _invalidated;
    _Bool _protectionDisabled;
}

+ (id)appDefaults;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)isValid;
- (unsigned long long)count;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *debugDescription;
- (void)synchronize;
- (void)_disableDataProtectionIfNeeded;
- (void)clear;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)_scheduleSynchronize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


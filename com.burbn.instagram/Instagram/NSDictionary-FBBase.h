//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (FBBase)
+ (id)dictionaryByMergingDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)deepImmutableCopy;
- (id)fb_dictionaryWithKeysAndValuesSwapped;
- (id)dictionaryByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)fb_objectForKeys:(id)arg1;
- (long long)fb_integerForPointerKey:(void *)arg1;
- (id)objectForPointerKey:(void *)arg1;
- (long long)fb_integerForKey:(id)arg1;
- (id)objectForIntegerKey:(unsigned long long)arg1;
@end

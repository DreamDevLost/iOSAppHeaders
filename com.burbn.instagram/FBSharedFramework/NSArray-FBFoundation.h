//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSSet;

@interface NSArray (FBFoundation)
- (id)deepImmutableCopy;
- (id)fb_indexByValueMap;
- (id)subarrayToIndex:(unsigned long long)arg1;
- (id)subarrayFromIndex:(unsigned long long)arg1;
- (_Bool)allObjectsPassTest:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)newArrayWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)newDictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlockWithKey:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlockWithKey:(CDUnknownBlockType)arg2;
- (id)newDictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)newDictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryByGroupingWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryByGroupingWithKey:(id)arg1;
- (id)dictionaryWithKeyPath:(id)arg1;
- (id)dictionaryWithKey:(id)arg1;
- (id)indexesOfObjectsIdenticalTo:(id)arg1;
- (id)indexesOfObjects:(id)arg1;
- (id)arrayByPerformingInRange:(struct _NSRange)arg1 block:(CDUnknownBlockType)arg2;
- (id)arrayByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingIndexedBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingSelector:(SEL)arg1;
- (id)countedSetByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)orderedSetByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)orderedSetByPerformingSelector:(SEL)arg1;
- (id)setByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)setByPerformingSelector:(SEL)arg1;
@property(readonly, nonatomic) NSSet *set;
- (unsigned long long)countObjectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)firstObjectPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id onlyObject;
- (id)arrayByRemovingObjectAtIndex:(unsigned long long)arg1;
- (id)arrayByRemovingObject:(id)arg1;
- (id)arrayByInsertingObject:(id)arg1 atIndex:(unsigned long long)arg2;
@end


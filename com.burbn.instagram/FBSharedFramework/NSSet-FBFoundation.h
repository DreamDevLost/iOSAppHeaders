//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSet.h"

@interface NSSet (FBFoundation)
- (id)deepImmutableCopy;
@property(readonly, nonatomic) id onlyObject;
- (id)firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)allObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)dictionaryByGroupingWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlockWithKey:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyPath:(id)arg1;
- (id)dictionaryWithKey:(id)arg1;
- (id)arrayByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingSelector:(SEL)arg1;
- (id)setByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)setByPerformingSelector:(SEL)arg1;
@end


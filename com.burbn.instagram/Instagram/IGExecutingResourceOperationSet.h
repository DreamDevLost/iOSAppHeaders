//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableSet;

@interface IGExecutingResourceOperationSet : NSObject <NSFastEnumeration>
{
    long long _capacity;
    NSMutableSet *_operations;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)has:(id)arg1;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (_Bool)hasCapacity;
- (id)initWithCapacity:(long long)arg1;

@end


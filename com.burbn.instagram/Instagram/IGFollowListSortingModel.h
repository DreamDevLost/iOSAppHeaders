//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@interface IGFollowListSortingModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    unsigned long long _sortingOrder;
}

@property(readonly, nonatomic) unsigned long long sortingOrder; // @synthesize sortingOrder=_sortingOrder;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithSortingOrder:(unsigned long long)arg1;

@end


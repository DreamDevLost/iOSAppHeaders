//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@interface IGDirectPendingInboxThreadSortButtonViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    long long _selectedSortType;
}

@property(readonly, nonatomic) long long selectedSortType; // @synthesize selectedSortType=_selectedSortType;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithSelectedSortType:(long long)arg1;

@end


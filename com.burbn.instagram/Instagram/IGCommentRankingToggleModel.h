//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString;

@interface IGCommentRankingToggleModel : NSObject <IGListDiffable>
{
    NSString *_sortOrderString;
}

@property(readonly, copy, nonatomic) NSString *sortOrderString; // @synthesize sortOrderString=_sortOrderString;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithSortOrderString:(id)arg1;

@end


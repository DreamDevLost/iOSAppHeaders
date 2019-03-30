//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray;

@interface IGFollowAllHeaderItem : NSObject <IGListDiffable>
{
    long long _followAllType;
    NSArray *_userIDs;
}

@property(readonly, copy, nonatomic) NSArray *userIDs; // @synthesize userIDs=_userIDs;
@property(readonly, nonatomic) long long followAllType; // @synthesize followAllType=_followAllType;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUserIDs:(id)arg1 followAllType:(long long)arg2;

@end

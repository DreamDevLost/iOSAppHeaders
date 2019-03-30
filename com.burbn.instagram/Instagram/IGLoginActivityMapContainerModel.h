//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface IGLoginActivityMapContainerModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSArray *_loginActivityInfoModels;
}

@property(readonly, copy, nonatomic) NSArray *loginActivityInfoModels; // @synthesize loginActivityInfoModels=_loginActivityInfoModels;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithLoginActivityInfoModels:(id)arg1;

@end

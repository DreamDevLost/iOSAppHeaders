//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"

@class NSString;

@interface IGHScrollActionCardModel : NSObject <IGListDiffable, NSCoding>
{
    long long _position;
    NSString *_socialContext;
    NSString *_title;
    long long _aymfCellType;
}

@property(readonly, nonatomic) long long aymfCellType; // @synthesize aymfCellType=_aymfCellType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *socialContext; // @synthesize socialContext=_socialContext;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosition:(long long)arg1 socialContext:(id)arg2 title:(id)arg3 aymfCellType:(long long)arg4;

@end

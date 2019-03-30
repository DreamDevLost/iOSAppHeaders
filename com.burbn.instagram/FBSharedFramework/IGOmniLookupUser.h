//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGOmniLookupUser : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_pk;
    NSString *_profilePic;
    NSString *_username;
    NSString *_fullName;
}

@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *profilePic; // @synthesize profilePic=_profilePic;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 profilePic:(id)arg2 username:(id)arg3 fullName:(id)arg4;

@end


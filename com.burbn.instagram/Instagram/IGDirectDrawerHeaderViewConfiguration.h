//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGDirectDrawerHeaderViewConfiguration : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_profileImages;
    NSString *_primaryText;
    NSString *_secondaryText;
}

+ (id)configurationForThread:(id)arg1 module:(id)arg2 currentUserPk:(id)arg3;
+ (id)configurationForSingleUser:(id)arg1 module:(id)arg2;
@property(readonly, copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, copy, nonatomic) NSArray *profileImages; // @synthesize profileImages=_profileImages;
- (void).cxx_destruct;
- (id)initWithProfileImages:(id)arg1 primaryText:(id)arg2 secondaryText:(id)arg3;

@end


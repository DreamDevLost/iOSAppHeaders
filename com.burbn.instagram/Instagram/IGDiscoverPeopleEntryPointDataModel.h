//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGDiscoverPeopleEntryPointDataModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_buttonText;
}

@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 buttonText:(id)arg3;

@end


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

@interface IGInterestProfileVisibilityCellViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _shouldShowCategoryAndContactInfoInitialValue;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, nonatomic) _Bool shouldShowCategoryAndContactInfoInitialValue; // @synthesize shouldShowCategoryAndContactInfoInitialValue=_shouldShowCategoryAndContactInfoInitialValue;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 shouldShowCategoryAndContactInfoInitialValue:(_Bool)arg3;

@end

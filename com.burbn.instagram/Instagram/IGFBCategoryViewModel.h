//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGEmbeddedListItemViewModel.h"

@class IGBusinessConversionFacebookPageCategory, NSString;

@interface IGFBCategoryViewModel : NSObject <IGEmbeddedListItemViewModel>
{
    IGBusinessConversionFacebookPageCategory *_category;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) NSObject *backingModel;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithFBCategory:(id)arg1;

@end

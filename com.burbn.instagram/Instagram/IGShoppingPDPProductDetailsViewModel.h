//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGProductItem, NSString;

@interface IGShoppingPDPProductDetailsViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _displayShareButton;
    _Bool _hasSaved;
    NSString *_identifier;
    IGProductItem *_productItem;
}

@property(readonly, nonatomic) _Bool hasSaved; // @synthesize hasSaved=_hasSaved;
@property(readonly, nonatomic) _Bool displayShareButton; // @synthesize displayShareButton=_displayShareButton;
@property(readonly, copy, nonatomic) IGProductItem *productItem; // @synthesize productItem=_productItem;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 productItem:(id)arg2 displayShareButton:(_Bool)arg3 hasSaved:(_Bool)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGShoppingPDPLinkDestination, NSString;

@interface IGShoppingPDPLinkViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_productId;
    IGShoppingPDPLinkDestination *_destination;
    NSString *_impressionEventName;
    NSString *_analyticsIdentifer;
}

@property(readonly, copy, nonatomic) NSString *analyticsIdentifer; // @synthesize analyticsIdentifer=_analyticsIdentifer;
@property(readonly, copy, nonatomic) NSString *impressionEventName; // @synthesize impressionEventName=_impressionEventName;
@property(readonly, copy, nonatomic) IGShoppingPDPLinkDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 productId:(id)arg3 destination:(id)arg4 impressionEventName:(id)arg5 analyticsIdentifer:(id)arg6;

@end


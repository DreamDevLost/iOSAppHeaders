//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGFeedItem, NSArray, NSString;

@interface IGShoppingPDPProductCarouselViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_identifier;
    NSArray *_productItems;
    long long _collectionType;
    IGFeedItem *_feedItem;
    NSString *_impressionEventName;
}

@property(readonly, copy, nonatomic) NSString *impressionEventName; // @synthesize impressionEventName=_impressionEventName;
@property(readonly, copy, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, copy, nonatomic) NSArray *productItems; // @synthesize productItems=_productItems;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 productItems:(id)arg2 collectionType:(long long)arg3 feedItem:(id)arg4 impressionEventName:(id)arg5;

@end


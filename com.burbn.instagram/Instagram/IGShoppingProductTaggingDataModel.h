//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGShoppingProductFeedDataModel, IGShoppingProductSourceModel, NSString;

@interface IGShoppingProductTaggingDataModel : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    IGShoppingProductFeedDataModel *_productFeed;
    IGShoppingProductSourceModel *_productSource;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) IGShoppingProductSourceModel *productSource; // @synthesize productSource=_productSource;
@property(readonly, copy, nonatomic) IGShoppingProductFeedDataModel *productFeed; // @synthesize productFeed=_productFeed;
- (void).cxx_destruct;
- (id)initWithProductFeed:(id)arg1 productSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFBUserTagGroup, IGFeedItem, IGLocation, IGProductItemTagGroup, IGUsertagGroup, NSArray, NSMutableDictionary, NSString;

@interface IGEditedPost : NSObject
{
    IGLocation *_location;
    NSString *_caption;
    IGUsertagGroup *_usertags;
    NSMutableDictionary *_postUsertags;
    IGFBUserTagGroup *_fbUserTags;
    NSMutableDictionary *_postFBUserTags;
    IGProductItemTagGroup *_productItemTags;
    NSMutableDictionary *_postProductItemTags;
    NSArray *_sponsorPartnerTags;
    NSArray *_sponsorPartnersWithBoostPermission;
    IGFeedItem *_feedItem;
    NSMutableDictionary *_postAccessibilityCaptions;
}

@property(retain, nonatomic) NSMutableDictionary *postAccessibilityCaptions; // @synthesize postAccessibilityCaptions=_postAccessibilityCaptions;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) NSArray *sponsorPartnersWithBoostPermission; // @synthesize sponsorPartnersWithBoostPermission=_sponsorPartnersWithBoostPermission;
@property(retain, nonatomic) NSArray *sponsorPartnerTags; // @synthesize sponsorPartnerTags=_sponsorPartnerTags;
@property(retain, nonatomic) NSMutableDictionary *postProductItemTags; // @synthesize postProductItemTags=_postProductItemTags;
@property(retain, nonatomic) IGProductItemTagGroup *productItemTags; // @synthesize productItemTags=_productItemTags;
@property(retain, nonatomic) NSMutableDictionary *postFBUserTags; // @synthesize postFBUserTags=_postFBUserTags;
@property(retain, nonatomic) IGFBUserTagGroup *fbUserTags; // @synthesize fbUserTags=_fbUserTags;
@property(retain, nonatomic) NSMutableDictionary *postUsertags; // @synthesize postUsertags=_postUsertags;
@property(retain, nonatomic) IGUsertagGroup *usertags; // @synthesize usertags=_usertags;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)removeProductItemTag:(id)arg1;
- (void)addSponsorPartner:(id)arg1;
- (void)removeSponsorPartner:(id)arg1;
- (void)_updateSponsorPartnerTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTags:(id)arg3 localTags:(id)arg4;
- (void)_updateCarouselTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTagsDict:(id)arg3 localTagsDict:(id)arg4;
- (void)_updateProductTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTags:(id)arg3 localTags:(id)arg4;
- (void)_updateTagParameterForRequestBuilder:(id)arg1 parameterName:(id)arg2 feedTags:(id)arg3 localTags:(id)arg4;
- (void)addParametersToRequestBuilder:(id)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) _Bool hasProductTags;
- (id)pk;
- (_Bool)hasChanged;
- (_Bool)_hasChangedAccessibilityCaption;
- (_Bool)_hasChangedCarouselProductItemTags;
- (_Bool)_hasChangedCarouselUserTags;
- (_Bool)_hasChangedCarouselFBUserTags;
- (_Bool)_hasChangedPaidBCPermission;
- (_Bool)_hasChangedSponsorPartnerTags;
- (_Bool)_hasChangedProductItemTags;
- (_Bool)_hasChangedUsertags;
- (_Bool)_hasChangedFBUserTags;
- (_Bool)_hasChangedBrandedContentSponsorWithBoostPermission:(id)arg1 withEditedBoostPermission:(id)arg2;
- (_Bool)_hasChangedBrandedContentSponsorTags:(id)arg1 withEditedTags:(id)arg2;
- (_Bool)_hasChangedFeedItemTags:(id)arg1 withEditedTags:(id)arg2;
- (_Bool)_hasChangedLocation;
- (_Bool)_hasChangedCaption;
- (id)initWithFeedItem:(id)arg1;

@end


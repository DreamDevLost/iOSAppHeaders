//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGShoppingPDPCheckoutButtonSectionDataModel, IGShoppingPDPHeroCarouselSectionDataModel, IGShoppingPDPImageCarouselSectionDataModel, IGShoppingPDPLinkSectionDataModel, IGShoppingPDPMediaCollectionSectionDataModel, IGShoppingPDPMerchantSectionDataModel, IGShoppingPDPProductCollectionSectionDataModel, IGShoppingPDPProductDetailsSectionDataModel, IGShoppingPDPSectionMetadataModel, IGShoppingPDPShopSectionDataModel, IGShoppingPDPVariantSelectorSectionDataModel;

@interface IGShoppingPDPSectionDataModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGShoppingPDPHeroCarouselSectionDataModel *_heroCarousel_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_heroCarousel_metadata;
    IGShoppingPDPImageCarouselSectionDataModel *_imageCarousel_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_imageCarousel_metadata;
    IGShoppingPDPProductDetailsSectionDataModel *_productDetails_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_productDetails_metadata;
    IGShoppingPDPVariantSelectorSectionDataModel *_variantSelector_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_variantSelector_metadata;
    IGShoppingPDPCheckoutButtonSectionDataModel *_checkoutButton_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_checkoutButton_metadata;
    IGShoppingPDPMerchantSectionDataModel *_merchant_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_merchant_metadata;
    IGShoppingPDPShopSectionDataModel *_shop_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_shop_metadata;
    IGShoppingPDPLinkSectionDataModel *_link_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_link_metadata;
    IGShoppingPDPMediaCollectionSectionDataModel *_mediaCollection_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_mediaCollection_metadata;
    IGShoppingPDPProductCollectionSectionDataModel *_productCollection_sectionDataModel;
    IGShoppingPDPSectionMetadataModel *_productCollection_metadata;
}

+ (id)variantSelectorWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)shopWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)productDetailsWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)productCollectionWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)merchantWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)mediaCollectionWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)linkWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)imageCarouselWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)heroCarouselWithSectionDataModel:(id)arg1 metadata:(id)arg2;
+ (id)checkoutButtonWithSectionDataModel:(id)arg1 metadata:(id)arg2;
- (void).cxx_destruct;
- (void)matchHeroCarousel:(CDUnknownBlockType)arg1 imageCarousel:(CDUnknownBlockType)arg2 productDetails:(CDUnknownBlockType)arg3 variantSelector:(CDUnknownBlockType)arg4 checkoutButton:(CDUnknownBlockType)arg5 merchant:(CDUnknownBlockType)arg6 shop:(CDUnknownBlockType)arg7 link:(CDUnknownBlockType)arg8 mediaCollection:(CDUnknownBlockType)arg9 productCollection:(CDUnknownBlockType)arg10;
- (_Bool)matchBooleanHeroCarousel:(CDUnknownBlockType)arg1 imageCarousel:(CDUnknownBlockType)arg2 productDetails:(CDUnknownBlockType)arg3 variantSelector:(CDUnknownBlockType)arg4 checkoutButton:(CDUnknownBlockType)arg5 merchant:(CDUnknownBlockType)arg6 shop:(CDUnknownBlockType)arg7 link:(CDUnknownBlockType)arg8 mediaCollection:(CDUnknownBlockType)arg9 productCollection:(CDUnknownBlockType)arg10;
- (id)model;
- (id)metadata;

@end


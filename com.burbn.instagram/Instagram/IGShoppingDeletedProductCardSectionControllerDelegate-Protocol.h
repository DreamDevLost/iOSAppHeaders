//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGProductItem, IGShoppingDeletedProductCardSectionController, IGUser, NSString;

@protocol IGShoppingDeletedProductCardSectionControllerDelegate <NSObject>
- (void)deletedProductCardSectionController:(IGShoppingDeletedProductCardSectionController *)arg1 didSelectDeletedProductItem:(IGProductItem *)arg2 merchant:(IGUser *)arg3;
- (void)deletedProductCardSectionController:(IGShoppingDeletedProductCardSectionController *)arg1 didUnsaveDeletedProductItem:(IGProductItem *)arg2 merchantId:(NSString *)arg3;
@end


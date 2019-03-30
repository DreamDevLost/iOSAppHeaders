//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGProductItem, IGShoppingProductWithContextCardSectionController, IGShoppingProductWithContextViewModel;

@protocol IGShoppingProductWithContextCardSectionControllerDelegate <NSObject>
- (_Bool)productWithContextCardSectionController:(IGShoppingProductWithContextCardSectionController *)arg1 containsLastSavedProductItem:(IGProductItem *)arg2;
- (void)productWithContextCardSectionController:(IGShoppingProductWithContextCardSectionController *)arg1 willOpenContextMediaWithViewModel:(IGShoppingProductWithContextViewModel *)arg2;
- (void)productWithContextCardSectionController:(IGShoppingProductWithContextCardSectionController *)arg1 willNavigateToPDPForViewModel:(IGShoppingProductWithContextViewModel *)arg2;
- (void)productWithContextCardSectionController:(IGShoppingProductWithContextCardSectionController *)arg1 didUpdateProductItem:(IGProductItem *)arg2 withUpdatedSaveStatus:(_Bool)arg3;
@end

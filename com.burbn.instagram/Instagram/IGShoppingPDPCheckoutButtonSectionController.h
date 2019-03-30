//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGShoppingPDPCheckoutButtonCellDelegate.h"

@class IGShoppingConsumptionFeedItemLogger, IGShoppingPDPCheckoutButtonViewModel, IGUserSession, NSString;

@interface IGShoppingPDPCheckoutButtonSectionController : IGListSectionController <IGShoppingPDPCheckoutButtonCellDelegate>
{
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
    NSString *_entryPoint;
    IGShoppingPDPCheckoutButtonViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)shoppingCheckoutButtonCellWasTapped:(id)arg1;
- (void)_presentExternalCheckout;
- (void)_presentNativeCheckout;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 entryPoint:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGGestureHandler.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGShoppingCheckoutShippingAndReturnsModel, IGUserSession, NSString, UIActivityIndicatorView, UICollectionView;

@interface IGShoppingShippingAndReturnsViewController : IGViewController <IGCoreTextLinkHandler, IGGestureHandler, UICollectionViewDataSource, UICollectionViewDelegate>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    UIActivityIndicatorView *_activityIndicatorView;
    IGShoppingCheckoutShippingAndReturnsModel *_shippingAndReturnsInfo;
    NSString *_productId;
    NSString *_merchantId;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_fetchShippingAndReturnsInfo;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 title:(id)arg2 productId:(id)arg3 merchantId:(id)arg4;
- (id)initWithUserSession:(id)arg1 title:(id)arg2 shippingAndReturnsInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


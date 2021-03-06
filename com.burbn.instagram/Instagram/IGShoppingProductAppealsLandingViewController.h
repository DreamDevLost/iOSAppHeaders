//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGShoppingProductAppealsFooterViewDelegate.h"

@class IGFeedItem, IGProductItem, IGProductItemTag, IGShoppingProductAppealsBodyView, IGShoppingProductAppealsFooterView, IGShoppingProductAppealsHeaderView, IGShoppingProductAppealsLogger, IGUserSession, NSString;

@interface IGShoppingProductAppealsLandingViewController : IGViewController <IGCoreTextLinkHandler, IGShoppingProductAppealsFooterViewDelegate>
{
    IGShoppingProductAppealsHeaderView *_headerView;
    IGShoppingProductAppealsBodyView *_bodyView;
    IGShoppingProductAppealsFooterView *_footerView;
    IGShoppingProductAppealsLogger *_logger;
    IGProductItem *_productItem;
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGProductItemTag *_productTag;
}

@property(readonly, nonatomic) IGProductItemTag *productTag; // @synthesize productTag=_productTag;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGProductItem *productItem; // @synthesize productItem=_productItem;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_onReviewRequested:(id)arg1;
- (void)didTapRequestReviewButtonCTA;
- (void)didTapRemoveTagButtonCTA;
- (_Bool)prefersTabBarHidden;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithProductItem:(id)arg1 userSession:(id)arg2 feedItem:(id)arg3 productTag:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


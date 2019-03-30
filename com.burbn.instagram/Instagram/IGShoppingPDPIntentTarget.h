//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGFeedItem, IGProductItem, IGUser, IGUserSession, NSString, UINavigationController;

@interface IGShoppingPDPIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    IGProductItem *_productItem;
    IGFeedItem *_feedItem;
    IGUser *_user;
    UINavigationController *_navigationController;
    NSString *_entryPoint;
    NSString *_priorModule;
    id <IGShoppingPDPViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) id <IGShoppingPDPViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGProductItem *productItem; // @synthesize productItem=_productItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 feedItem:(id)arg3 user:(id)arg4 navigationController:(id)arg5 entryPoint:(id)arg6 priorModule:(id)arg7 delegate:(id)arg8;

@end

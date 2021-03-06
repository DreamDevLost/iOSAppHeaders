//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGUserSession, NSString, UIViewController;

@interface IGShoppingProductTapHandler : NSObject
{
    id <IGShoppingProductTapHandlerDelegate> _delegate;
    IGFeedItem *_feedItem;
    UIViewController *_viewController;
    NSString *_entryPoint;
    NSString *_feedAnalyticsModule;
    IGUserSession *_userSession;
}

+ (void)removeTagAction:(id)arg1 feedItem:(id)arg2 userSession:(id)arg3 previousViewController:(id)arg4;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *feedAnalyticsModule; // @synthesize feedAnalyticsModule=_feedAnalyticsModule;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) __weak id <IGShoppingProductTapHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_openWebURL:(id)arg1;
- (void)_showRejectedProductDialogWithTitle:(id)arg1 message:(id)arg2 removeProductButtonText:(id)arg3 removeProductBlock:(CDUnknownBlockType)arg4;
- (void)_showRejectedProductDialogWithStoryTapModel:(id)arg1 title:(id)arg2 message:(id)arg3;
- (void)_showPendingProductDialogWithMessage:(id)arg1;
- (void)tapOnProductTag:(id)arg1 extras:(id)arg2;
- (void)tapOnNonApprovedProductStickerWithStoryTapModel:(id)arg1;
- (id)initWithFeedItem:(id)arg1 viewController:(id)arg2 entryPoint:(id)arg3 feedAnalyticsModule:(id)arg4 userSession:(id)arg5;

@end


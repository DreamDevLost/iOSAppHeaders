//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGFeedMediaPreviewContext, IGUserSession, NSDictionary, NSString, UIView;

@protocol IGFeedMediaPreviewController <NSObject>
+ (id)previewControllerWithFeedItem:(IGFeedItem *)arg1 previewContext:(IGFeedMediaPreviewContext *)arg2 module:(NSString *)arg3 userSession:(IGUserSession *)arg4 loggingExtras:(NSDictionary *)arg5;
+ (_Bool)canPreviewFeedItem:(IGFeedItem *)arg1;
@property(readonly, nonatomic) UIView *mediaView;

@optional
- (void)didLoseFocus;
- (void)willLoseFocus;
- (void)didGainFocus;
- (void)willGainFocus;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStatusBarProxyViewController, UIView, UIWindow;

@interface IGStatusBarOverlayViewPresenter : NSObject
{
    long long _presentationStyle;
    IGStatusBarProxyViewController *_statusBarViewController;
    UIWindow *_overlayWindow;
    UIView *_contentView;
    _Bool _showing;
    _Bool _hiding;
}

- (void).cxx_destruct;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContentView:(id)arg1 presentationStyle:(long long)arg2;

@end

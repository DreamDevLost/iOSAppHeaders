//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGShareServiceConfigureManager, UIViewController;

@protocol IGShareListManagerDelegate <NSObject>
- (void)shareServiceConfigureManager:(IGShareServiceConfigureManager *)arg1 didFinishLoginForService:(long long)arg2;
- (UIViewController *)viewControllerForShareConfiguration;
- (void)shareListNeedsReloadForServiceAtIndex:(long long)arg1 userInteraction:(_Bool)arg2;
- (void)shareListNeedsFullReload;
@end


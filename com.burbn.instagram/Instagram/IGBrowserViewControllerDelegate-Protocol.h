//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBrowserViewController, NSString, NSURL;

@protocol IGBrowserViewControllerDelegate <NSObject>
- (void)browserViewControllerDidDismiss:(IGBrowserViewController *)arg1;
- (void)browserViewControllerDidFinishWithUrl:(NSURL *)arg1 uid:(NSString *)arg2;
@end


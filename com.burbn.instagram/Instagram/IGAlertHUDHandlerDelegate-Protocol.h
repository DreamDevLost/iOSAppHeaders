//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAlertHUD, IGAlertHUDHandler, NSString;

@protocol IGAlertHUDHandlerDelegate <NSObject>
- (void)alertHUDHAndler:(IGAlertHUDHandler *)arg1 presentAlertHUD:(IGAlertHUD *)arg2 withText:(NSString *)arg3;
- (void)didHideCurrentHUDWithAlertHUDHandler:(IGAlertHUDHandler *)arg1;
@end


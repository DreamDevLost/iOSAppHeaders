//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessConversionEditProfileViewController, IGFacebookPageInfo, IGViewController, IGViewController<IGBusinessConversionViewController>, NSString;

@protocol IGBusinessConversionViewControllerDelegate <NSObject>
- (void)businessConversionViewController:(IGBusinessConversionEditProfileViewController *)arg1 pageContactExportFailedWithErrorMessage:(NSString *)arg2;
- (void)businessConversionViewControllerNotBusiness:(IGViewController<IGBusinessConversionViewController> *)arg1;
- (void)businessConversionViewControllerDidCompleteFlow:(IGViewController *)arg1 withPageInfo:(IGFacebookPageInfo *)arg2 step:(NSString *)arg3;
- (void)businessConversionViewControllerDidDismiss:(IGViewController<IGBusinessConversionViewController> *)arg1;
@end

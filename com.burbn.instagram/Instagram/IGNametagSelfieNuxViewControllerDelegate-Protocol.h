//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGNametagSelfieNuxViewController, UIImage;

@protocol IGNametagSelfieNuxViewControllerDelegate
- (void)nuxViewControllerDidTapCancelButton:(IGNametagSelfieNuxViewController *)arg1;
- (void)nuxViewControllerDidDenyCameraPermission:(IGNametagSelfieNuxViewController *)arg1;
- (void)nuxViewController:(IGNametagSelfieNuxViewController *)arg1 didTapSwitchButton:(id)arg2;
- (void)nuxViewController:(IGNametagSelfieNuxViewController *)arg1 didCaptureImage:(UIImage *)arg2;
- (void)nuxViewController:(IGNametagSelfieNuxViewController *)arg1 didChangeConfigToIndex:(long long)arg2;
@end


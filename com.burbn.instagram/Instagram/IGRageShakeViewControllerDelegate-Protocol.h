//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRageShakeScreenshotAttachment, NSURL, UIViewController<IGRageShakeViewControllerType>;

@protocol IGRageShakeViewControllerDelegate <NSObject>
- (void)rageShakeViewController:(UIViewController<IGRageShakeViewControllerType> *)arg1 didRemoveVideoAttachment:(NSURL *)arg2;
- (void)rageShakeViewController:(UIViewController<IGRageShakeViewControllerType> *)arg1 didRemoveScreenshotAttachment:(IGRageShakeScreenshotAttachment *)arg2;
- (void)rageShakeViewController:(UIViewController<IGRageShakeViewControllerType> *)arg1 didUpdateScreenshotAttachmentWithNewAttachment:(IGRageShakeScreenshotAttachment *)arg2 oldAttachment:(IGRageShakeScreenshotAttachment *)arg3;
- (void)didDismissRageShakeViewController:(UIViewController<IGRageShakeViewControllerType> *)arg1 didSendReport:(_Bool)arg2;
@end


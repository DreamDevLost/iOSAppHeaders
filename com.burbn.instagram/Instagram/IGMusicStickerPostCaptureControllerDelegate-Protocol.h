//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMusicStickerPostCaptureController, IGStickerBundleView;

@protocol IGMusicStickerPostCaptureControllerDelegate <NSObject>
- (void)musicStickerPostCaptureController:(IGMusicStickerPostCaptureController *)arg1 didDeleteMusicStickerBundleView:(IGStickerBundleView *)arg2;
- (void)musicStickerPostCaptureController:(IGMusicStickerPostCaptureController *)arg1 didAddMusicStickerBundleView:(IGStickerBundleView *)arg2;
- (void)musicStickerPostCaptureControllerDidFinishEditingMusic:(IGMusicStickerPostCaptureController *)arg1;
- (void)musicStickerPostCaptureControllerDidBeginEditingMusic:(IGMusicStickerPostCaptureController *)arg1;
@end

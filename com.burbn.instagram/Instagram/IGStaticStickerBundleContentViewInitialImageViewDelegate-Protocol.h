//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGImageSpecifier, IGStaticStickerBundleContentView;

@protocol IGStaticStickerBundleContentViewInitialImageViewDelegate <NSObject>
- (void)staticStickerBundleContentView:(IGStaticStickerBundleContentView *)arg1 didFinishLoadingImage:(IGImageSpecifier *)arg2;
- (void)staticStickerBundleContentView:(IGStaticStickerBundleContentView *)arg1 didUpdateDownloadProgress:(double)arg2 forImage:(IGImageSpecifier *)arg3;
- (void)staticStickerBundleContentView:(IGStaticStickerBundleContentView *)arg1 didBeginLoadingImage:(IGImageSpecifier *)arg2;
@end


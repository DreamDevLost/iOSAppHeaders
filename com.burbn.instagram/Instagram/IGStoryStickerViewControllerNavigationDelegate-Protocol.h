//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCountdownStickerTrayModel, IGFundraiserStickerTrayModel, IGGIFSearchStickerModel, IGGalleryStickerModel, IGMusicStickerModel, IGProductStickerModel, IGStoryStickerViewController;

@protocol IGStoryStickerViewControllerNavigationDelegate <NSObject>
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectFundraiserStickerTrayModel:(IGFundraiserStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectCountdownHomeWithStickerTrayModel:(IGCountdownStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectMusicStickerModel:(IGMusicStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectProductStickerModel:(IGProductStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectGalleryStickerModel:(IGGalleryStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectGIFSearchStickerModel:(IGGIFSearchStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 wantsDismissAnimated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end


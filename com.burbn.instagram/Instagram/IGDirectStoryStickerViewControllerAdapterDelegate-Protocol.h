//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGDirectStoryStickerViewControllerAdapter, IGEmojiModel, IGGiphyGIFModel, IGStaticStickerModel;

@protocol IGDirectStoryStickerViewControllerAdapterDelegate
- (void)storyStickerViewControllerAdapterDidSelectLike:(IGDirectStoryStickerViewControllerAdapter *)arg1;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectStaticSticker:(IGStaticStickerModel *)arg2;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectAnimatedMedia:(IGGiphyGIFModel *)arg2;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectEmoji:(IGEmojiModel *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCountdownStickerConsumptionModel, IGCountdownStickerListViewController;

@protocol IGCountdownStickerListViewControllerDelegate <NSObject>
- (void)countdownStickerListViewController:(IGCountdownStickerListViewController *)arg1 didReshareCountdownSticker:(IGCountdownStickerConsumptionModel *)arg2;
- (void)countdownStickerListViewControllerDidTapCreateNewList:(IGCountdownStickerListViewController *)arg1;
- (void)countdownStickerListViewControllerDidTapCancel:(IGCountdownStickerListViewController *)arg1;
@end


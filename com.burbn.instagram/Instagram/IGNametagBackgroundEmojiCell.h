//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGNametagStickerTrayViewControllerDelegate.h"

@class IGNametagBackgroundModeConfiguration, IGNametagStickerDataSource, IGStoryStickerTrayStateModel, IGUserSession, NSString, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController;

@interface IGNametagBackgroundEmojiCell : UICollectionViewCell <IGNametagStickerTrayViewControllerDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    IGNametagBackgroundModeConfiguration *_configuration;
    UIView *_canvasView;
    IGNametagStickerDataSource *_stickerDataSource;
    IGUserSession *_userSession;
    UIViewController *_presentViewController;
    id <IGNametagBackgroundCellDelegate> _delegate;
    _Bool _isPresentingStickerTray;
    IGStoryStickerTrayStateModel *_trayStateModel;
    UISwipeGestureRecognizer *_swipeGesture;
}

- (void).cxx_destruct;
- (void)cardStickerTrayViewController:(id)arg1 didSelectEmoji:(id)arg2;
- (void)cardStickerTrayViewController:(id)arg1 didDismissWithFinalTrayStateModel:(id)arg2;
- (void)_didSwipeUp;
- (void)_didTapBackground;
- (void)_dismissStickerViewController;
- (void)_presentStickerViewController;
- (void)layoutSubviews;
- (void)configWithBgConfiguration:(id)arg1 presentViewController:(id)arg2 userSession:(id)arg3 delegate:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

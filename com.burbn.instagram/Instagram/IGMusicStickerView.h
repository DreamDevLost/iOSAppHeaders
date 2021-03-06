//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGBigAlbumArtMusicStickerViewDelegate.h"
#import "IGOverlayTransformViewType.h"
#import "IGSmallAlbumArtMusicStickerViewDelegate.h"
#import "IGStickerBundleContentViewType.h"

@class IGBigAlbumArtMusicStickerView, IGSmallAlbumArtMusicStickerView, IGStoryMusicTrack, NSString;

@interface IGMusicStickerView : UIView <IGSmallAlbumArtMusicStickerViewDelegate, IGBigAlbumArtMusicStickerViewDelegate, IGStickerBundleContentViewType, IGOverlayTransformViewType>
{
    long long _style;
    IGSmallAlbumArtMusicStickerView *_smallStickerView;
    IGBigAlbumArtMusicStickerView *_bigStickerView;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    id <IGMusicStickerViewDelegate> _delegate;
    IGStoryMusicTrack *_musicTrack;
}

@property(readonly, nonatomic) IGStoryMusicTrack *musicTrack; // @synthesize musicTrack=_musicTrack;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <IGMusicStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (id)outlinePath;
- (id)transformTargetView;
- (void)bigAlbumArtMusicStickerViewDidTapEdit;
- (void)smallAlbumArtMusicStickerViewDidTapEdit;
- (id)storyAssetDiffableIdentifier;
- (id)stickerView;
- (id)loggingId;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
@property(nonatomic) _Bool audioIndicatorHidden;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMusicTrack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


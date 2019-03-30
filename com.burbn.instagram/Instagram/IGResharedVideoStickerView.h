//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStoryStickerDeletable.h"
#import "IGTappableStickerViewType.h"
#import "IGVideoStickerViewType.h"

@class IGAssetPlayerView, IGGradientView, IGResharedVideoStickerHeaderView, IGResharedVideoStickerModel, IGVideoStickerContentView, NSString, UIImage;

@interface IGResharedVideoStickerView : UIView <IGVideoStickerViewType, IGStoryStickerDeletable, IGTappableStickerViewType>
{
    IGVideoStickerContentView *_contentView;
    UIImage *_staticOverlaySnapshot;
    IGAssetPlayerView *_playerView;
    UIView *_headerWrapperView;
    IGGradientView *_topGradientView;
    IGResharedVideoStickerHeaderView *_headerView;
    _Bool _isNonDeletable;
    IGResharedVideoStickerModel *_model;
}

@property(readonly, nonatomic) IGResharedVideoStickerModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
@property(readonly, nonatomic) IGAssetPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (id)_staticOverlaySnapshot;
- (id)tapModelObject;
- (id)storyAssetDiffableIdentifier;
- (id)stickerView;
- (id)loggingId;
- (id)audioClip;
- (id)videoClip;
- (id)dynamicOverlayImageProvider;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


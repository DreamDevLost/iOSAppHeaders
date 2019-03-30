//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStickerViewType.h"
#import "IGStoryStickerDeletable.h"
#import "IGTappableStickerViewType.h"

@class CAShapeLayer, IGRemoteImageView, IGStoryOverlayTapModelObject, IGTVReshareOverlayView, NSString;

@interface IGTVReshareStickerView : UIView <IGStickerViewType, IGStoryStickerDeletable, IGTappableStickerViewType>
{
    IGStoryOverlayTapModelObject *_tapModelObject;
    NSString *_mediaId;
    UIView *_contentView;
    CAShapeLayer *_cornerMaskingLayer;
    IGRemoteImageView *_thumbnailImageView;
    IGTVReshareOverlayView *_overlayView;
    _Bool _isNonDeletable;
}

+ (_Bool)shouldShowHintText;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (void).cxx_destruct;
- (id)tapModelObject;
- (id)resharedMediaId;
- (id)storyAssetDiffableIdentifier;
- (id)stickerView;
- (id)loggingId;
- (id)outlinePath;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

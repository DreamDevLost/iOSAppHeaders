//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGImageStickerViewDelegate.h"
#import "IGStickerViewType.h"
#import "IGTappableStickerViewType.h"

@class CAShapeLayer, IGCircularProgressView, IGFeedPostStickerModel, IGImageStickerView, IGRemoteImageView, IGStaticStickerPaddedLabel, NSString, UIImageView, UILabel;

@interface IGFeedPostStickerView : UIView <IGImageStickerViewDelegate, IGStickerViewType, IGTappableStickerViewType>
{
    CAShapeLayer *_cornerMaskingLayer;
    UIView *_contentView;
    CAShapeLayer *_bubbleBackDropLayer;
    IGImageStickerView *_imageStickerView;
    UIView *_headerWrapperView;
    UIView *_footerWrapperView;
    IGRemoteImageView *_profilePictureImageView;
    UILabel *_headerUsernameLabel;
    IGStaticStickerPaddedLabel *_footerUsernameLabel;
    UILabel *_headerCaptionLabel;
    UILabel *_captionLabel;
    UIImageView *_iconView;
    IGCircularProgressView *_progressView;
    IGFeedPostStickerModel *_model;
}

@property(readonly, nonatomic) IGFeedPostStickerModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)tapModelObject;
- (id)stickerView;
- (id)storyAssetDiffableIdentifier;
- (id)loggingId;
- (void)imageStickerViewFailedToLoadImage:(id)arg1 error:(id)arg2;
- (void)imageStickerViewDidLoadImage:(id)arg1;
- (void)imageStickerView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (id)_squareStyleOutlinePath;
- (id)_bubbleStyleOutlinePath;
- (id)outlinePath;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

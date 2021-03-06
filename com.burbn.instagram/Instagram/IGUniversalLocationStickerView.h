//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGLocationStickerViewType.h"
#import "IGOverlayTransformViewType.h"
#import "IGStickerBundleContentViewType.h"

@class IGGradientTextStickerView, IGUniversalLocationStickerModel, NSString;

@interface IGUniversalLocationStickerView : UIView <IGStickerBundleContentViewType, IGLocationStickerViewType, IGOverlayTransformViewType>
{
    long long _currentIndex;
    IGGradientTextStickerView *_contentView;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    IGUniversalLocationStickerModel *_model;
}

@property(readonly, nonatomic) IGUniversalLocationStickerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (id)storyAssetDiffableIdentifier;
- (id)stickerView;
- (id)loggingId;
- (id)outlinePath;
- (id)accessibilityLabel;
- (id)transformTargetView;
- (id)attribution;
- (id)currentLocation;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (void)setGradientColors:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


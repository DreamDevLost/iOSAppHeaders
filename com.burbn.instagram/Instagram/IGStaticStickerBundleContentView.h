//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGHashtagStickerViewType.h"
#import "IGImageStickerViewDelegate.h"
#import "IGLocationStickerViewType.h"
#import "IGOverlayTransformViewType.h"
#import "IGStickerBundleContentViewType.h"

@class IGStaticStickerModel, NSArray, NSString;

@interface IGStaticStickerBundleContentView : UIView <IGImageStickerViewDelegate, IGStickerBundleContentViewType, IGLocationStickerViewType, IGHashtagStickerViewType, IGOverlayTransformViewType>
{
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    IGStaticStickerModel *_model;
    id <IGStaticStickerBundleContentViewInitialImageViewDelegate> _initialImageViewDelegate;
    NSArray *_stickerViews;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) NSArray *stickerViews; // @synthesize stickerViews=_stickerViews;
@property(nonatomic) __weak id <IGStaticStickerBundleContentViewInitialImageViewDelegate> initialImageViewDelegate; // @synthesize initialImageViewDelegate=_initialImageViewDelegate;
@property(readonly, nonatomic) IGStaticStickerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (id)storyAssetDiffableIdentifier;
- (id)stickerView;
- (id)loggingId;
- (id)outlinePath;
- (id)_stickerViewAtIndex:(long long)arg1;
- (id)_singleViewForSingleModel:(id)arg1 module:(id)arg2;
- (void)imageStickerViewFailedToLoadImage:(id)arg1 error:(id)arg2;
- (void)imageStickerView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageStickerViewDidLoadImage:(id)arg1;
- (void)cleanUp;
- (void)configureWithModel:(id)arg1 module:(id)arg2;
- (id)transformTargetView;
- (_Bool)shouldUseCustomTitle;
- (id)hashtagAttribution;
- (id)currentHashtag;
- (id)attribution;
- (id)currentLocation;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


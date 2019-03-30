//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGPanAnimationViewDelegate.h"
#import "IGStoryAsset.h"

@class IGCompositionFilterMetadata, IGPanAnimationView, IGPostCapturePreview, IGVideoComposition, IGVideoPlaybackView, NSArray, NSString, UIImage, UIView<IGFilterMediaPhotoViewType>;

@interface IGStorySwipableFilterView : UIView <IGPanAnimationViewDelegate, IGStoryAsset>
{
    long long _mediaType;
    _Bool _enableFreeformMediaTransform;
    long long _assetSource;
    _Bool _muted;
    _Bool _filtersUseIglMetal;
    long long _selectedFilterIndex;
    IGPanAnimationView *_panAnimationView;
    IGVideoPlaybackView *_playerView;
    id <IGStorySwipableFilterViewDelegate> _delegate;
    NSArray *_filters;
    UIImage *_image;
    IGVideoComposition *_video;
    UIImage *_videoDisplayImage;
    UIView<IGFilterMediaPhotoViewType> *_filteredImageView;
    IGPostCapturePreview *_postCapturePreview;
}

+ (id)colorFilters:(unsigned long long)arg1;
+ (void)updateFilterArray:(id)arg1 key:(Class)arg2 with:(id)arg3 keepPrevious:(_Bool)arg4;
+ (id)filtersIDDictionaryFromFilters:(id)arg1;
+ (id)filtersIDArrayFromFilters:(id)arg1;
@property(retain, nonatomic) IGPostCapturePreview *postCapturePreview; // @synthesize postCapturePreview=_postCapturePreview;
@property(retain, nonatomic) UIView<IGFilterMediaPhotoViewType> *filteredImageView; // @synthesize filteredImageView=_filteredImageView;
@property(retain, nonatomic) UIImage *videoDisplayImage; // @synthesize videoDisplayImage=_videoDisplayImage;
@property(retain, nonatomic) IGVideoComposition *video; // @synthesize video=_video;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) _Bool filtersUseIglMetal; // @synthesize filtersUseIglMetal=_filtersUseIglMetal;
@property(readonly, nonatomic) __weak id <IGStorySwipableFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGVideoPlaybackView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) IGPanAnimationView *panAnimationView; // @synthesize panAnimationView=_panAnimationView;
@property(nonatomic) long long selectedFilterIndex; // @synthesize selectedFilterIndex=_selectedFilterIndex;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
- (id)_filterObjectForIndex:(long long)arg1;
- (double)_filterStrengthAtIndex:(long long)arg1;
- (Class)_filterClassAtIndex:(long long)arg1;
- (id)_filterView;
- (id)storyAssetDiffableIdentifier;
- (struct CGSize)mediaSize;
- (id)_generateFilteredImage:(id)arg1;
- (id)filteredVideoDisplayImage;
- (double)currentFilterStrength;
- (Class)currentFilterClass;
- (void)generatePostcaptureARSnapshot:(CDUnknownBlockType)arg1;
- (id)filteredImage;
- (_Bool)currentMediaIsFiltered;
@property(nonatomic) struct IGCompositionFilterTransform mediaTransform;
@property(retain, nonatomic) IGCompositionFilterMetadata *compositionFilterMetadata;
@property(nonatomic) _Bool swipeEnabled;
- (long long)_filterIndexForIndexOffset:(long long)arg1;
- (void)_updateWithCurrentFilter;
- (void)_updateOverlayFilterWithIndex:(long long)arg1 translation:(double)arg2 position:(long long)arg3;
- (void)panAnimationView:(id)arg1 didPanToLeftBy:(double)arg2;
- (void)panAnimationView:(id)arg1 didPanToRightBy:(double)arg2;
- (void)panAnimationViewDidFinishPanToLeft:(id)arg1;
- (void)panAnimationViewDidFinishPanToRight:(id)arg1;
- (void)panAnimationView:(id)arg1 willCancelPanAnimationWithDuration:(double)arg2;
- (void)panAnimationView:(id)arg1 willFinishPanToRightAnimationWithDuration:(double)arg2;
- (void)panAnimationView:(id)arg1 willFinishPanToLeftAnimationWithDuration:(double)arg2;
- (void)panAnimationViewDidFinish:(id)arg1;
- (void)_setupPanAnimationView;
- (void)_setupVideoPlayer;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithARVideo:(id)arg1 postCaptureController:(id)arg2 displayImage:(id)arg3 frame:(struct CGRect)arg4 filters:(id)arg5 filtersUseIglMetal:(_Bool)arg6 selectedFilterIndex:(long long)arg7 userPK:(id)arg8 delegate:(id)arg9 enableFreeformMediaTransform:(_Bool)arg10 source:(long long)arg11;
- (id)initWithARImage:(id)arg1 postCaptureController:(id)arg2 frame:(struct CGRect)arg3 filters:(id)arg4 filtersUseIglMetal:(_Bool)arg5 selectedFilterIndex:(long long)arg6 userPK:(id)arg7 delegate:(id)arg8 enableFreeformMediaTransform:(_Bool)arg9 source:(long long)arg10;
- (id)initWithVideo:(id)arg1 displayImage:(id)arg2 frame:(struct CGRect)arg3 filters:(id)arg4 filtersUseIglMetal:(_Bool)arg5 selectedFilterIndex:(long long)arg6 userPK:(id)arg7 delegate:(id)arg8 enableFreeformMediaTransform:(_Bool)arg9 source:(long long)arg10;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 filters:(id)arg3 filtersUseIglMetal:(_Bool)arg4 selectedFilterIndex:(long long)arg5 userPK:(id)arg6 delegate:(id)arg7 enableFreeformMediaTransform:(_Bool)arg8 source:(long long)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


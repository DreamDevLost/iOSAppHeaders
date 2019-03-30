//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AVMutableComposition, IGCompositionFilterMetadata, IGFilter, IGVideoConfiguration, NSArray, NSCache, NSString, NSURL, UIImage;

@interface IGVideoComposition : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldMuteAudio;
    _Bool _isReverseVideo;
    _Bool _isFastVideo;
    NSArray *_clips;
    UIImage *_overlayImage;
    NSArray *_dynamicOverlayModels;
    NSArray *_extraAudioClips;
    double _keyPosition;
    NSURL *_renderedVideoURL;
    long long _stabilizationMode;
    NSString *_videoWriterDestinationURLBase;
    Class _filterClass;
    double _filterStrength;
    IGFilter *_arEffectFilter;
    IGCompositionFilterMetadata *_compositionFilterMetadata;
    UIImage *_thumbnail;
    IGVideoConfiguration *_configuration;
    AVMutableComposition *_composition;
    double _renderProgress;
    UIImage *_unfilteredThumbnail;
    NSCache *_thumbnailCache;
    struct CGPoint _contentOffset;
    CDStruct_1b6d18a9 _dynamicOverlayFilterTimeOffset;
}

+ (struct CGSize)calculateDownscaleSizeForInputSize:(struct CGSize)arg1 outputSize:(struct CGSize)arg2 clip:(id)arg3;
+ (_Bool)supportsSecureCoding;
+ (id)videoCompositionWithAsset:(id)arg1 videoConfiguration:(id)arg2;
@property(retain, nonatomic) NSCache *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(retain, nonatomic) UIImage *unfilteredThumbnail; // @synthesize unfilteredThumbnail=_unfilteredThumbnail;
@property(nonatomic) double renderProgress; // @synthesize renderProgress=_renderProgress;
@property(retain, nonatomic) AVMutableComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) IGVideoConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool isFastVideo; // @synthesize isFastVideo=_isFastVideo;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) CDStruct_1b6d18a9 dynamicOverlayFilterTimeOffset; // @synthesize dynamicOverlayFilterTimeOffset=_dynamicOverlayFilterTimeOffset;
@property(retain, nonatomic) IGCompositionFilterMetadata *compositionFilterMetadata; // @synthesize compositionFilterMetadata=_compositionFilterMetadata;
@property(retain, nonatomic) IGFilter *arEffectFilter; // @synthesize arEffectFilter=_arEffectFilter;
@property(nonatomic) double filterStrength; // @synthesize filterStrength=_filterStrength;
@property(retain, nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
@property(copy, nonatomic) NSString *videoWriterDestinationURLBase; // @synthesize videoWriterDestinationURLBase=_videoWriterDestinationURLBase;
@property(nonatomic) _Bool isReverseVideo; // @synthesize isReverseVideo=_isReverseVideo;
@property(nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(nonatomic) long long stabilizationMode; // @synthesize stabilizationMode=_stabilizationMode;
@property(retain, nonatomic) NSURL *renderedVideoURL; // @synthesize renderedVideoURL=_renderedVideoURL;
@property(nonatomic) double keyPosition; // @synthesize keyPosition=_keyPosition;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(copy, nonatomic) NSArray *extraAudioClips; // @synthesize extraAudioClips=_extraAudioClips;
@property(retain, nonatomic) NSArray *dynamicOverlayModels; // @synthesize dynamicOverlayModels=_dynamicOverlayModels;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) NSArray *clips; // @synthesize clips=_clips;
- (void).cxx_destruct;
- (id)trimmedToMaxDuration:(double)arg1;
- (id)filterGroupIncludingOverlayImage:(_Bool)arg1;
- (id)imageFilter;
- (void)setBaseFilterClass:(Class)arg1 strength:(double)arg2;
- (long long)sourceType;
- (_Bool)canEnableStabilization;
- (_Bool)shouldStabilizeFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldStabilizeClip:(id)arg1;
- (_Bool)shouldEnableStabilization;
- (CDStruct_1b6d18a9)convertPresentationTime:(CDStruct_1b6d18a9)arg1 toClip:(id)arg2;
- (unsigned long long)clipIndexForFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)invalidateComposition;
- (id)rawVideoLocationString;
- (void)refreshThumbnail;
- (id)_thumbnailHelper:(_Bool)arg1;
- (void)generateUnfilteredThumbnail;
- (struct CGImage *)_generator:(id)arg1 generateImageForTimestamp:(CDStruct_1b6d18a9 *)arg2;
- (void)setPlaybackSpeed:(double)arg1 forTimeRange:(CDStruct_e83c9415)arg2;
- (CDStruct_1b6d18a9)duration;
- (void)removeClipAtIndex:(id)arg1;
- (void)moveClipAtIndex:(id)arg1 toIndex:(id)arg2;
- (void)removeLastClip;
- (void)addClip:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)cloneWithClips:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoConfiguration:(id)arg1;

@end

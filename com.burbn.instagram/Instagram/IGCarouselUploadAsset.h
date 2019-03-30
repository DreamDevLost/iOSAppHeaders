//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGVideoComposition, NSDictionary, NSString, UIImage;

@interface IGCarouselUploadAsset : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    UIImage *_imageAsset_downscaledImage;
    NSString *_imageAsset_downscaledImageDataFilePath;
    struct CGRect _imageAsset_downscaledImageCropRect;
    NSDictionary *_imageAsset_editsDictionary;
    NSString *_imageAsset_assetLocalIdentifier;
    _Bool _imageAsset_isDraft;
    IGVideoComposition *_videoAsset_videoComposition;
    NSString *_videoAsset_mediaId;
}

+ (id)videoAssetWithVideoComposition:(id)arg1 mediaId:(id)arg2;
+ (id)imageAssetWithDownscaledImage:(id)arg1 downscaledImageDataFilePath:(id)arg2 downscaledImageCropRect:(struct CGRect)arg3 editsDictionary:(id)arg4 assetLocalIdentifier:(id)arg5 isDraft:(_Bool)arg6;
- (void).cxx_destruct;
- (void)matchImageAsset:(CDUnknownBlockType)arg1 videoAsset:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


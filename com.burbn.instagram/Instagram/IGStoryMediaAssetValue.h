//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGAsyncTask, PHAsset, UIImage;

@interface IGStoryMediaAssetValue : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    PHAsset *_library_phAsset;
    UIImage *_library_thumbnailImage;
    IGAsyncTask *_cameraVideo_videoFetchTask;
    UIImage *_cameraVideo_coverPhoto;
    struct CGSize _cameraVideo_videoSize;
    double _cameraVideo_videoDuration;
    UIImage *_cameraImage_image;
}

+ (id)libraryWithPhAsset:(id)arg1 thumbnailImage:(id)arg2;
+ (id)cameraVideoWithVideoFetchTask:(id)arg1 coverPhoto:(id)arg2 videoSize:(struct CGSize)arg3 videoDuration:(double)arg4;
+ (id)cameraImageWithImage:(id)arg1;
- (void).cxx_destruct;
- (void)matchLibrary:(CDUnknownBlockType)arg1 cameraVideo:(CDUnknownBlockType)arg2 cameraImage:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


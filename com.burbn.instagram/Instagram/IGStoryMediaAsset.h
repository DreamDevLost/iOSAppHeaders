//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryMediaAssetValue, NSDate, UIImage;

@interface IGStoryMediaAsset : NSObject
{
    IGStoryMediaAssetValue *_assetValue;
    int _imageRequestID;
    int _videoAssetRequestID;
    int _videoThumbnailAssetRequestID;
    CDStruct_e83c9415 _timeRange;
}

@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *defaultThumbnailImage;
@property(readonly, nonatomic) struct CGSize assetSize;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) _Bool isVideo;
- (id)description;
- (void)fetchEditingImageWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchVideoWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_fetchPreviewImageForSize:(struct CGSize)arg1 cancelInFlightRequest:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)fetchThumbnailImageForHeight:(double)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)fetchPreviewImageForSize:(struct CGSize)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithAssetValue:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithAssetValue:(id)arg1 duration:(double)arg2;

@end


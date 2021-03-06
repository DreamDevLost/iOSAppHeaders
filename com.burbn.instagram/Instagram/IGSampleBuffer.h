//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IGSampleBuffer : NSObject
{
    struct __CVBuffer *_imageBuffer;
    struct NSDictionary *_metadata;
}

+ (struct CGSize)videoSizeForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) struct __CVBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size;
- (void)generateBlurImageWithOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithImageBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2;
- (id)initWithImageBuffer:(struct __CVBuffer *)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;

@end


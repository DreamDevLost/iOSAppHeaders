//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGGiphyGIFModelModeConfig;

@interface IGGiphyImageModel : FBValueObject <NSCopying, NSCoding>
{
    IGGiphyGIFModelModeConfig *_gifConfig;
    IGGiphyGIFModelModeConfig *_mp4Config;
    IGGiphyGIFModelModeConfig *_webpConfig;
    double _width;
    double _height;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) IGGiphyGIFModelModeConfig *webpConfig; // @synthesize webpConfig=_webpConfig;
@property(readonly, copy, nonatomic) IGGiphyGIFModelModeConfig *mp4Config; // @synthesize mp4Config=_mp4Config;
@property(readonly, copy, nonatomic) IGGiphyGIFModelModeConfig *gifConfig; // @synthesize gifConfig=_gifConfig;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGifConfig:(id)arg1 mp4Config:(id)arg2 webpConfig:(id)arg3 width:(double)arg4 height:(double)arg5;
- (id)initWithCoder:(id)arg1;

@end

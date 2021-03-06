//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface FBVideoConfig : NSObject <NSCopying>
{
    NSDictionary *_config;
    unsigned int _pixelFormat;
    unsigned int _resolution;
    unsigned int _width;
    unsigned int _height;
    unsigned int _keyframeInterval;
    NSString *_codec;
    NSString *_profile;
    double _bitrate;
    CDUnknownBlockType _assetReaderOutputFactory;
    NSDictionary *_additionalWriterInputParams;
}

@property(readonly, copy, nonatomic) NSDictionary *additionalWriterInputParams; // @synthesize additionalWriterInputParams=_additionalWriterInputParams;
@property(readonly, copy, nonatomic) CDUnknownBlockType assetReaderOutputFactory; // @synthesize assetReaderOutputFactory=_assetReaderOutputFactory;
@property(readonly, nonatomic) unsigned int keyframeInterval; // @synthesize keyframeInterval=_keyframeInterval;
@property(readonly, nonatomic) double bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int resolution; // @synthesize resolution=_resolution;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end


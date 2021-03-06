//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RTCVideoEncoderSettings : NSObject
{
    unsigned short _width;
    unsigned short _height;
    unsigned int _startBitrate;
    unsigned int _maxBitrate;
    unsigned int _minBitrate;
    unsigned int _targetBitrate;
    unsigned int _maxFramerate;
    unsigned int _qpMax;
    NSString *_name;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int qpMax; // @synthesize qpMax=_qpMax;
@property(nonatomic) unsigned int maxFramerate; // @synthesize maxFramerate=_maxFramerate;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) unsigned int minBitrate; // @synthesize minBitrate=_minBitrate;
@property(nonatomic) unsigned int maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(nonatomic) unsigned int startBitrate; // @synthesize startBitrate=_startBitrate;
@property(nonatomic) unsigned short height; // @synthesize height=_height;
@property(nonatomic) unsigned short width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct VideoCodec)nativeVideoCodec;
- (id)initWithNativeVideoCodec:(const struct VideoCodec *)arg1;

@end


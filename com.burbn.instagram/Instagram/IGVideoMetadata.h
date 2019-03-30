//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaMetadataProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class IGVideoComposition, NSArray, NSString;

@interface IGVideoMetadata : NSObject <IGMediaMetadataProtocol, NSSecureCoding, NSCopying>
{
    _Bool _audioMuted;
    NSString *_rawVideoLocationString;
    IGVideoComposition *_videoComposition;
    long long _posterFrameIndex;
    double _videoTimeLength;
    long long _videoSourceType;
    NSArray *_clipsMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *clipsMetadata; // @synthesize clipsMetadata=_clipsMetadata;
@property(nonatomic) long long videoSourceType; // @synthesize videoSourceType=_videoSourceType;
@property(nonatomic) double videoTimeLength; // @synthesize videoTimeLength=_videoTimeLength;
@property(nonatomic) long long posterFrameIndex; // @synthesize posterFrameIndex=_posterFrameIndex;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(copy, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(copy, nonatomic) NSString *rawVideoLocationString; // @synthesize rawVideoLocationString=_rawVideoLocationString;
- (void).cxx_destruct;
- (id)sharingInfo;
- (long long)_calculateTrimType;
- (void)_updateVideoTimeLengthWithVideo:(id)arg1;
- (void)_updateClipsMetadataWithVideo:(id)arg1;
- (_Bool)isBoomerang;
- (void)updateWithVideo:(id)arg1;
- (void)updateKeyPosition:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

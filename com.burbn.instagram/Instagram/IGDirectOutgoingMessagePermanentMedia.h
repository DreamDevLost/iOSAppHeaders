//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGDirectAudioWaveform, IGVideoComposition, NSData, NSString, NSURL;

@interface IGDirectOutgoingMessagePermanentMedia : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSData *_staticPhoto_imageData;
    struct CGSize _staticPhoto_size;
    NSString *_staticPhoto_photoUploadId;
    NSData *_video_previewImageData;
    IGVideoComposition *_video_videoComposition;
    struct CGRect _video_cropRect;
    struct CGSize _video_previewImageSize;
    NSString *_video_videoUploadId;
    NSURL *_audio_audioPlaybackURL;
    IGDirectAudioWaveform *_audio_waveform;
    NSString *_audio_audioUploadId;
}

+ (id)videoWithPreviewImageData:(id)arg1 videoComposition:(id)arg2 cropRect:(struct CGRect)arg3 previewImageSize:(struct CGSize)arg4 videoUploadId:(id)arg5;
+ (id)staticPhotoWithImageData:(id)arg1 size:(struct CGSize)arg2 photoUploadId:(id)arg3;
+ (id)audioWithAudioPlaybackURL:(id)arg1 waveform:(id)arg2 audioUploadId:(id)arg3;
- (void).cxx_destruct;
- (void)matchStaticPhoto:(CDUnknownBlockType)arg1 video:(CDUnknownBlockType)arg2 audio:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanStaticPhoto:(CDUnknownBlockType)arg1 video:(CDUnknownBlockType)arg2 audio:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


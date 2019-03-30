//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDynamicOverlayImageProvider.h"
#import "NSSecureCoding.h"

@class IGVideoClip, IGVideoReader, NSString, UIImage;

@interface IGVideoAssetStickerImageProvider : NSObject <NSSecureCoding, IGDynamicOverlayImageProvider>
{
    IGVideoClip *_videoClip;
    UIImage *_staticOverlaySnapshot;
    UIImage *_previousFrame;
    CDStruct_1b6d18a9 _currentSampleBufferTime;
    CDStruct_1b6d18a9 _assetFrameRate;
    struct CGAffineTransform _preferredTransform;
    _Bool _shouldLimitVideoFramesSize;
    IGVideoReader *_videoReader;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) IGVideoReader *videoReader; // @synthesize videoReader=_videoReader;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_onAppBackground;
- (id)imageForTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithVideoClip:(id)arg1 staticOverlaySnapshot:(id)arg2 shouldLimitVideoFramesSize:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface IGStoryStickerPinningController : NSObject
{
    NSMapTable *_trackerForPinnedSticker;
    struct IGRegion _mediaRegion;
}

@property(nonatomic) struct IGRegion mediaRegion; // @synthesize mediaRegion=_mediaRegion;
- (void).cxx_destruct;
- (id)dynamicOverlayModelForSticker:(id)arg1 inSceneWithSize:(struct CGSize)arg2;
- (void)repositionPinnedStickersForVideoFrame:(struct __CVBuffer *)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 atTime:(double)arg3;
- (_Bool)stickerIsPinned:(id)arg1;
- (void)unpinSticker:(id)arg1;
- (void)pinStickerInMedia:(id)arg1 beginsWithReversePlayback:(_Bool)arg2;
@property(readonly, nonatomic) long long numberOfPinnedStickers;
- (id)init;

@end


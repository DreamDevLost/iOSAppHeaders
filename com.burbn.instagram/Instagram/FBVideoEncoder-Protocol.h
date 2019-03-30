//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBVideoStreamingErrorProcessor.h"

@protocol FBVideoEncoder <FBVideoStreamingErrorProcessor>
- (void)cleanup;
- (double)videoOutputBitrate;
- (struct VideoConfig)videoConfig;
- (void)setVideoConfig:(struct VideoConfig)arg1;
- (void)setBitrateBps:(unsigned int)arg1;
- (void)flush;
- (void)encodeVideo:(struct opaqueCMSampleBuffer *)arg1;
@end


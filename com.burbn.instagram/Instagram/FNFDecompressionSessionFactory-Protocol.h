//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FNFPlayerFramesBuffer;

@protocol FNFDecompressionSessionFactory
+ (id <FNFDecompressionSession>)decompressionSessionWithDecoderType:(unsigned long long)arg1 delegate:(id <FNFDecompressionSessionDelegate>)arg2 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg3 videoSize:(struct CGSize)arg4 numOfDecoderThreads:(unsigned int)arg5 framesBuffer:(FNFPlayerFramesBuffer *)arg6 sampleBufferRequestThreshold:(int)arg7;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAdaptiveBitrateResolutionAlgorithm.h"

@class NSString;

@interface FBAdaptiveBitrateResolutionAlgorithmDefault : NSObject <FBAdaptiveBitrateResolutionAlgorithm>
{
}

+ (struct CGSize)resolutionForBitrate:(double)arg1 currentStreamingConfig:(struct VideoConfig)arg2 originalStreamingConfig:(struct VideoConfig)arg3 ABRConfig:(struct AdaptiveBitrateConfig)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

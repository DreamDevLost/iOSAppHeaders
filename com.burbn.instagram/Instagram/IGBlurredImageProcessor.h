//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGImageProcessor.h"

@class NSString, UIColor;

@interface IGBlurredImageProcessor : NSObject <IGImageProcessor>
{
    double _blurRadius;
    unsigned long long _iterations;
    UIColor *_tintColor;
}

@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void).cxx_destruct;
- (id)cacheKeyFragment;
- (id)cacheKeyURLFromURL:(id)arg1;
- (id)processedImageFromDecodedImage:(id)arg1;
- (id)init;
- (id)initWithBlurRadius:(double)arg1 iterations:(unsigned long long)arg2 tintColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoProcessing.h"

@class NSString;

@interface IGFBVideoProcessor : NSObject <FBVideoProcessing>
{
    id <IGMediaProcessor> _mediaProcessor;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withPixelBufferAdaptor:(id)arg2;
- (id)initWithMediaProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

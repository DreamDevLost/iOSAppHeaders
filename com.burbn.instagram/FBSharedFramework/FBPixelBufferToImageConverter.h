//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIContext, NSObject<OS_dispatch_queue>;

@interface FBPixelBufferToImageConverter : NSObject
{
    NSObject<OS_dispatch_queue> *_coreImageConversionQueue;
    CIContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CIContext *context; // @synthesize context=_context;
- (void)convertPixelBuffer:(struct __CVBuffer *)arg1 toImageWithOrientation:(long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

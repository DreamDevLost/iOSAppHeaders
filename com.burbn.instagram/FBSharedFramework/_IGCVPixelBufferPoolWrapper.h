//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _IGCVPixelBufferPoolWrapper : NSObject
{
    struct __CVPixelBufferPool *_pixelBufferPool;
}

@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool; // @synthesize pixelBufferPool=_pixelBufferPool;
- (void)dealloc;
- (void)flush;
- (id)initWithSize:(struct CGSize)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGLKRenderbuffer.h"

@class CAEAGLLayer;

@interface IGGLKColorRenderbuffer : IGGLKRenderbuffer
{
    CAEAGLLayer *_layer;
    struct CGSize _size;
}

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) CAEAGLLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)updateStorage;
- (id)initWithLayer:(id)arg1;

@end

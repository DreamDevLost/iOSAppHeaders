//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGLKNode.h"

@class IGGLFFilter;

@interface IGGLFFilterNode : IGGLKNode
{
    IGGLFFilter *_filter;
}

@property(retain, nonatomic) IGGLFFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)draw;
- (void)modelViewProjectionMatrixDidUpdate;
- (void)layoutChildren;
- (_Bool)requiresSampleTexture;

@end

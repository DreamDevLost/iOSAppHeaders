//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGSurface;

@interface IGLuxBlendFilter : IGImageFilter
{
    double _luxBlendAmount;
    double _slope;
    IGSurface *_claheCDF;
    IGSurface *_antiLuxSurface;
    IGSurface *_starlightSurface;
}

@property(retain, nonatomic) IGSurface *starlightSurface; // @synthesize starlightSurface=_starlightSurface;
@property(retain, nonatomic) IGSurface *antiLuxSurface; // @synthesize antiLuxSurface=_antiLuxSurface;
@property(retain, nonatomic) IGSurface *claheCDF; // @synthesize claheCDF=_claheCDF;
@property(nonatomic) double slope; // @synthesize slope=_slope;
@property(nonatomic) double luxBlendAmount; // @synthesize luxBlendAmount=_luxBlendAmount;
- (void).cxx_destruct;
- (void)clearCachesNotOfSize:(struct CGSize)arg1;
- (void)reduceMemoryUsage;
- (void)clearInternalCaches;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)render:(id)arg1 to:(id)arg2;
- (void)render:(id)arg1 to:(id)arg2 useInternalCaches:(_Bool)arg3;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)samplers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


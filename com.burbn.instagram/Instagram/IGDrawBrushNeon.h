//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDrawBrush.h"

@class IGDrawPoint, NSString, UIColor;

@interface IGDrawBrushNeon : NSObject <IGDrawBrush>
{
    struct CGSize _layerSize;
    UIColor *_externalColor;
    UIColor *_internalColor;
    UIColor *_bulbColor;
    UIColor *_glowColor;
    UIColor *_bevelColor;
    double _defaultSize;
    double _minSize;
    double _maxSize;
    double _size;
    IGDrawPoint *_lastPoint;
}

+ (_Bool)_needsInvertedColorsForColor:(id)arg1;
+ (id)findNeonAppropriateColor:(id)arg1;
+ (id)givenColor:(id)arg1 getBulb:(id *)arg2 glow:(id *)arg3 bevel:(id *)arg4;
@property(retain, nonatomic) IGDrawPoint *lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double size; // @synthesize size=_size;
@property(readonly, nonatomic) double maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) double minSize; // @synthesize minSize=_minSize;
@property(readonly, nonatomic) double defaultSize; // @synthesize defaultSize=_defaultSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool ignoresColor;
- (int)pathDrawingMode;
- (void)drawPoint:(id)arg1 forLayerContext:(struct CGContext *)arg2;
- (void)applyShadowOnLayerIfNeeded:(struct CGContext *)arg1;
- (void)onDrawingStopped:(struct CGContext *)arg1;
- (void)setupLayerContext:(struct CGContext *)arg1;
- (void)setLayerContextSize:(struct CGSize)arg1;
@property(retain, nonatomic) UIColor *color;
@property(readonly, nonatomic) NSString *name;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


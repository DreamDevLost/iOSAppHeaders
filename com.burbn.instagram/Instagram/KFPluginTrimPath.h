//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KFPluginProtocol.h"

@class CAShapeLayer, KFAnimationBuilder, KFBasicAnimationLayer, NSString;

@interface KFPluginTrimPath : NSObject <KFPluginProtocol>
{
    KFAnimationBuilder *_animationBuilderShapeLayer1;
    KFAnimationBuilder *_animationBuilderShapeLayer2;
    struct Layer *_layer;
    const struct PluginTrimPath *_documentPlugin;
    KFBasicAnimationLayer *_trimPathAuxAnimationLayer;
    CAShapeLayer *_shapeLayer1;
    CAShapeLayer *_shapeLayer2;
    double _trimStartBaseline;
    double _trimEndBaseline;
    double _trimOffsetBaseline;
}

- (void).cxx_destruct;
- (void)_removeExtraTrimKeysInStrokeStartValues:(id)arg1 strokeEndValues:(id)arg2 keyTimes:(id)arg3;
- (void)_getStroke1Start:(out double *)arg1 stroke1End:(out double *)arg2 stroke2Start:(out double *)arg3 stroke2End:(out double *)arg4 fromTrimStart:(double)arg5 trimEnd:(double)arg6 trimOffset:(double)arg7;
- (id)_buildTrimOffsetAnimation:(id)arg1;
- (id)_buildTrimEndAnimation:(id)arg1;
- (id)_buildTrimStartAnimation:(id)arg1;
- (void)_applyTrimPathAnimationsToLayer1:(id)arg1 layer2:(id)arg2 animationBuilder1:(id)arg3 animationBuilder2:(id)arg4;
- (void)_applyBasicAnimationsToLayer:(id)arg1 shapeLayer:(id)arg2 animationBuilder:(id)arg3;
@property(readonly, nonatomic) NSString *pluginName;
- (void)didSeekToProgress:(double)arg1;
- (void)willPause;
- (void)willPlay;
- (void)didFinishCreatingLayerHierarchy:(id)arg1;
- (void)animationDidLoad;
- (id)initWithPlugin:(const struct Plugin *)arg1 layer:(struct Layer *)arg2 duration:(double)arg3;

@end


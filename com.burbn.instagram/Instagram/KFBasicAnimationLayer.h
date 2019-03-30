//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAShapeLayer.h"

#import "KFCALayerProtocol.h"

@class CALayer, NSMutableArray, NSString;

@interface KFBasicAnimationLayer : CAShapeLayer <KFCALayerProtocol>
{
    NSMutableArray *_animations;
}

- (void).cxx_destruct;
- (void)setRepeatCount:(float)arg1;
- (void)resetAnimations;
- (void)addAnimations:(id)arg1;
@property(readonly, nonatomic) CALayer *caLayer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


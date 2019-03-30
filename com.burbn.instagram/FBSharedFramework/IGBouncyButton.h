//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "IGTouchDetectorDelegate.h"

@class IGTouchDetector, NSHashTable, NSString, UIView;

@interface IGBouncyButton : UIControl <IGTouchDetectorDelegate>
{
    IGTouchDetector *_touchDetector;
    NSHashTable *_blockingGesturesSet;
    _Bool _pushedDown;
    double _pushedDownScale;
    double _pushedDownAlpha;
    UIView *_contentView;
    struct UIEdgeInsets _hitTestExpansion;
}

@property(nonatomic) _Bool pushedDown; // @synthesize pushedDown=_pushedDown;
@property(nonatomic) struct UIEdgeInsets hitTestExpansion; // @synthesize hitTestExpansion=_hitTestExpansion;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double pushedDownAlpha; // @synthesize pushedDownAlpha=_pushedDownAlpha;
@property(nonatomic) double pushedDownScale; // @synthesize pushedDownScale=_pushedDownScale;
- (void).cxx_destruct;
- (void)_blockingGestureDidRecognize:(id)arg1;
- (void)_recomputeBlockingGestures;
- (void)_clearBlockingGestures;
- (void)touchDetector:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

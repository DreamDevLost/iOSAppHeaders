//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@protocol IGDrawBrushGLMark <NSObject>
+ (id)new;
@property(nonatomic) _Bool hadToStopDueToFullBuffer;
@property(readonly, nonatomic) id <IGDrawBrushGL> brush;
@property(readonly, nonatomic) _Bool supportsIncrementalDrawing;
- (void)setColor:(UIColor *)arg1;
- (void)idle;
- (void)endWith:(_IGTouchSample_67dca217)arg1;
- (void)addSample:(_IGTouchSample_67dca217)arg1;
- (void)startWith:(_IGTouchSample_67dca217)arg1;
- (void)prepareToDraw;
- (void)drawIncremental;
- (void)draw;
- (id)initWithBrush:(id <IGDrawBrushGL>)arg1;
- (id)init;
@end

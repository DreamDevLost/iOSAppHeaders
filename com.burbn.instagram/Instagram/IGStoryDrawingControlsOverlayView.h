//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGPanGestureRecognizerStateUpdateDelegate.h"
#import "IGStoryBrushWidthSliderDelegate.h"
#import "IGStoryColorPaletteDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBTimer, IGPanGestureRecognizer, IGPassthroughView, IGStoryBrushPreviewView, IGStoryBrushWidthSlider, IGStoryColorPickingControls, IGStoryEyedropperView, NSString, UIButton, UIColor;

@interface IGStoryDrawingControlsOverlayView : UIView <IGStoryBrushWidthSliderDelegate, IGStoryColorPaletteDelegate, IGPanGestureRecognizerStateUpdateDelegate, UIGestureRecognizerDelegate>
{
    FBTimer *_fadeOutControlsTimer;
    IGPassthroughView *_controlsWrapperView;
    IGStoryBrushWidthSlider *_brushWidthSlider;
    IGStoryBrushPreviewView *_brushPreview;
    IGStoryColorPickingControls *_colorPickingControls;
    IGStoryEyedropperView *_eyedropper;
    IGPanGestureRecognizer *_panRecognizer;
    _Bool _colorPickingControlsHidden;
    _Bool _controlsVisible;
    _Bool _brushWidthSliderActive;
    _Bool _brushWidthPreviewVisible;
    id <IGStoryDrawingControlsDelegate> _delegate;
    id <IGStoryDrawingControlsDataSource> _dataSource;
    UIButton *_doneButton;
    UIButton *_undoButton;
    UIView *_titleView;
    UIColor *_brushColor;
    unsigned long long _state;
    struct CGPoint _eyedropperPosition;
}

@property(nonatomic) _Bool brushWidthPreviewVisible; // @synthesize brushWidthPreviewVisible=_brushWidthPreviewVisible;
@property(nonatomic) _Bool brushWidthSliderActive; // @synthesize brushWidthSliderActive=_brushWidthSliderActive;
@property(nonatomic) struct CGPoint eyedropperPosition; // @synthesize eyedropperPosition=_eyedropperPosition;
@property(nonatomic) _Bool controlsVisible; // @synthesize controlsVisible=_controlsVisible;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool colorPickingControlsHidden; // @synthesize colorPickingControlsHidden=_colorPickingControlsHidden;
@property(retain, nonatomic) UIColor *brushColor; // @synthesize brushColor=_brushColor;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) UIButton *undoButton; // @synthesize undoButton=_undoButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak id <IGStoryDrawingControlsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryDrawingControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setColorPickingControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect canvasRegion;
@property(nonatomic) struct _IGRange brushWidthRange;
@property(nonatomic) double brushWidth;
- (void)revealBrushWidthSliderForDuration:(double)arg1;
- (void)_startFadeOutControlsTimer;
- (void)_setEyedropperVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handlePan:(id)arg1;
- (void)panGestureRecognizer:(id)arg1 didUpdateToState:(long long)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_didTapEyedropperToggleButton:(id)arg1;
- (void)colorPalette:(id)arg1 didLongPressOnColor:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)colorPalette:(id)arg1 didSelectColor:(id)arg2;
- (void)brushWidthSlider:(id)arg1 didSlide:(double)arg2;
- (void)brushWidthSliderDidFinishSliding:(id)arg1;
- (void)brushWidthSliderDidBeginSliding:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


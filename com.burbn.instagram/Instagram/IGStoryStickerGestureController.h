//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGestureHandler.h"
#import "IGTouchDetectorDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CAShapeLayer, IGAlignmentGrid, IGAlignmentGuideLine, IGTouchDetector, NSString, UIColor, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGStoryStickerGestureController : NSObject <UIGestureRecognizerDelegate, IGTouchDetectorDelegate, IGGestureHandler>
{
    UIPinchGestureRecognizer *_pinchGesture;
    UIPanGestureRecognizer *_panGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UITapGestureRecognizer *_tapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    IGTouchDetector *_forcePressTouchDetector;
    IGAlignmentGrid *_alignmentGrid;
    IGAlignmentGuideLine *_rotationAlignmentGuide;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    CAShapeLayer *_outlinePathVisualizer;
    struct {
        unsigned int maximumScaleForSticker:1;
        unsigned int minimumScaleForSticker:1;
    } _optionalDelegateMethods;
    _Bool _alignmentGuidesEnabled;
    _Bool _trashcanVisible;
    _Bool _deleteSelected;
    _Bool _pinnedToAngle;
    _Bool _pinnedToHorizontalCenterGuideLine;
    _Bool _pinnedToVerticalCenterGuideLine;
    _Bool _pinnedToLeftMarginGuideLine;
    _Bool _pinnedToRightMarginGuideLine;
    _Bool _pinnedToTopMarginGuideLine;
    _Bool _pinnedToBottomMarginGuideLine;
    _Bool _positionedAboveTopMarginGuideLine;
    _Bool _positionedBelowBottomMarginGuideLine;
    id <IGStoryStickerGestureControllerDelegate> _delegate;
    id <IGStoryStickerGestureControllerDataSource> _dataSource;
    UIView *_trashcan;
    CDUnknownBlockType _trashcanPositionInView;
    UIView *_activeSticker;
    double _stickerScale;
    double _stickerRotation;
    UIView *_hardPressedSticker;
}

@property(nonatomic) _Bool positionedBelowBottomMarginGuideLine; // @synthesize positionedBelowBottomMarginGuideLine=_positionedBelowBottomMarginGuideLine;
@property(nonatomic) _Bool positionedAboveTopMarginGuideLine; // @synthesize positionedAboveTopMarginGuideLine=_positionedAboveTopMarginGuideLine;
@property(nonatomic) _Bool pinnedToBottomMarginGuideLine; // @synthesize pinnedToBottomMarginGuideLine=_pinnedToBottomMarginGuideLine;
@property(nonatomic) _Bool pinnedToTopMarginGuideLine; // @synthesize pinnedToTopMarginGuideLine=_pinnedToTopMarginGuideLine;
@property(nonatomic) _Bool pinnedToRightMarginGuideLine; // @synthesize pinnedToRightMarginGuideLine=_pinnedToRightMarginGuideLine;
@property(nonatomic) _Bool pinnedToLeftMarginGuideLine; // @synthesize pinnedToLeftMarginGuideLine=_pinnedToLeftMarginGuideLine;
@property(nonatomic) _Bool pinnedToVerticalCenterGuideLine; // @synthesize pinnedToVerticalCenterGuideLine=_pinnedToVerticalCenterGuideLine;
@property(nonatomic) _Bool pinnedToHorizontalCenterGuideLine; // @synthesize pinnedToHorizontalCenterGuideLine=_pinnedToHorizontalCenterGuideLine;
@property(nonatomic) _Bool pinnedToAngle; // @synthesize pinnedToAngle=_pinnedToAngle;
@property(retain, nonatomic) UIView *hardPressedSticker; // @synthesize hardPressedSticker=_hardPressedSticker;
@property(nonatomic) _Bool deleteSelected; // @synthesize deleteSelected=_deleteSelected;
@property(nonatomic) _Bool trashcanVisible; // @synthesize trashcanVisible=_trashcanVisible;
@property(nonatomic) double stickerRotation; // @synthesize stickerRotation=_stickerRotation;
@property(nonatomic) double stickerScale; // @synthesize stickerScale=_stickerScale;
@property(retain, nonatomic) UIView *activeSticker; // @synthesize activeSticker=_activeSticker;
@property(copy, nonatomic) CDUnknownBlockType trashcanPositionInView; // @synthesize trashcanPositionInView=_trashcanPositionInView;
@property(retain, nonatomic) UIView *trashcan; // @synthesize trashcan=_trashcan;
@property(nonatomic) _Bool alignmentGuidesEnabled; // @synthesize alignmentGuidesEnabled=_alignmentGuidesEnabled;
@property(nonatomic) __weak id <IGStoryStickerGestureControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryStickerGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasActiveGestures;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(retain, nonatomic) UIColor *rotationAlignmentGuideColor;
@property(retain, nonatomic) UIColor *gridAlignmentGuideColor;
@property(readonly, nonatomic) UIView *view;
- (void)_setTrashcanVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long alignmentGuideState;
@property(readonly, nonatomic) _Bool pinnedToHorizontalGuideLine;
@property(readonly, nonatomic) _Bool pinnedToVerticalGuideLine;
- (void)_setGuideLine:(id)arg1 visible:(_Bool)arg2;
@property(nonatomic) struct UIEdgeInsets marginPadding;
- (double)_minimumScaleForSticker:(id)arg1;
- (double)_maximumScaleForSticker:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)stickerAtPointInWindowCoordinates:(struct CGPoint)arg1;
- (void)touchDetector:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handleRotate:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)attachGesturesToView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

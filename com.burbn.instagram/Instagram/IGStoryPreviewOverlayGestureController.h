//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGestureHandler.h"
#import "UIGestureRecognizerDelegate.h"

@class CAShapeLayer, IGAlignmentGrid, IGAlignmentGuideLine, IGForceTouchGestureRecognizer, IGStoryMediaReplyOverlayController, IGStoryPreviewDeleteOptionView, IGStoryPreviewOverlayContainerView, NSString, UIGestureRecognizer, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGStoryPreviewOverlayGestureController : NSObject <UIGestureRecognizerDelegate, IGGestureHandler>
{
    IGAlignmentGrid *_alignmentGrid;
    IGAlignmentGuideLine *_rotationAlignmentGuide;
    CAShapeLayer *_outlinePathVisualizer;
    _Bool _panGestureEnabled;
    _Bool _stickerPinningModeActive;
    _Bool _alignmentGuideSnappingEnabled;
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
    id <IGStoryPreviewOverlayGestureControllerDelegate> _delegate;
    id <IGStoryPreviewOverlayGestureControllerPanDelegate> _panDelegate;
    id <IGStoryPreviewOverlayGestureControllerAlignmentDelegate> _alignmentDelegate;
    UIView *_currentView;
    IGStoryPreviewOverlayContainerView *_containerView;
    IGStoryPreviewDeleteOptionView *_deleteOptionView;
    IGStoryMediaReplyOverlayController *_mediaReplyOverlayController;
    double _viewScaleBeforeDelete;
    IGForceTouchGestureRecognizer *_forceTouchRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    UIPinchGestureRecognizer *_pinchRecognizer;
    UIRotationGestureRecognizer *_rotationRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UISwipeGestureRecognizer *_swipeRecognizer;
    long long _activeOverlayGestureCount;
    UIPanGestureRecognizer *_swipableViewPanRecognizer;
    UIGestureRecognizer *_toggleBoomerangGestureRecognizer;
    UIGestureRecognizer *_togglePlaybackGestureRecognizer;
    UIImpactFeedbackGenerator *_feedbackGenerator;
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
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIGestureRecognizer *togglePlaybackGestureRecognizer; // @synthesize togglePlaybackGestureRecognizer=_togglePlaybackGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *toggleBoomerangGestureRecognizer; // @synthesize toggleBoomerangGestureRecognizer=_toggleBoomerangGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *swipableViewPanRecognizer; // @synthesize swipableViewPanRecognizer=_swipableViewPanRecognizer;
@property(nonatomic) long long activeOverlayGestureCount; // @synthesize activeOverlayGestureCount=_activeOverlayGestureCount;
@property(readonly, nonatomic) UISwipeGestureRecognizer *swipeRecognizer; // @synthesize swipeRecognizer=_swipeRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationRecognizer; // @synthesize rotationRecognizer=_rotationRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchRecognizer; // @synthesize pinchRecognizer=_pinchRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(readonly, nonatomic) IGForceTouchGestureRecognizer *forceTouchRecognizer; // @synthesize forceTouchRecognizer=_forceTouchRecognizer;
@property(nonatomic) double viewScaleBeforeDelete; // @synthesize viewScaleBeforeDelete=_viewScaleBeforeDelete;
@property(nonatomic) _Bool deleteSelected; // @synthesize deleteSelected=_deleteSelected;
@property(readonly, nonatomic) __weak IGStoryMediaReplyOverlayController *mediaReplyOverlayController; // @synthesize mediaReplyOverlayController=_mediaReplyOverlayController;
@property(readonly, nonatomic) __weak IGStoryPreviewDeleteOptionView *deleteOptionView; // @synthesize deleteOptionView=_deleteOptionView;
@property(readonly, nonatomic) __weak IGStoryPreviewOverlayContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) _Bool alignmentGuideSnappingEnabled; // @synthesize alignmentGuideSnappingEnabled=_alignmentGuideSnappingEnabled;
@property(nonatomic) _Bool stickerPinningModeActive; // @synthesize stickerPinningModeActive=_stickerPinningModeActive;
@property(nonatomic) __weak id <IGStoryPreviewOverlayGestureControllerAlignmentDelegate> alignmentDelegate; // @synthesize alignmentDelegate=_alignmentDelegate;
@property(nonatomic) __weak id <IGStoryPreviewOverlayGestureControllerPanDelegate> panDelegate; // @synthesize panDelegate=_panDelegate;
@property(nonatomic) __weak id <IGStoryPreviewOverlayGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAlignmentGuidesFromViewHierarchy;
- (void)_setGuideLine:(id)arg1 visible:(_Bool)arg2;
@property(readonly, nonatomic) _Bool pinnedToHorizontalGuideLine;
@property(readonly, nonatomic) _Bool pinnedToVerticalGuideLine;
@property(readonly, nonatomic) unsigned long long alignmentGuideState;
- (struct CGRect)_boundingBoxForOverlay:(id)arg1;
- (_Bool)_deleteAreaContainsGesture:(id)arg1;
- (id)_reverseOverlayViewsEnumerator;
- (id)_currentViewForGesture:(id)arg1;
- (_Bool)_gestureIsOverlayGesture:(id)arg1;
- (_Bool)_isGestureContained:(id)arg1 inSubview:(id)arg2 superview:(id)arg3 useStrictDetection:(_Bool)arg4;
- (_Bool)_isPointContained:(struct CGPoint)arg1 inSubview:(id)arg2 superview:(id)arg3 useStrictDetection:(_Bool)arg4;
- (_Bool)_isColorVisibleAtPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_updateTransformWithTranslation:(struct CGPoint)arg1 rotation:(double)arg2 scale:(double)arg3;
- (void)_updateAnchorPointForView:(id)arg1 newAnchorLocation:(struct CGPoint)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleTapGesture:(id)arg1;
- (void)_handleGesture:(id)arg1;
@property(nonatomic) struct UIEdgeInsets marginPadding;
- (void)cancelActiveOverlayGesturesIfNeeded;
- (_Bool)isTouchContainedInOverlaySubviews:(id)arg1;
- (void)addTogglePlaybackGesture:(id)arg1;
- (void)addToggleBoomerangGesture:(id)arg1;
- (void)addSwipableViewPanGesture:(id)arg1;
- (_Bool)hasActiveOverlayGestures;
- (void)setOverlayGesturesEnabled:(_Bool)arg1;
- (void)setForceTouchAllowed:(_Bool)arg1;
- (void)setPanGestureEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1 deleteOptionView:(id)arg2 mediaReplyOverlayController:(id)arg3 tapAllowed:(_Bool)arg4 forceTouchAllowed:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


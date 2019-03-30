//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class IGStorySwipableFilterView, NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIView;

@interface IGStoryMediaGestureController : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_containerView;
    struct CGSize _constrainingSize;
    struct CGSize _backgroundSize;
    IGStorySwipableFilterView *_mediaView;
    UIPinchGestureRecognizer *_pinchGesture;
    UIPanGestureRecognizer *_panGesture;
    UIRotationGestureRecognizer *_rotateGesture;
    struct CGPoint _initialScale;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool _pinnedToAngle;
    long long _gestureState;
}

@property(nonatomic) _Bool pinnedToAngle; // @synthesize pinnedToAngle=_pinnedToAngle;
@property(readonly, nonatomic) long long gestureState; // @synthesize gestureState=_gestureState;
- (void).cxx_destruct;
- (_Bool)_isMediaGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleMediaGesture:(id)arg1;
- (id)initWithContainerView:(id)arg1 mediaView:(id)arg2 constrainingSize:(struct CGSize)arg3 initialTransform:(struct IGCompositionFilterTransform)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


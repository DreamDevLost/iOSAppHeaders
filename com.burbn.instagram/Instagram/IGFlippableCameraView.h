//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<OS_dispatch_queue>, UIImageView, UIVisualEffectView;

@interface IGFlippableCameraView : UIView
{
    UIView *_cameraView;
    UIImageView *_stillFrameImageView;
    UIVisualEffectView *_blurView;
    long long _newPosition;
    NSObject<OS_dispatch_queue> *_switchingQueue;
    long long _leftCameraPosition;
    _Bool _cameraDidSwitchPosition;
    _Bool _animationComplete;
    _Bool _flipping;
    id <IGFlippableCameraViewDelegate> _delegate;
    double _flipDuration;
}

@property(nonatomic) double flipDuration; // @synthesize flipDuration=_flipDuration;
@property(nonatomic, getter=isFlipping) _Bool flipping; // @synthesize flipping=_flipping;
@property(nonatomic) __weak id <IGFlippableCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cleanupBlurView;
- (void)_flipCameraViewTo:(long long)arg1;
- (void)cameraDidSwitchToPosition:(long long)arg1;
- (void)flipTo:(long long)arg1 withLastFrame:(id)arg2;
- (void)layoutSubviews;
- (id)initWithCameraView:(id)arg1 leftCameraPosition:(long long)arg2;

@end


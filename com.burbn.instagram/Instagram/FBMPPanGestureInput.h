//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMPGestureInput.h"

@class UIPanGestureRecognizer;

@interface FBMPPanGestureInput : FBMPGestureInput
{
    struct CGPoint _initialLocation;
}

- (void)_handleGesture:(id)arg1;
- (void)producePanGestureData:(id)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
- (id)initWithPanGestureRecognizer:(id)arg1 screenScale:(double)arg2;
- (id)_gestureData;

@end


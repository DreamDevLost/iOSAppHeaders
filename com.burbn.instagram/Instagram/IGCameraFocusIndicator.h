//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, UIColor;

@interface IGCameraFocusIndicator : UIView
{
    CADisplayLink *_reviewDisplayLink;
    long long _frame;
    long long _stopIn;
    UIColor *_indicatorColor;
}

@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_completeAnimation;
- (void)stopAnimating;
- (void)startAnimatingAtPoint:(struct CGPoint)arg1;
- (void)_stopRenderLoop;
- (void)_startRenderLoop;
- (id)init;
- (void)dealloc;

@end

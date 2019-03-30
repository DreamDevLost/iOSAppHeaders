//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "POPAnimationDelegate.h"

@class CAShapeLayer, NSArray, NSMutableArray, NSString;

@interface IGStoryHuePickerView : UIView <POPAnimationDelegate>
{
    NSArray *_baseColorPalette;
    NSMutableArray *_hueSegments;
    CAShapeLayer *_calloutLayer;
    id <IGStoryHuePickerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryHuePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_gestureUpdated:(id)arg1;
- (void)_hideCallout;
- (void)_showCalloutWithColor:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)colorAtPoint:(struct CGPoint)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithInitialYOffset:(double)arg1 itemSize:(struct CGSize)arg2 gestureRecognizer:(id)arg3;
- (void)updateBaseColorPalette:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


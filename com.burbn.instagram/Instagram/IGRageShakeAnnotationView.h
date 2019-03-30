//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRageShakeAnnotationOverlayView, UIImageView;

@interface IGRageShakeAnnotationView : UIView
{
    UIImageView *_imageView;
    IGRageShakeAnnotationOverlayView *_overlayView;
    id <IGRageShakeAnnotationViewDelegate> _delegate;
    double _topLayoutGuideLength;
}

@property(nonatomic) double topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(readonly, nonatomic) __weak id <IGRageShakeAnnotationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGRageShakeAnnotationOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateImage:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;

@end

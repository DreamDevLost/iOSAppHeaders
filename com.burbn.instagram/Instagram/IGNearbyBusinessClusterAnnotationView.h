//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

@class IGCircularButton, IGNearbyBusinessClusterAnnotation;

@interface IGNearbyBusinessClusterAnnotationView : MKAnnotationView
{
    IGNearbyBusinessClusterAnnotation *_annotation;
    IGCircularButton *_circularButton;
    id <IGNearbyBusinessClusterAnnotationViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGNearbyBusinessClusterAnnotationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureWithAnnotation:(id)arg1;
- (void)_tapped:(id)arg1;
- (void)_setupCircularButton;
- (void)_setupGradientImage;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end


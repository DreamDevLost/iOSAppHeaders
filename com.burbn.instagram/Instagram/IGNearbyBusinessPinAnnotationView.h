//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

@class IGNearbyBusinessAnnotation, IGProfilePictureImageView, IGStoryGradientRingView;

@interface IGNearbyBusinessPinAnnotationView : MKAnnotationView
{
    IGNearbyBusinessAnnotation *_annotation;
    IGProfilePictureImageView *_profileImageView;
    IGStoryGradientRingView *_gradientRing;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (struct CGPoint)_mirrorPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_profileTapped:(id)arg1;
- (void)configureWithAnnotation:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end


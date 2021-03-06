//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSurfaceView, UIImageView;

@interface IGOverlayFilterView : UIView
{
    UIView *_maskView;
    UIImageView *_filteredImageView;
    IGSurfaceView *_filteredSurfaceView;
    long long _position;
}

@property(readonly, nonatomic) IGSurfaceView *filteredSurfaceView; // @synthesize filteredSurfaceView=_filteredSurfaceView;
@property(readonly, nonatomic) UIImageView *filteredImageView; // @synthesize filteredImageView=_filteredImageView;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)setFilterWidth:(double)arg1 filterPosition:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


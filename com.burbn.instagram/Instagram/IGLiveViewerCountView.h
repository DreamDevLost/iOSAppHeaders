//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface IGLiveViewerCountView : UIControl
{
    _Bool _showBackground;
    long long _viewerCount;
    UIImageView *_eyeImageView;
    UILabel *_viewerCountLabel;
}

@property(nonatomic) _Bool showBackground; // @synthesize showBackground=_showBackground;
@property(readonly, nonatomic) UILabel *viewerCountLabel; // @synthesize viewerCountLabel=_viewerCountLabel;
@property(readonly, nonatomic) UIImageView *eyeImageView; // @synthesize eyeImageView=_eyeImageView;
@property(nonatomic) long long viewerCount; // @synthesize viewerCount=_viewerCount;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showBackground:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

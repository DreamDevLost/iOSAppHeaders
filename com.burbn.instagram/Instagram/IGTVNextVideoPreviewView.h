//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, IGRemoteImageView, UILabel;

@interface IGTVNextVideoPreviewView : UIView
{
    UILabel *_descriptionLabel;
    CAShapeLayer *_borderLayer;
    IGRemoteImageView *_previewImageView;
}

@property(readonly, nonatomic) IGRemoteImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


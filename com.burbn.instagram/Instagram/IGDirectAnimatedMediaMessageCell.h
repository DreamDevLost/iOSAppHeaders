//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageCell.h"

@class IGDirectAnimatedMediaMp4View, IGDirectAnimatedMediaView, UIImageView, UIView;

@interface IGDirectAnimatedMediaMessageCell : IGDirectMessageCell
{
    UIView *_contentViewForHeartAnimation;
    IGDirectAnimatedMediaView *_animatedMediaView;
    UIImageView *_attributionView;
    UIImageView *_diceView;
    struct CGSize _contentSize;
    IGDirectAnimatedMediaMp4View *_mp4View;
}

+ (_Bool)needsContainerStyling;
@property(readonly, nonatomic) IGDirectAnimatedMediaMp4View *mp4View; // @synthesize mp4View=_mp4View;
- (void).cxx_destruct;
- (id)contentViewForHeartAnimation;
- (void)_configureAnimatedMediaViewWithViewModel:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)messageContentSize;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


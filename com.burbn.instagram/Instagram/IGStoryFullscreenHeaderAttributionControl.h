//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class IGRemoteImageView, NSURL, UIImageView, UILabel;

@interface IGStoryFullscreenHeaderAttributionControl : UIControl
{
    IGRemoteImageView *_iconImageView;
    UIImageView *_accessoryImageView;
    UILabel *_titleLabel;
    unsigned long long _accessoryType;
}

@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) NSURL *iconURL;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


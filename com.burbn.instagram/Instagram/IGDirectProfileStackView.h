//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGDirectProfileStackViewConfiguration, NSArray, NSMutableArray, UILabel;

@interface IGDirectProfileStackView : UIView
{
    NSArray *_profileImageViews;
    NSMutableArray *_profileImageViewPool;
    UILabel *_overflowLabel;
    IGDirectProfileStackViewConfiguration *_configuration;
}

@property(retain, nonatomic) IGDirectProfileStackViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_initOverflowLabelIfNeeded;
- (void)_initProfileImageViewPoolIfNeeded;
- (id)_dequeueProfilePictureImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end


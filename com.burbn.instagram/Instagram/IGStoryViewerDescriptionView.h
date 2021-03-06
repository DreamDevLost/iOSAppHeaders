//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, UILabel;

@interface IGStoryViewerDescriptionView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_dotSeparator;
    UIView *_followButton;
    UIView *_subtitleView;
}

+ (id)bodyDetailStringFromString:(id)arg1;
+ (id)emphasizedBodyStringFromString:(id)arg1;
@property(retain, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
- (void).cxx_destruct;
- (void)prepareDescriptionViewForReuse;
- (void)setFollowButton:(id)arg1;
- (void)setDescriptionTextColor:(id)arg1 subtitleAlpha:(double)arg2;
@property(copy, nonatomic) NSAttributedString *subtitle;
@property(copy, nonatomic) NSAttributedString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


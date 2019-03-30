//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface IGFilterTrayManagerFilterCell : UICollectionViewCell
{
    Class _filterClass;
    UILabel *_textLabel;
    UIImageView *_visibleIndicator;
    UIButton *_rearrangeControl;
    UIImageView *_filterIconView;
    UIImageView *_filterFrameView;
    NSString *_imageName;
}

@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImageView *filterFrameView; // @synthesize filterFrameView=_filterFrameView;
@property(retain, nonatomic) UIImageView *filterIconView; // @synthesize filterIconView=_filterIconView;
@property(retain, nonatomic) UIButton *rearrangeControl; // @synthesize rearrangeControl=_rearrangeControl;
@property(retain, nonatomic) UIImageView *visibleIndicator; // @synthesize visibleIndicator=_visibleIndicator;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
- (void).cxx_destruct;
- (void)_updateSelectionStyle;
- (id)LX_snapshotView;
- (struct CGRect)LX_rearrangeHotspot;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(retain, nonatomic) UIImage *filterIcon;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

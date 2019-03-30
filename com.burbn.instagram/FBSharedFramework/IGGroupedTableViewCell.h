//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGTableViewCell.h>

@class IGSwitch, NSArray, NSString, UIColor, UISlider, UIView;

@interface IGGroupedTableViewCell : IGTableViewCell
{
    UIView *_topBorder;
    UIView *_leftBorder;
    UIView *_bottomBorder;
    UIView *_rightBorder;
    UISlider *_paramRangeSlider;
    IGSwitch *_toggleSwitch;
    _Bool _enabled;
    _Bool _actionable;
    _Bool _showTopBorder;
    _Bool _showBottomBorder;
    _Bool _showToggleButton;
    _Bool _adjustsFontSizeToFitWidth;
    UIColor *_defaultBackgroundColor;
    id <IGGroupedTableViewCellDelegate> _changeDelegate;
    long long _sidePadding;
    UIColor *_defaultTextColor;
    NSString *_paramName;
    NSString *_defaultParamValue;
    NSArray *_paramRange;
    struct UIEdgeInsets _bottomBorderInsets;
    struct UIEdgeInsets _topBorderInsets;
}

@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) _Bool showToggleButton; // @synthesize showToggleButton=_showToggleButton;
@property(copy, nonatomic) NSArray *paramRange; // @synthesize paramRange=_paramRange;
@property(copy, nonatomic) NSString *defaultParamValue; // @synthesize defaultParamValue=_defaultParamValue;
@property(copy, nonatomic) NSString *paramName; // @synthesize paramName=_paramName;
@property(retain, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(nonatomic) struct UIEdgeInsets topBorderInsets; // @synthesize topBorderInsets=_topBorderInsets;
@property(nonatomic) struct UIEdgeInsets bottomBorderInsets; // @synthesize bottomBorderInsets=_bottomBorderInsets;
@property(nonatomic) _Bool showBottomBorder; // @synthesize showBottomBorder=_showBottomBorder;
@property(nonatomic) _Bool showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(nonatomic) long long sidePadding; // @synthesize sidePadding=_sidePadding;
@property(nonatomic) _Bool actionable; // @synthesize actionable=_actionable;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <IGGroupedTableViewCellDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
- (void).cxx_destruct;
- (void)configureCellWithParamName:(id)arg1 defaultParamValue:(id)arg2 paramRange:(id)arg3;
- (void)_sliderValueChanged:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLabelStyles;
- (void)_applySelectedStyle:(_Bool)arg1;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

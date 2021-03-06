//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class FBTimer, NSString, UIColor, UIImageView, UILabel, UIView;

@interface IGLeftAlignedFullWidthCTAButton : UIButton
{
    NSString *_primaryText;
    UIColor *_filledInBackgroundColor;
    NSString *_secondaryText;
    unsigned long long _buttonState;
    unsigned long long _accessoryPosition;
    UIView *_bottomHairline;
    UILabel *_destinationLabel;
    UIImageView *_rightAccessoryImageView;
    FBTimer *_hideCollectionUpsellTimer;
    NSString *_rightAccessoryImageName;
    UIColor *_rightAccessoryImageDefaultColor;
    struct UIEdgeInsets _tappableAreaInsets;
}

@property(retain, nonatomic) UIColor *rightAccessoryImageDefaultColor; // @synthesize rightAccessoryImageDefaultColor=_rightAccessoryImageDefaultColor;
@property(retain, nonatomic) NSString *rightAccessoryImageName; // @synthesize rightAccessoryImageName=_rightAccessoryImageName;
@property(retain, nonatomic) FBTimer *hideCollectionUpsellTimer; // @synthesize hideCollectionUpsellTimer=_hideCollectionUpsellTimer;
@property(readonly, nonatomic) UIImageView *rightAccessoryImageView; // @synthesize rightAccessoryImageView=_rightAccessoryImageView;
@property(readonly, nonatomic) UILabel *destinationLabel; // @synthesize destinationLabel=_destinationLabel;
@property(readonly, nonatomic) UIView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(nonatomic) struct UIEdgeInsets tappableAreaInsets; // @synthesize tappableAreaInsets=_tappableAreaInsets;
@property(nonatomic) unsigned long long accessoryPosition; // @synthesize accessoryPosition=_accessoryPosition;
@property(nonatomic) unsigned long long buttonState; // @synthesize buttonState=_buttonState;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) UIColor *filledInBackgroundColor; // @synthesize filledInBackgroundColor=_filledInBackgroundColor;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)_getIconImageTintColor;
- (void)_configureBackgroundColorInHighlightedState;
- (void)_configureRightAccessoryImageView;
- (void)_configureTextVisualsForFilledInState;
- (void)_configureVisualsForFilledInState;
- (void)_configureTextVisualsForDefaultState;
- (void)_configureVisualsForDefaultState;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateRightAccessoryColor:(id)arg1;
- (void)updateDestinationText:(id)arg1;
- (void)_animateToButtonState:(unsigned long long)arg1 duration:(double)arg2;
- (void)setButtonState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)isCTAVisible;
- (_Bool)_isDestinationAdLabelVisible;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVisualEffectView.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface IGGatedMediaView : UIVisualEffectView
{
    _Bool _validateUserAge;
    id <IGGatedMediaViewDelegate> _delegate;
    UIImageView *_hiddenIcon;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_lineView;
    UIButton *_buttonOne;
    UIButton *_buttonTwo;
    unsigned long long _gatingType;
    unsigned long long _numButtons;
}

@property(nonatomic) unsigned long long numButtons; // @synthesize numButtons=_numButtons;
@property(nonatomic) _Bool validateUserAge; // @synthesize validateUserAge=_validateUserAge;
@property(nonatomic) unsigned long long gatingType; // @synthesize gatingType=_gatingType;
@property(readonly, nonatomic) UIButton *buttonTwo; // @synthesize buttonTwo=_buttonTwo;
@property(readonly, nonatomic) UIButton *buttonOne; // @synthesize buttonOne=_buttonOne;
@property(readonly, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *hiddenIcon; // @synthesize hiddenIcon=_hiddenIcon;
@property(nonatomic) __weak id <IGGatedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithGating:(id)arg1;
- (void)_didTapButton:(id)arg1;
- (id)_createButtonWithSelector:(SEL)arg1;
- (id)_createLineView;
- (id)_createHiddenIcon;
- (id)_createDescriptionLabel;
- (id)_createTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRadioButtonView, UILabel;

@interface IGGDPRConsentTextWithRadioButtonView : UIView
{
    UILabel *_radioButtonText;
    IGRadioButtonView *_radioButton;
    IGRadioButtonView *_clearRadioButton;
    id <IGGDPRConsentTextWithRadioButtonDelegate> _delegate;
    long long _index;
}

@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <IGGDPRConsentTextWithRadioButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapOnTextWithRadioButton;
- (void)setSelected:(_Bool)arg1;
- (void)configureWithRadioButtonText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2;

@end


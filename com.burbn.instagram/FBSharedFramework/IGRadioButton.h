//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class IGRadioButtonView;

@interface IGRadioButton : UIButton
{
    IGRadioButtonView *_selectedButtonView;
    IGRadioButtonView *_unselectedRadioView;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface IGTwoFactorSingleCodeFieldView : UIView
{
    UILabel *_digitLabel;
    UIView *_underLineView;
}

+ (struct CGSize)preferredSize;
- (void).cxx_destruct;
- (void)_shouldShowCode:(_Bool)arg1;
- (void)deleteDigit;
- (void)addDigit:(id)arg1;
- (id)digit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


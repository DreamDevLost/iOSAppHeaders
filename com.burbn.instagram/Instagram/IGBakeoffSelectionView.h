//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface IGBakeoffSelectionView : UIView
{
    id <IGBakeoffSelectionViewDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_skipButton;
    unsigned long long _viewedState;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_skipButtonTapped:(id)arg1;
- (void)_selectionButtonTapped:(id)arg1;
- (void)updateToViewedState:(unsigned long long)arg1;
- (id)_selectionButtonWithTitle:(id)arg1 viewedState:(unsigned long long)arg2;
- (void)_setupSubviewsForViewedState:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;

@end


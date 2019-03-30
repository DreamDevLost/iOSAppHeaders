//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton;

@interface IGGenericSurveyButtonCell : UICollectionViewCell
{
    UIButton *_confirmButton;
    id <IGGenericSurveyButtonCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGGenericSurveyButtonCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapSubmit;
- (void)updateButtonState:(unsigned long long)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGLabel, NSString, UIButton;

@interface IGHashtagCreationTitleView : UIView
{
    IGLabel *_titleLabel;
    UIButton *_xButton;
    id <IGHashtagCreationTitleViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGHashtagCreationTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapXButton:(id)arg1;
- (void)layoutSubviews;
- (void)_setupXButton;
- (void)_setupTitleLabel;
@property(readonly, nonatomic) NSString *titleText;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


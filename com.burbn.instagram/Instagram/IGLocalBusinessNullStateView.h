//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTextButton, UILabel;

@interface IGLocalBusinessNullStateView : UIView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGTextButton *_actionButton;
    id <IGLocalBusinessNullStateViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLocalBusinessNullStateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)_didPressActionButton;
- (void)_setupActionButton;
- (void)_setupSubtitle;
- (void)_setupTitle;
- (void)_setupContentView;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


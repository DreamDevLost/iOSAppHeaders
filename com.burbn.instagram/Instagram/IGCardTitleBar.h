//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGBrowserProfileInfoHeaderViewDelegate.h"

@class CAShapeLayer, IGBrowserProfileInfoHeaderView, IGBrowserTitleBarViewModel, IGTapButton, NSString, UILabel, UIProgressView;

@interface IGCardTitleBar : UIView <IGBrowserProfileInfoHeaderViewDelegate>
{
    IGBrowserTitleBarViewModel *_viewModel;
    _Bool _supportProfileInfoHeaderView;
    IGTapButton *_leftButton;
    IGTapButton *_rightButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIProgressView *_progressView;
    CAShapeLayer *_backdrop;
    _Bool _hasRoundedCorner;
    _Bool _showBarButtons;
    NSString *_title;
    NSString *_subtitle;
    double _progressValue;
    double _profileInfoHeaderViewTopOffset;
    double _preferredHeight;
    id <IGCardTitleBarDelegate> _delegate;
    IGBrowserProfileInfoHeaderView *_profileInfoHeaderView;
}

@property(readonly, nonatomic) IGBrowserProfileInfoHeaderView *profileInfoHeaderView; // @synthesize profileInfoHeaderView=_profileInfoHeaderView;
@property(nonatomic, getter=hasShownBarButton) _Bool showBarButtons; // @synthesize showBarButtons=_showBarButtons;
@property(nonatomic) _Bool hasRoundedCorner; // @synthesize hasRoundedCorner=_hasRoundedCorner;
@property(nonatomic) __weak id <IGCardTitleBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(nonatomic) double profileInfoHeaderViewTopOffset; // @synthesize profileInfoHeaderViewTopOffset=_profileInfoHeaderViewTopOffset;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)didTapProfileInfoHeaderView:(id)arg1 withInteractionSource:(unsigned long long)arg2;
- (double)_minimumHeight;
- (void)_updateTitleAndSubTitleAlpha:(double)arg1;
- (void)_didTapRightButton;
- (void)_didTapLeftButton;
- (void)updateAlphaForSubviewsExceptCloseButton:(double)arg1;
- (void)layoutSubviews;
- (void)_setupSubviewsWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

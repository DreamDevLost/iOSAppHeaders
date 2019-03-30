//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTombstoneConfiguration, NSString, UIButton, UIImageView, UILabel;

@interface IGTombstoneView : UIView
{
    UIImageView *_checkmarkImageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_footerViewSeperator;
    UIView *_reportButtonSeperator;
    UIView *_bottomLineSeperator;
    double _kTombstoneFooterSeperatorWidth;
    long long _tombstoneReportType;
    id <IGFeedTheme> _theme;
    NSString *_username;
    IGTombstoneConfiguration *_tombstoneConfig;
    UIButton *_dismissButton;
    UIButton *_mainButton;
    UIButton *_reportButton;
    double _extraMainButtonBottomPadding;
}

@property(nonatomic) double extraMainButtonBottomPadding; // @synthesize extraMainButtonBottomPadding=_extraMainButtonBottomPadding;
@property(readonly, nonatomic) long long tombstoneReportType; // @synthesize tombstoneReportType=_tombstoneReportType;
@property(readonly, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(readonly, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createFooterViewSeperator;
- (id)_createReportButton;
- (id)_createMainButton;
- (id)_createDismissButton;
- (id)_createMessageLabel;
- (id)_createTitleLabel;
- (id)_createCheckmarkImageView;
- (void)_createCheckmarkAndText;
- (void)configureForTombstoneReportType:(long long)arg1 feedTheme:(id)arg2 username:(id)arg3;
- (void)configureForTombstoneReportType:(long long)arg1 feedTheme:(id)arg2;
- (id)initWithReportType:(long long)arg1 feedTheme:(id)arg2 username:(id)arg3;

@end


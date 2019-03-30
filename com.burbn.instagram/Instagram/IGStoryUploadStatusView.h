//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCircularProgressView, IGStoryUploadStatusViewConfig, IGTapButton, UILabel;

@interface IGStoryUploadStatusView : UIView
{
    IGStoryUploadStatusViewConfig *_config;
    unsigned long long _status;
    IGTapButton *_errorButton;
    IGCircularProgressView *_progressView;
    UILabel *_statusLabel;
}

@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(readonly, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) IGTapButton *errorButton; // @synthesize errorButton=_errorButton;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateForStatusChange;
@property(nonatomic) double progress;
- (void)configureWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

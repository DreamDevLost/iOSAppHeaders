//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTextButton, UIImageView, UILabel;

@interface IGDogfooderThankYouView : UIView
{
    UILabel *_thankYouLabel;
    IGTextButton *_dismissButton;
    IGTextButton *_retryButton;
    IGTextButton *_troubleshootButton;
    long long _dismissSecondsRemaining;
    id <IGDogfooderThankYouViewDelegate> _delegate;
    UIView *_quickHelpView;
    UIImageView *_installStuckImage;
    UIImageView *_certificateImage;
    UILabel *_installStuckLabel;
    UILabel *_certificateLabel;
}

- (void).cxx_destruct;
- (void)_onTroubleshootButton:(id)arg1;
- (void)_onDismissButton:(id)arg1;
- (void)_onRetryButton:(id)arg1;
- (void)_updateDismiss;
- (void)_dismissTick;
- (void)_initDismissTimer;
- (void)layoutSubviews;
- (id)initWithViewDelegate:(id)arg1;

@end


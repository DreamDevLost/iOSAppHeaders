//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGLiveBroadcastEndingSummaryView, IGSwitch, IGTapButton, UIButton, UILabel, UIVisualEffectView;

@interface IGLiveBroadcastEndingView : UIView
{
    _Bool _viewerListFetched;
    id <IGLiveBroadcastEndingViewDelegate> _delegate;
    IGSwitch *_shareToPostLiveSwitch;
    IGLiveBroadcastEndingSummaryView *_summaryView;
    UIButton *_doneButton;
    IGTapButton *_saveToCameRollButton;
    UIButton *_supportResourcesButton;
    UIVisualEffectView *_blurBgView;
    UILabel *_shareToPostLiveDescriptionLabel;
    long long _viewState;
}

@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(readonly, nonatomic) UILabel *shareToPostLiveDescriptionLabel; // @synthesize shareToPostLiveDescriptionLabel=_shareToPostLiveDescriptionLabel;
@property(nonatomic, getter=isViewerListFetched) _Bool viewerListFetched; // @synthesize viewerListFetched=_viewerListFetched;
@property(readonly, nonatomic) UIVisualEffectView *blurBgView; // @synthesize blurBgView=_blurBgView;
@property(readonly, nonatomic) UIButton *supportResourcesButton; // @synthesize supportResourcesButton=_supportResourcesButton;
@property(readonly, nonatomic) IGTapButton *saveToCameRollButton; // @synthesize saveToCameRollButton=_saveToCameRollButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) IGLiveBroadcastEndingSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(readonly, nonatomic) IGSwitch *shareToPostLiveSwitch; // @synthesize shareToPostLiveSwitch=_shareToPostLiveSwitch;
@property(nonatomic) __weak id <IGLiveBroadcastEndingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_shareToPostLiveSwitchToggled:(_Bool)arg1;
- (void)_doneButtonTapped;
- (void)_supportResourcesButtonTapped;
- (void)_saveToCameraRollTapped;
- (void)focusAccessibilityCursorOnSaveButton;
@property(nonatomic, getter=isSaveButtonEnabled) _Bool saveButtonEnabled;
- (void)setFinalViewersList:(id)arg1 withFinalViewerCount:(long long)arg2 module:(id)arg3;
- (void)_configureDoneButtonWithString:(id)arg1;
- (void)_updateViewState;
- (void)_updateButton:(id)arg1 imageTitleSpace:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 showSaveToCamera:(_Bool)arg2 showSupportResources:(_Bool)arg3;

@end


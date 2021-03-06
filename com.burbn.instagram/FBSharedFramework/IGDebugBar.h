//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGNetworkerOperationsListener.h"

@class IGNetworker, IGTapButton, IGVideoDebugController, NSMutableArray, NSString, UILabel;

@interface IGDebugBar : UIView <IGNetworkerOperationsListener>
{
    IGNetworker *_sharedNetworker;
    NSMutableArray *_labels;
    UILabel *_requestCounter;
    UILabel *_transferRateIndicator;
    UILabel *_videoPlaybackHistory;
    UILabel *_videoPlayerUsageCount;
    IGTapButton *_networkMonitorButton;
    IGTapButton *_videoDebugButton;
    IGTapButton *_consoleCopyButton;
    IGVideoDebugController *_videoDebugController;
    UILabel *_logItemLabel;
    NSMutableArray *_pendingMessages;
    long long _networkMonitorStyle;
    id <IGDebugBarDelegate> _delegate;
    IGTapButton *_toggleVideoDebugBarButton;
}

+ (id)_debugBarFontForSize:(double)arg1;
+ (id)_newStatusBarLabel;
@property(readonly, nonatomic) IGTapButton *toggleVideoDebugBarButton; // @synthesize toggleVideoDebugBarButton=_toggleVideoDebugBarButton;
@property(nonatomic) __weak id <IGDebugBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_networkSpeedChanged;
- (void)_playerUsageDidChange:(id)arg1;
- (void)_playbackRateChanged:(id)arg1;
- (void)_updateTransferLabel;
- (void)networkOperationsDidChange;
- (void)_doObserveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_consoleCopyText;
- (void)_toggleNetworkMonitor;
- (void)_toggleVideoDebugConsole;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)_hideMessage;
- (void)_doShowMessage:(id)arg1 type:(long long)arg2;
- (void)_showMessage:(id)arg1 type:(long long)arg2;
- (void)_messageReceived:(id)arg1;
- (void)_buildConsoleCopyButton;
- (void)_buildVideoDebugConsoleButton;
- (void)_buildNetworkMonitorButton;
- (void)_buildToggleVideoDebugButton;
- (void)_buildLogView;
- (void)_buildVideoPlayerUsageCount;
- (void)_buildVideoPlaybackHistory;
- (void)_buildTransferIndicator;
- (void)_buildRequestCounter;
- (void)_sizeStatusBarLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


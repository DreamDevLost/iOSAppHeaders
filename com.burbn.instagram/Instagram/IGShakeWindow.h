//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "IGRageShakeAnnotationViewControllerDelegate.h"
#import "IGRageShakeCaptureOverlayDelegate.h"
#import "IGReportPopoverCaptureProtocol.h"
#import "IGReportStatusBarRageShakeDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class IGBugReportVideoRecorder, IGDebugTouchView, IGNavigationController, IGShakeWindowEventLogger, IGThermalStateMonitor, IGUserSession, NSData, NSString, UIView;

@interface IGShakeWindow : UIWindow <UIAlertViewDelegate, IGReportPopoverCaptureProtocol, UINavigationControllerDelegate, UIImagePickerControllerDelegate, IGRageShakeAnnotationViewControllerDelegate, IGRageShakeCaptureOverlayDelegate, IGReportStatusBarRageShakeDelegate>
{
    _Bool _isReporting;
    IGUserSession *_userSession;
    IGThermalStateMonitor *_thermalStateMonitor;
    IGShakeWindowEventLogger *_logger;
    double _motionStart;
    NSData *_screenshotImageData;
    IGDebugTouchView *_debugTouchView;
    IGNavigationController *_rageShakeNavController;
    UIWindow *_overlayWindow;
    UIView *_safeAreaView;
    IGBugReportVideoRecorder *_videoRecorder;
}

- (void).cxx_destruct;
- (void)_showFileLogs;
- (void)_logMemoryAllocations;
- (void)_takeScreenshot;
- (id)_presentingViewController;
- (void)_openDeveloperToolsKeyCommandAction;
- (void)_refreshExperimentsKeyCommandAction;
- (void)toggleSafeArea;
- (void)_hideBloksDemo:(id)arg1;
- (void)_showBloksDemo;
- (void)showPerfExplorer;
- (void)showBrowserDebugger;
- (void)showTestSettings;
- (void)showLoggedClientMqttEvents;
- (void)showAnalyticsEvents;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)rageShakeAnnotationViewController:(id)arg1 didDismissWithChange:(_Bool)arg2 image:(id)arg3;
- (void)onRageShakeCaptureCancel:(id)arg1;
- (void)onRageShakeCaptureStopVideo:(id)arg1;
- (void)onRageShakeCaptureVideo:(id)arg1;
- (void)onRageShakeCaptureImage:(id)arg1;
- (void)_stopRecordingVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_onVideoRecordComplitionWithError:(id)arg1;
- (_Bool)_beginRecordingVideo;
- (void)_hideOverlayAndShowReportPopover;
- (void)hideAndShowVideoURL:(id)arg1;
- (void)hideAndShowEditorForImage:(id)arg1;
- (void)showPhotoLibraryForReportPopover:(id)arg1;
- (void)_showUIForCaptureMode:(long long)arg1;
- (void)hideAndShowVideoCaptureForReportPopover:(id)arg1;
- (void)hideAndShowCaptureForReportPopover:(id)arg1;
- (void)dismissReportPopover:(id)arg1 didSendReport:(_Bool)arg2;
- (void)showRageShakeForStatusBarFailure:(id)arg1 forCrashTaskModel:(id)arg2;
- (void)_showPopOverBugReportWithType:(long long)arg1 withUserSession:(id)arg2 crashTaskModel:(id)arg3;
- (void)_presentReportThankYouAlert;
- (void)reportBug;
- (void)_attachCurrentCameraInformationToRageShakeReport:(id)arg1;
- (void)_showBugReporterForType:(long long)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showDebugMenu;
- (void)sendEvent:(id)arg1;
- (void)_onFlexTapGesture:(id)arg1;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)keyCommands;
- (void)setRootViewController:(id)arg1;
- (void)setUserSession:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 thermalStateMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

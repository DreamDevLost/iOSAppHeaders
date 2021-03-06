//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGTVViewerConfig, IGTVViewerFocusedComment, IGTVViewerGuideType, IGTVViewerLoggingContext, IGUserSession, NSNumber, NSString, UIView, UIViewController, UIViewController<IGGestureHandler>, UIViewController<IGMinimizableViewController>;

@protocol IGTVIntf
+ (UIViewController<IGMinimizableViewController> *)pictureInPictureViewControllerWithUserSession:(IGUserSession *)arg1 tvGuideDataSource:(id <IGTVGuideDataSource>)arg2 initialMediaPK:(NSString *)arg3 initialSeekTime:(NSNumber *)arg4 loggingContext:(IGTVViewerLoggingContext *)arg5;
+ (UIViewController *)browseViewControllerWithUserSession:(IGUserSession *)arg1 initialMediaPK:(NSString *)arg2 initialMediaSeekTime:(NSNumber *)arg3 analyticsModule:(NSString *)arg4 entryAction:(NSString *)arg5;
+ (UIViewController<IGGestureHandler> *)tvViewerViewControllerForMediaPK:(NSString *)arg1 mediaSeekTime:(NSNumber *)arg2 focusedComment:(IGTVViewerFocusedComment *)arg3 pauseMediaOnCompletion:(_Bool)arg4 disableSwipeToSwitchVideo:(_Bool)arg5 tvGuideDataSource:(id <IGTVGuideDataSource>)arg6 guideType:(IGTVViewerGuideType *)arg7 userSession:(IGUserSession *)arg8 fromView:(UIView *)arg9 analyticsModule:(NSString *)arg10 entryAction:(NSString *)arg11 transitionController:(id <IGInteractiveDismissTransitionControllerType>)arg12;
+ (UIViewController<IGGestureHandler> *)tvViewerViewControllerForMediaPK:(NSString *)arg1 mediaSeekTime:(NSNumber *)arg2 focusedComment:(IGTVViewerFocusedComment *)arg3 pauseMediaOnCompletion:(_Bool)arg4 disableSwipeToSwitchVideo:(_Bool)arg5 userSession:(IGUserSession *)arg6 fromView:(UIView *)arg7 analyticsModule:(NSString *)arg8 entryAction:(NSString *)arg9 transitionController:(id <IGInteractiveDismissTransitionControllerType>)arg10;
+ (UIViewController<IGGestureHandler> *)tvViewerViewControllerForMediaPK:(NSString *)arg1 mediaSeekTime:(NSNumber *)arg2 pauseMediaOnCompletion:(_Bool)arg3 disableSwipeToSwitchVideo:(_Bool)arg4 userSession:(IGUserSession *)arg5 fromView:(UIView *)arg6 analyticsModule:(NSString *)arg7 entryAction:(NSString *)arg8;
+ (UIViewController<IGGestureHandler> *)tvViewerViewControllerForMediaPK:(NSString *)arg1 mediaSeekTime:(NSNumber *)arg2 focusedComment:(IGTVViewerFocusedComment *)arg3 userSession:(IGUserSession *)arg4 fromView:(UIView *)arg5 analyticsModule:(NSString *)arg6 entryAction:(NSString *)arg7;
+ (UIViewController<IGGestureHandler> *)tvViewerViewControllerWithUserSession:(IGUserSession *)arg1 tvGuideDataSource:(id <IGTVGuideDataSource>)arg2 config:(IGTVViewerConfig *)arg3 loggingContext:(IGTVViewerLoggingContext *)arg4 presentFromView:(UIView *)arg5 transitionController:(id <IGInteractiveDismissTransitionControllerType>)arg6;
+ (UIViewController<IGGestureHandler> *)tvViewerViewControllerWithUserSession:(IGUserSession *)arg1 tvGuideDataSource:(id <IGTVGuideDataSource>)arg2 config:(IGTVViewerConfig *)arg3 loggingContext:(IGTVViewerLoggingContext *)arg4 presentFromView:(UIView *)arg5;
@end


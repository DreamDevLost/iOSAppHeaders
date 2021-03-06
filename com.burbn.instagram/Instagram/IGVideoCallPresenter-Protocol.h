//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGDirectPublishedThread, IGUserSession, IGVideoCallManager, IGVideoCallSession, NSString;

@protocol IGVideoCallPresenter
- (_Bool)hasMaximizedVideoCallInUserSession:(IGUserSession *)arg1;
- (void)dismissCurrentCallInUserSession:(IGUserSession *)arg1;
- (void)dismissCurrentCallAfterTimeoutInUserSession:(IGUserSession *)arg1;
- (void)presentVideoCallWithVideoCallSession:(IGVideoCallSession *)arg1 userSession:(IGUserSession *)arg2 videoCallManager:(IGVideoCallManager *)arg3 entryPoint:(long long)arg4 resumeCall:(_Bool)arg5;
- (void)presentVideoCallForThreadId:(NSString *)arg1 thread:(IGDirectPublishedThread *)arg2 userSession:(IGUserSession *)arg3 videoCallManager:(IGVideoCallManager *)arg4 entryPoint:(long long)arg5 resumeCall:(_Bool)arg6;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectMainInboxAnalyticsLogger, IGUserSession;

@interface IGDirectNewMessageCoordinator : NSObject
{
    IGDirectMainInboxAnalyticsLogger *_analyticsLogger;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGDirectMainInboxAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (void).cxx_destruct;
- (void)presentCameraFromNavigationController:(id)arg1 entryPoint:(unsigned long long)arg2 cameraPresentationManager:(id)arg3 cameraPresentationDelegate:(id)arg4 cameraNavigationDelegate:(id)arg5 anchorView:(id)arg6;
- (void)pushComposerThreadVCFromNavigationController:(id)arg1 threadCreationDelegate:(id)arg2 entryPoint:(unsigned long long)arg3;
- (id)initWithAnalyticsLogger:(id)arg1 userSession:(id)arg2;

@end


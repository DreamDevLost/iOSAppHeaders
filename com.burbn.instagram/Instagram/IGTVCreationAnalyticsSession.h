//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGTVCreationAnalyticsSession : NSObject
{
    IGUserSession *_userSession;
    NSString *_sessionId;
    NSString *_module;
}

- (void).cxx_destruct;
- (id)_eventWithName:(id)arg1;
- (void)logComposerEnd:(id)arg1;
- (void)logPostVideoWithDidEnableFeedPreview:(_Bool)arg1 sharedToFacebookDefaultStatus:(_Bool)arg2 sharedToFacebook:(_Bool)arg3;
- (void)logEditCoverComplete:(id)arg1;
- (void)logEditCoverStarted;
- (void)logConfirmVideo;
- (void)logDismissVideo;
- (void)logVideoSelected:(id)arg1 action:(id)arg2;
- (void)logComposerStartFromAction:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end


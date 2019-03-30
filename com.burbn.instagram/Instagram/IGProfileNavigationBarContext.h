//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUser, IGUserSession, NSString;

@interface IGProfileNavigationBarContext : NSObject
{
    NSString *_primaryName;
    long long _privacyStatus;
    _Bool _isVerified;
    _Bool _isMainProfileSurface;
    _Bool _isCurrentUser;
    struct IGProfileNavButtonExperiments _experiments;
    IGUserSession *_userSession;
    IGUser *_user;
    NSString *_analyticsModule;
}

@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) struct IGProfileNavButtonExperiments experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) _Bool isMainProfileSurface; // @synthesize isMainProfileSurface=_isMainProfileSurface;
@property(readonly, nonatomic) __weak IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)update;
- (_Bool)shouldUpdate;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 isMainProfileSurface:(_Bool)arg3 navBarExperiments:(struct IGProfileNavButtonExperiments)arg4 analyticsModule:(id)arg5;

@end

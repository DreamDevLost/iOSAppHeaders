//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGPaymentsLogger, IGUserSession;

@interface IGPaymentsIntentTarget : FBGeneratedIntentTarget
{
    id <IGHybridWebViewConfig> _config;
    IGPaymentsLogger *_logger;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGPaymentsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <IGHybridWebViewConfig> config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1 logger:(id)arg2 userSession:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGCTAPresenterContext, IGUserSession, NSString;

@interface IGVideoViewCountIntentTarget : FBGeneratedIntentTarget
{
    NSString *_contextPK;
    IGUserSession *_userSession;
    IGCTAPresenterContext *_ctaPresenterContext;
}

@property(readonly, nonatomic) IGCTAPresenterContext *ctaPresenterContext; // @synthesize ctaPresenterContext=_ctaPresenterContext;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *contextPK; // @synthesize contextPK=_contextPK;
- (void).cxx_destruct;
- (id)initWithContextPK:(id)arg1 userSession:(id)arg2 ctaPresenterContext:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessAttributeSyncInfo, IGUserSession, NSString;

@interface IGBusinessAttributeSyncFlowContext : NSObject
{
    NSString *_entryPoint;
    IGUserSession *_userSession;
    long long _flowStartStep;
    IGBusinessAttributeSyncInfo *_dataModel;
}

@property(readonly, nonatomic) IGBusinessAttributeSyncInfo *dataModel; // @synthesize dataModel=_dataModel;
@property(readonly, nonatomic) long long flowStartStep; // @synthesize flowStartStep=_flowStartStep;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void).cxx_destruct;
- (id)initWithEntryPoint:(id)arg1 userSession:(id)arg2 flowStartStep:(long long)arg3 dataModel:(id)arg4;

@end

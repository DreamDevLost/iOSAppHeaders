//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTwoFactorStatusInfo, NSString;

@interface IGTwoFactorSetupFlowContext : NSObject
{
    _Bool _isAuthAppSetUpManually;
    NSString *_confirmingPhoneNumber;
    NSString *_entryPoint;
    IGTwoFactorStatusInfo *_statusInfo;
}

@property(nonatomic) _Bool isAuthAppSetUpManually; // @synthesize isAuthAppSetUpManually=_isAuthAppSetUpManually;
@property(readonly, nonatomic) IGTwoFactorStatusInfo *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) NSString *confirmingPhoneNumber; // @synthesize confirmingPhoneNumber=_confirmingPhoneNumber;
- (void).cxx_destruct;
- (id)initWithStatusInfo:(id)arg1 entryPoint:(id)arg2;

@end


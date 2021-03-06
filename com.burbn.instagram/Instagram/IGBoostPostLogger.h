//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGBoostPostLogger : NSObject
{
    NSString *_entryPoint;
    NSString *_waterfallID;
    IGUserSession *_userSession;
}

+ (id)loggerWithEntryPoint:(id)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 additionalFields:(id)arg2;
- (void)didEnterErrorPromoteUnavailable:(id)arg1;
- (void)failToLoadMediaSelectionViewWithErrorMessage:(id)arg1;
- (void)didEnterMediaSelectionView;
- (void)didTapClose;
- (void)didStartLinkAccountStepWithMediaId:(id)arg1;
- (void)didStartFBLoginStepWithMediaId:(id)arg1;
- (void)didTapEntryPointWithFeedItem:(id)arg1 couponOfferId:(id)arg2;
- (void)didTapEntryPoint;
- (void)didTapEntryPointWithAd4AdItem:(id)arg1;
- (id)_initWithEntryPoint:(id)arg1 userSession:(id)arg2;

@end


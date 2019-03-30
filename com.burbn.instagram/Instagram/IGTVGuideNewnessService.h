//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGAnnouncer, IGUserDefaults, NSArray, NSString;

@interface IGTVGuideNewnessService : NSObject <IGUserSessionObject>
{
    IGUserDefaults *_sessionUserDefaults;
    _Bool _multipleMediaEnabled;
    _Bool _bannerEnabled;
    IGAnnouncer *_announcer;
    NSArray *_badgingTooltipTokens;
    _Bool _tvResponseIsNew;
}

@property(nonatomic) _Bool tvResponseIsNew; // @synthesize tvResponseIsNew=_tvResponseIsNew;
- (void).cxx_destruct;
- (id)_badgingTooltipTokensForLastReceivedIdentifier:(id)arg1;
- (void)_updateNewness;
@property(readonly, nonatomic) NSString *bannerToken;
- (void)updateLastSeenBadgingResponse:(id)arg1;
- (void)updateLastReceivedBadgingResponse:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSessionUserDefaults:(id)arg1 multipleMediaEnabled:(_Bool)arg2 bannerEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

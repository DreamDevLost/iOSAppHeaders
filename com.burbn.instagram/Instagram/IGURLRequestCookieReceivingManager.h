//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCookieManaging.h"

@class NSArray, NSString;

@interface IGURLRequestCookieReceivingManager : NSObject <IGCookieManaging>
{
    _Bool _readBaseSingletonCookies;
    NSArray *_cookies;
}

@property(readonly, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(nonatomic) _Bool readBaseSingletonCookies; // @synthesize readBaseSingletonCookies=_readBaseSingletonCookies;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setCookies:(id)arg1 forURL:(id)arg2;
- (id)getCookiesForURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


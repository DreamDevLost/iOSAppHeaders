//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSMutableSet, NSString;

@interface IGRelatedItemsLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_module;
    NSMutableSet *_loggedImpressions;
}

@property(readonly, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)_configureEvent:(id)arg1 hashtag:(id)arg2;
- (void)_configureEvent:(id)arg1 location:(id)arg2;
- (void)_logTapForLocation:(id)arg1;
- (void)_logTapForHashtag:(id)arg1;
- (void)_logImpressionForLocation:(id)arg1;
- (void)_logImpressionForHashtag:(id)arg1;
- (void)logTapForItem:(id)arg1;
- (void)logImpressionForItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

@end


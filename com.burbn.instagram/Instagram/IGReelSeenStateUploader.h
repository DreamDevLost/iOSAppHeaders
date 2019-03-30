//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class NSString;

@interface IGReelSeenStateUploader : NSObject <IGUserSessionObject>
{
    NSString *_userSessionPK;
    id <IGAPIClient> _networker;
}

@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, copy, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void).cxx_destruct;
- (void)uploadSeenState:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSessionPK:(id)arg1 networker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

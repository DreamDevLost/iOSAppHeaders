//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGExpiringMediaPosting.h"
#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGDate, IGUser, NSString;

@interface IGExpiredFeedItem : FBValueObject <IGExpiringMediaPosting, IGJSONCoding, NSCopying, NSCoding>
{
    IGUser *_user;
    IGDate *_expiringAtDate;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) IGDate *expiringAtDate; // @synthesize expiringAtDate=_expiringAtDate;
@property(readonly, copy, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 expiringAtDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)gating;
- (long long)mediaAudience;
- (id)mediaOverlay;
- (id)video;
- (id)photo;
- (long long)mediaType;
- (id)takenAtDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

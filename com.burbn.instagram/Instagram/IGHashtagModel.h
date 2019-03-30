//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGJSONCoding.h"
#import "IGListDiffable.h"
#import "IGRelatedItemType.h"
#import "IGTagLoggable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGStoryHashtagTapModelMetadata, NSNumber, NSString, NSURL;

@interface IGHashtagModel : NSObject <IGJSONCoding, IGListDiffable, IGRelatedItemType, IGTagLoggable, NSCoding, NSCopying>
{
    _Bool _isNonViolating;
    _Bool _followRestricted;
    NSString *_tagName;
    NSNumber *_mediaCount;
    NSString *_pk;
    NSURL *_profilePicURL;
    NSString *_debugInfo;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)hashtagWithDictionary:(id)arg1;
@property(readonly, nonatomic, getter=isFollowRestricted) _Bool followRestricted; // @synthesize followRestricted=_followRestricted;
@property(readonly, copy, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(readonly, nonatomic) _Bool isNonViolating; // @synthesize isNonViolating=_isNonViolating;
@property(readonly, nonatomic) NSURL *profilePicURL; // @synthesize profilePicURL=_profilePicURL;
@property(readonly, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) NSNumber *mediaCount; // @synthesize mediaCount=_mediaCount;
@property(readonly, copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;
- (long long)entityType;
- (id)entityName;
- (id)entityID;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)relatedItemType;
- (id)relatedItemPath;
- (id)relatedItemId;
- (id)relatedItemDisplayName;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTagName:(id)arg1 mediaCount:(id)arg2 pk:(id)arg3 profilePicURL:(id)arg4 isNonViolating:(_Bool)arg5 debugInfo:(id)arg6 followRestricted:(_Bool)arg7;
- (id)initWithTagName:(id)arg1 mediaCount:(id)arg2;
- (id)initWithTagName:(id)arg1;
@property(retain, nonatomic) IGStoryHashtagTapModelMetadata *storyTapModelMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


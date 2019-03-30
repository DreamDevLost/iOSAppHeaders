//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGTagGroupProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableOrderedSet, NSString;

@interface IGTagGroup : NSObject <IGTagGroupProtocol, NSSecureCoding, NSCopying>
{
    NSMutableOrderedSet *_inTags;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableOrderedSet *inTags; // @synthesize inTags=_inTags;
- (void).cxx_destruct;
- (id)tagForObject:(id)arg1;
- (_Bool)containsTagForObject:(id)arg1;
- (void)removeTag:(id)arg1;
- (void)addTag:(id)arg1;
- (Class)tagClass;
- (id)asDictionary;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

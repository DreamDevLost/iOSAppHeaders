//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectPublishedMessageContent, IGDirectPublishedMessageMetadata, NSArray;

@interface IGDirectPublishedMessage : FBValueObject <NSCopying, NSCoding>
{
    IGDirectPublishedMessageMetadata *_metadata;
    IGDirectPublishedMessageContent *_content;
    NSArray *_likers;
}

@property(readonly, copy, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, copy, nonatomic) IGDirectPublishedMessageContent *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) IGDirectPublishedMessageMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 content:(id)arg2 likers:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end


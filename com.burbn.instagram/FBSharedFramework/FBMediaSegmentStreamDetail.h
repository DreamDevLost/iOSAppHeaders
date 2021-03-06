//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMediaSegmentStreamConfig, NSArray, NSSet, NSString;

@interface FBMediaSegmentStreamDetail : FBValueObject <NSCopying, NSCoding>
{
    FBMediaSegmentStreamConfig *_config;
    NSString *_streamId;
    NSString *_token;
    NSSet *_completedSegments;
    NSArray *_incompleteSegments;
    unsigned long long _totalLength;
}

@property(readonly, nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(readonly, copy, nonatomic) NSArray *incompleteSegments; // @synthesize incompleteSegments=_incompleteSegments;
@property(readonly, copy, nonatomic) NSSet *completedSegments; // @synthesize completedSegments=_completedSegments;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(readonly, copy, nonatomic) FBMediaSegmentStreamConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1 streamId:(id)arg2 token:(id)arg3 completedSegments:(id)arg4 incompleteSegments:(id)arg5 totalLength:(unsigned long long)arg6;
- (id)initWithCoder:(id)arg1;

@end


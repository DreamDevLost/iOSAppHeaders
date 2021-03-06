//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLoadMoreResponseType.h"

@class NSDictionary, NSString;

@interface IGUnifiedTagsListResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_maxId;
    NSDictionary *_tagTypeToTagsMap;
    NSDictionary *_hashtagNameToFollowStatusMap;
}

@property(readonly, nonatomic) NSDictionary *hashtagNameToFollowStatusMap; // @synthesize hashtagNameToFollowStatusMap=_hashtagNameToFollowStatusMap;
@property(readonly, copy, nonatomic) NSDictionary *tagTypeToTagsMap; // @synthesize tagTypeToTagsMap=_tagTypeToTagsMap;
- (void).cxx_destruct;
- (id)maxId;
- (id)initWithTagTypeToTagsMap:(id)arg1 hashtagNameToFollowStatusMap:(id)arg2 maxId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


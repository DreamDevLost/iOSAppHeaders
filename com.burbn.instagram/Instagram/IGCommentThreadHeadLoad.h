//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCommentModel, NSArray, NSString;

@interface IGCommentThreadHeadLoad : NSObject
{
    _Bool _moreCommentsAvailableBelow;
    IGCommentModel *_caption;
    NSArray *_comments;
    NSArray *_commentGroups;
    NSString *_nextMinId;
}

@property(readonly, copy, nonatomic) NSString *nextMinId; // @synthesize nextMinId=_nextMinId;
@property(readonly, nonatomic) _Bool moreCommentsAvailableBelow; // @synthesize moreCommentsAvailableBelow=_moreCommentsAvailableBelow;
@property(readonly, copy, nonatomic) NSArray *commentGroups; // @synthesize commentGroups=_commentGroups;
@property(readonly, copy, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(readonly, nonatomic) IGCommentModel *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 allowCaptionOverwrite:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCommentModel, NSString;

@interface IGCommentThreadReplyInfo : NSObject
{
    IGCommentModel *_replyToComment;
    NSString *_parentCommentPK;
}

+ (id)newWithReplyToComment:(id)arg1 parentCommentPK:(id)arg2;
@property(readonly, copy, nonatomic) NSString *parentCommentPK; // @synthesize parentCommentPK=_parentCommentPK;
@property(readonly, nonatomic) IGCommentModel *replyToComment; // @synthesize replyToComment=_replyToComment;
- (void).cxx_destruct;

@end


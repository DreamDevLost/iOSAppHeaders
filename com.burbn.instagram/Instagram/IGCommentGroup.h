//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGCommentGroupRepliesConnection, IGCommentModel, IGCommentNuxModel, NSArray;

@interface IGCommentGroup : NSObject <IGListDiffable>
{
    IGCommentModel *_parentComment;
    IGCommentGroupRepliesConnection *_repliesConnection;
    NSArray *_viewAllUsers;
    IGCommentNuxModel *_commentNux;
    IGCommentModel *_commentToShowDoubleTapToLikeNUX;
}

+ (id)newWithParentComment:(id)arg1;
@property(retain, nonatomic) IGCommentModel *commentToShowDoubleTapToLikeNUX; // @synthesize commentToShowDoubleTapToLikeNUX=_commentToShowDoubleTapToLikeNUX;
@property(readonly, nonatomic) IGCommentNuxModel *commentNux; // @synthesize commentNux=_commentNux;
@property(readonly, copy, nonatomic) NSArray *viewAllUsers; // @synthesize viewAllUsers=_viewAllUsers;
@property(readonly, nonatomic) IGCommentGroupRepliesConnection *repliesConnection; // @synthesize repliesConnection=_repliesConnection;
@property(readonly, nonatomic) IGCommentModel *parentComment; // @synthesize parentComment=_parentComment;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithParentComment:(id)arg1 repliesConnection:(id)arg2 viewAllUsers:(id)arg3 commentNux:(id)arg4;

@end

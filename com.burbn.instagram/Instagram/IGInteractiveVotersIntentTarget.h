//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGInteractiveStickersModel, IGUserSession, NSString;

@interface IGInteractiveVotersIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    id <IGStoryItemType> _storyItem;
    NSString *_reelId;
    IGInteractiveStickersModel *_interactiveSticker;
    long long _voteIndex;
    NSString *_voteTitle;
    struct UIEdgeInsets _deltaInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets deltaInsets; // @synthesize deltaInsets=_deltaInsets;
@property(readonly, nonatomic) NSString *voteTitle; // @synthesize voteTitle=_voteTitle;
@property(readonly, nonatomic) long long voteIndex; // @synthesize voteIndex=_voteIndex;
@property(readonly, nonatomic) IGInteractiveStickersModel *interactiveSticker; // @synthesize interactiveSticker=_interactiveSticker;
@property(readonly, nonatomic) NSString *reelId; // @synthesize reelId=_reelId;
@property(readonly, nonatomic) id <IGStoryItemType> storyItem; // @synthesize storyItem=_storyItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 storyItem:(id)arg2 reelId:(id)arg3 interactiveSticker:(id)arg4 voteIndex:(long long)arg5 voteTitle:(id)arg6 deltaInsets:(struct UIEdgeInsets)arg7;

@end


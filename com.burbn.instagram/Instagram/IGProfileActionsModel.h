//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGLiveBroadcast, IGLivePostLiveItemModel, IGRingViewSpec, IGStoryTrayViewModel, IGUser, NSString;

@interface IGProfileActionsModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _showEmptyStoryBadge;
    _Bool _showStoryRingLoadingState;
    _Bool _renderHeaderAsDimmedPreview;
    IGUser *_user;
    IGStoryTrayViewModel *_storyViewModel;
    IGLiveBroadcast *_broadcast;
    IGLivePostLiveItemModel *_postLiveItem;
    NSString *_followAttribution;
    IGRingViewSpec *_customRingSpec;
    unsigned long long _customRingAnimation;
    NSString *_identicalDiffIdentifier;
}

@property(readonly, nonatomic) _Bool renderHeaderAsDimmedPreview; // @synthesize renderHeaderAsDimmedPreview=_renderHeaderAsDimmedPreview;
@property(readonly, copy, nonatomic) NSString *identicalDiffIdentifier; // @synthesize identicalDiffIdentifier=_identicalDiffIdentifier;
@property(readonly, nonatomic) _Bool showStoryRingLoadingState; // @synthesize showStoryRingLoadingState=_showStoryRingLoadingState;
@property(readonly, nonatomic) unsigned long long customRingAnimation; // @synthesize customRingAnimation=_customRingAnimation;
@property(readonly, copy, nonatomic) IGRingViewSpec *customRingSpec; // @synthesize customRingSpec=_customRingSpec;
@property(readonly, copy, nonatomic) NSString *followAttribution; // @synthesize followAttribution=_followAttribution;
@property(readonly, nonatomic) _Bool showEmptyStoryBadge; // @synthesize showEmptyStoryBadge=_showEmptyStoryBadge;
@property(readonly, copy, nonatomic) IGLivePostLiveItemModel *postLiveItem; // @synthesize postLiveItem=_postLiveItem;
@property(readonly, copy, nonatomic) IGLiveBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, copy, nonatomic) IGStoryTrayViewModel *storyViewModel; // @synthesize storyViewModel=_storyViewModel;
@property(readonly, copy, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 storyViewModel:(id)arg2 broadcast:(id)arg3 postLiveItem:(id)arg4 showEmptyStoryBadge:(_Bool)arg5 followAttribution:(id)arg6 customRingSpec:(id)arg7 customRingAnimation:(unsigned long long)arg8 showStoryRingLoadingState:(_Bool)arg9 identicalDiffIdentifier:(id)arg10 renderHeaderAsDimmedPreview:(_Bool)arg11;

@end

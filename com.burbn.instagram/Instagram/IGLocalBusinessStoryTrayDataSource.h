//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGStoryTrayDataSource.h"

@class IGUserSession, NSArray, NSString;

@interface IGLocalBusinessStoryTrayDataSource : NSObject <IGStoryTrayDataSource, IGListDiffable>
{
    IGUserSession *_userSession;
    NSArray *_reels;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setPostLiveSectionExpanded:(_Bool)arg1;
- (id)viewModelForLiveBroadcast:(id)arg1;
- (id)viewModelForReel:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)allItemsForTray;
- (id)_allStories;
- (id)initWithUserSession:(id)arg1 reels:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDiscoveryTopicModel, IGExploreTopicSelectorSectionController, IGFeedItem;

@protocol IGExploreTopicSelectorSectionControllerDelegate <NSObject>
- (void)exploreTopicSelectorSectionController:(IGExploreTopicSelectorSectionController *)arg1 didSelectFeedItem:(IGFeedItem *)arg2;
- (void)exploreTopicSelectorSectionController:(IGExploreTopicSelectorSectionController *)arg1 didRequestMuteStatusUpdateForTopic:(IGDiscoveryTopicModel *)arg2 shouldMute:(_Bool)arg3;
@end


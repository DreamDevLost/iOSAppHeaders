//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

@class IGDiscoveryTopicModel;

@interface IGExploreTopicSelectorLongPressAlertController : UIAlertController
{
    IGDiscoveryTopicModel *_topic;
    id <IGExploreTopicSelectorLongPressAlertControllerDelegate> _delegate;
}

+ (id)alertControllerWithTopic:(id)arg1 displayStyle:(long long)arg2 delegate:(id)arg3;
@property(nonatomic) __weak id <IGExploreTopicSelectorLongPressAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleCoverFeedItemSelection;
- (void)_handleMuteSelection;

@end

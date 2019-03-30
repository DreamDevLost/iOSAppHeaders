//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGExploreSuggestedTopicPivotModel, IGUserSession, NSString;

@interface IGDiscoverySuggestedTopicPivotSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    IGExploreSuggestedTopicPivotModel *_pivotModel;
    struct IGGridLayoutConfiguration _layoutConfig;
    NSString *_module;
    id <IGDiscoverySuggestedTopicPivotSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDiscoverySuggestedTopicPivotSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2 analyticsModule:(id)arg3;

@end

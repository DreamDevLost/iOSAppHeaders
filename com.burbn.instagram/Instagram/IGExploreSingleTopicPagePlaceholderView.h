//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGExploreTopicalFeedLayoutListener.h"

@class IGShimmeringGridView, NSString;

@interface IGExploreSingleTopicPagePlaceholderView : UIView <IGExploreTopicalFeedLayoutListener>
{
    id <IGExploreTopicalFeedLayoutContext> _layoutContext;
    IGShimmeringGridView *_gridPlaceholderView;
}

- (void).cxx_destruct;
- (void)exploreTopicalFeedLayoutContext:(id)arg1 didUpdateMaxTopContentInsetAdjustment:(double)arg2;
- (void)exploreTopicalFeedLayoutContext:(id)arg1 didUpdateTopContentInsetAdjustment:(double)arg2;
- (void)exploreTopicalFeedLayoutContext:(id)arg1 didUpdateContentInset:(struct UIEdgeInsets)arg2;
- (void)_updatePlaceholderGridTraits;
- (void)layoutSubviews;
- (id)initWithLayoutContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


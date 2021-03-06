//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewCell.h>

@class IGUnreadBubbleView, IGUnreadBubbleViewConfig, IGUnseenIndicatorView;

@interface IGGroupedTableViewWithJewelCell : IGGroupedTableViewCell
{
    IGUnreadBubbleView *_largeUnreadBubbleView;
    IGUnseenIndicatorView *_unseenIndicatorView;
    long long _jewelCount;
    unsigned long long _jewelStyle;
    IGUnreadBubbleViewConfig *_jewelConfig;
    _Bool _showUnseenIndicator;
    _Bool _showCountLabel;
}

- (void).cxx_destruct;
- (void)setListRedesignOn:(_Bool)arg1;
- (void)_updateJewelCount;
- (void)updateUnseenIndicator:(_Bool)arg1 countLabel:(_Bool)arg2 style:(unsigned long long)arg3;
- (void)updateJewelCount:(long long)arg1 style:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)_setupViewHierarchy;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGFeedSidecarIndicatorViewProtocol.h"

@class FBTimer, NSString, UIImageView, UILabel;

@interface IGFeedSidecarIndicatorView : UIView <IGFeedSidecarIndicatorViewProtocol>
{
    UILabel *_indicatorLabel;
    UIView *_backgroundView;
    UIImageView *_rightChevronView;
    long long _currentItem;
    long long _itemCount;
    FBTimer *_fadeOutAnimationTimer;
    _Bool _optimizationEnabled;
    long long _indicatorAnimationStyle;
}

@property(nonatomic) long long indicatorAnimationStyle; // @synthesize indicatorAnimationStyle=_indicatorAnimationStyle;
- (void).cxx_destruct;
- (id)_indicatorLabelText;
- (void)setCurrentItem:(long long)arg1;
- (void)setItemCount:(long long)arg1;
- (void)cleanUpAnimationTimer;
- (void)animateShowAndHideForSwipeCompletion:(CDUnknownBlockType)arg1;
- (void)_animateHideWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateShowAndHideCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_showChevron:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 optimizationEnabled:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


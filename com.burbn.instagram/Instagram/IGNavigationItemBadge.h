//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface IGNavigationItemBadge : UIView
{
    UIImageView *_backgroundImageView;
    unsigned long long _digitCap;
    _Bool _badgeCountIsCapped;
    long long _badgeCount;
    UILabel *_badgeCountLabel;
}

@property(readonly, nonatomic) UILabel *badgeCountLabel; // @synthesize badgeCountLabel=_badgeCountLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBadgeCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 digitCap:(unsigned long long)arg2;

@end


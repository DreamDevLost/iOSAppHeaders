//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface IGCounterBadge : UIView
{
    UIImageView *_bubble;
    UILabel *_countLabel;
    struct CGSize _bubbleSize;
}

@property(nonatomic) struct CGSize bubbleSize; // @synthesize bubbleSize=_bubbleSize;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


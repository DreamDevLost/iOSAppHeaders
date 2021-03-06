//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class IGUnreadBubbleView;

@interface IGJewelButton : UIButton
{
    long long _jewelCount;
    id <IGJewelButtonDelegate> _delegate;
    IGUnreadBubbleView *_unreadBubbleView;
}

@property(retain, nonatomic) IGUnreadBubbleView *unreadBubbleView; // @synthesize unreadBubbleView=_unreadBubbleView;
@property(nonatomic) __weak id <IGJewelButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long jewelCount; // @synthesize jewelCount=_jewelCount;
- (void).cxx_destruct;
- (void)_layoutCountLabel;
- (void)layoutSubviews;
- (void)styleWithImage:(id)arg1 initialJewelCount:(long long)arg2;

@end


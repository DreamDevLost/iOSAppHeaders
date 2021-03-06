//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class IGCoreTextView, NSString, UIImage, UIImageView;

@interface IGBloksHashtagFollowButtonView : UIControl
{
    _Bool _isFollowing;
    IGCoreTextView *_textLabel;
    UIImageView *_backgroundImageView;
    NSString *_followingTitle;
    NSString *_notFollowingTitle;
    UIImage *_followingBackgroundImage;
    UIImage *_notFollowingBackgroundImage;
}

+ (struct CGSize)sizeThatFitsWithConstrainingSize:(struct CGSize)arg1 isFollowing:(_Bool)arg2;
- (void).cxx_destruct;
- (void)setIsFollowing:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


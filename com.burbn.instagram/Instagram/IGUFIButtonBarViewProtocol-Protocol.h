//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSString, UIView;

@protocol IGUFIButtonBarViewProtocol <NSObject>
@property(nonatomic) long long colorType;
@property(nonatomic) __weak id <IGUFIButtonBarViewDelegate> delegate;
- (void)showTooltipForLongPressOnDirectButtonInMediaCell:(UIView *)arg1 authorUsername:(NSString *)arg2;
- (void)adjustViewWithConstraintSize:(struct CGSize)arg1;
- (void)updateUFIButtonWithFeedItem:(IGFeedItem *)arg1 showCommentButton:(_Bool)arg2 showLikeButton:(_Bool)arg3 showSendButton:(_Bool)arg4 showSaveButton:(_Bool)arg5 showReplyButton:(_Bool)arg6 externalShareButtonLocation:(unsigned long long)arg7 likeAnimated:(_Bool)arg8 saveAnimated:(_Bool)arg9;
- (void)resetUFIButtonView;
@end


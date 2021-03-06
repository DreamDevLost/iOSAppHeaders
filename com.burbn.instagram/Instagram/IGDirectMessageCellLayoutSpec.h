//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectMessageBubbleLayoutSpec, IGDirectMessageCellContentStringStyles, IGDirectMessageCellFooterLayoutSpec, UIFont;

@interface IGDirectMessageCellLayoutSpec : FBValueObject <NSCopying, NSCoding>
{
    _Bool _displaysAvatar;
    _Bool _displaysUsername;
    _Bool _displaysSendFailed;
    _Bool _displaysSending;
    _Bool _displaysScreenshot;
    long long _alignment;
    double _parentViewWidth;
    double _padding;
    double _avatarSize;
    double _avatarLeftPadding;
    double _avatarRightPadding;
    double _actionStatusIconWidthOffset;
    double _maximumCellWidth;
    double _reshareThumbnailSize;
    UIFont *_storyHeaderFont;
    double _storyVerticalItemSpacing;
    double _tombstoneWidth;
    double _tombstonePadding;
    UIFont *_persistedLabelFont;
    double _persistViewPaddingWidth;
    double _persistViewPaddingHeight;
    IGDirectMessageCellContentStringStyles *_contentStringStyles;
    IGDirectMessageBubbleLayoutSpec *_bubbleLayoutSpec;
    IGDirectMessageCellFooterLayoutSpec *_footerLayoutSpec;
}

@property(readonly, copy, nonatomic) IGDirectMessageCellFooterLayoutSpec *footerLayoutSpec; // @synthesize footerLayoutSpec=_footerLayoutSpec;
@property(readonly, copy, nonatomic) IGDirectMessageBubbleLayoutSpec *bubbleLayoutSpec; // @synthesize bubbleLayoutSpec=_bubbleLayoutSpec;
@property(readonly, copy, nonatomic) IGDirectMessageCellContentStringStyles *contentStringStyles; // @synthesize contentStringStyles=_contentStringStyles;
@property(readonly, nonatomic) double persistViewPaddingHeight; // @synthesize persistViewPaddingHeight=_persistViewPaddingHeight;
@property(readonly, nonatomic) double persistViewPaddingWidth; // @synthesize persistViewPaddingWidth=_persistViewPaddingWidth;
@property(readonly, copy, nonatomic) UIFont *persistedLabelFont; // @synthesize persistedLabelFont=_persistedLabelFont;
@property(readonly, nonatomic) double tombstonePadding; // @synthesize tombstonePadding=_tombstonePadding;
@property(readonly, nonatomic) double tombstoneWidth; // @synthesize tombstoneWidth=_tombstoneWidth;
@property(readonly, nonatomic) double storyVerticalItemSpacing; // @synthesize storyVerticalItemSpacing=_storyVerticalItemSpacing;
@property(readonly, copy, nonatomic) UIFont *storyHeaderFont; // @synthesize storyHeaderFont=_storyHeaderFont;
@property(readonly, nonatomic) double reshareThumbnailSize; // @synthesize reshareThumbnailSize=_reshareThumbnailSize;
@property(readonly, nonatomic) double maximumCellWidth; // @synthesize maximumCellWidth=_maximumCellWidth;
@property(readonly, nonatomic) double actionStatusIconWidthOffset; // @synthesize actionStatusIconWidthOffset=_actionStatusIconWidthOffset;
@property(readonly, nonatomic) double avatarRightPadding; // @synthesize avatarRightPadding=_avatarRightPadding;
@property(readonly, nonatomic) double avatarLeftPadding; // @synthesize avatarLeftPadding=_avatarLeftPadding;
@property(readonly, nonatomic) double avatarSize; // @synthesize avatarSize=_avatarSize;
@property(readonly, nonatomic) double padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool displaysScreenshot; // @synthesize displaysScreenshot=_displaysScreenshot;
@property(readonly, nonatomic) _Bool displaysSending; // @synthesize displaysSending=_displaysSending;
@property(readonly, nonatomic) _Bool displaysSendFailed; // @synthesize displaysSendFailed=_displaysSendFailed;
@property(readonly, nonatomic) _Bool displaysUsername; // @synthesize displaysUsername=_displaysUsername;
@property(readonly, nonatomic) _Bool displaysAvatar; // @synthesize displaysAvatar=_displaysAvatar;
@property(readonly, nonatomic) double parentViewWidth; // @synthesize parentViewWidth=_parentViewWidth;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (id)initWithAlignment:(long long)arg1 parentViewWidth:(double)arg2 displaysAvatar:(_Bool)arg3 displaysUsername:(_Bool)arg4 displaysSendFailed:(_Bool)arg5 displaysSending:(_Bool)arg6 displaysScreenshot:(_Bool)arg7 padding:(double)arg8 avatarSize:(double)arg9 avatarLeftPadding:(double)arg10 avatarRightPadding:(double)arg11 actionStatusIconWidthOffset:(double)arg12 maximumCellWidth:(double)arg13 reshareThumbnailSize:(double)arg14 storyHeaderFont:(id)arg15 storyVerticalItemSpacing:(double)arg16 tombstoneWidth:(double)arg17 tombstonePadding:(double)arg18 persistedLabelFont:(id)arg19 persistViewPaddingWidth:(double)arg20 persistViewPaddingHeight:(double)arg21 contentStringStyles:(id)arg22 bubbleLayoutSpec:(id)arg23 footerLayoutSpec:(id)arg24;
- (id)copyWithFooterLayoutSpec:(id)arg1;
- (id)initWithAlignment:(long long)arg1 parentViewWidth:(double)arg2 displaysAvatar:(_Bool)arg3 displaysUsername:(_Bool)arg4 displaysSendFailed:(_Bool)arg5 displaysSending:(_Bool)arg6 displaysScreenshot:(_Bool)arg7 contentStringStyles:(id)arg8 bubbleLayoutSpec:(id)arg9 footerLayoutSpec:(id)arg10;
- (id)initWithAlignment:(long long)arg1 parentViewWidth:(double)arg2 contentStringStyles:(id)arg3 bubbleLayoutSpec:(id)arg4;

@end


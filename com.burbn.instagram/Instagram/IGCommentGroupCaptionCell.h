//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGCommentCell.h"

#import "IGCommentGroupCaptionContentViewDelegate.h"

@class IGCommentGroupCaptionContentView;

@interface IGCommentGroupCaptionCell : IGCommentCell <IGCommentGroupCaptionContentViewDelegate>
{
    IGCommentGroupCaptionContentView *_commentGroupCaptionContentView;
}

- (void).cxx_destruct;
- (void)commentGroupCaptionContentViewDidTapTranslate:(id)arg1;
- (id)commentView;
- (void)setCommentViewModel:(id)arg1 coreTextLinkHandler:(id)arg2 profilePicViewDelegate:(id)arg3 cachedProfileImage:(id)arg4 sizingButtonOnlyOnce:(_Bool)arg5 supportUnseenIndicator:(_Bool)arg6;
- (void)configureWithShowMediaThumbnail:(_Bool)arg1 mediaPhoto:(id)arg2 author:(id)arg3 module:(id)arg4;

@end


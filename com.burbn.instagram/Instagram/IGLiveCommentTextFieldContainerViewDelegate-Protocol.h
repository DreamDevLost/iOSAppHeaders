//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveCommentTextFieldContainerView, NSString;

@protocol IGLiveCommentTextFieldContainerViewDelegate <NSObject>
- (void)commentTextFieldContainerViewDidChangeText:(IGLiveCommentTextFieldContainerView *)arg1;
- (void)commentTextFieldContainerView:(IGLiveCommentTextFieldContainerView *)arg1 didPostCommentText:(NSString *)arg2;
- (void)commentTextFieldContainerViewDidTapMoreButton:(IGLiveCommentTextFieldContainerView *)arg1;
- (void)commentTextFieldContainerView:(IGLiveCommentTextFieldContainerView *)arg1 didChangeEditing:(_Bool)arg2;
- (void)commentTextFieldContainerViewDidAnimateButtonVisibility:(IGLiveCommentTextFieldContainerView *)arg1;
- (void)commentTextFieldContainerViewDidUpdateButtonVisibility:(IGLiveCommentTextFieldContainerView *)arg1;
@end


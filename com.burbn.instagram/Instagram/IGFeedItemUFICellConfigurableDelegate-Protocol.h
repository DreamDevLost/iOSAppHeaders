//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UICollectionViewCell<IGFeedItemUFICellConfigurable>;

@protocol IGFeedItemUFICellConfigurableDelegate <NSObject>
- (_Bool)feedItemActionCellIsOwnPhoto:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidTapExternalShareButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidTapReplyButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidLongPressSaveButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidTapSaveButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidLongPressSendButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidTapSendButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidTapLikeButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
- (void)feedItemActionCellDidTapCommentButton:(UICollectionViewCell<IGFeedItemUFICellConfigurable> *)arg1;
@end

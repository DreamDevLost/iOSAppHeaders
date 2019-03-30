//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnimatedStickerModel, IGCameraStickerModel, IGCountdownStickerTrayModel, IGDateStickerModel, IGEmojiModel, IGGalleryVideoStickerModel, IGHashtagStickerModel, IGInternalStickerModel, IGMemoriesStickerModel, IGMentionStickerModel, IGPollStickerModel, IGQuestionAnswerStickerModel, IGQuizStickerTrayModel, IGSliderStickerModel, IGStaticStickerModel, IGStoryMusicTrack, IGStoryStickerViewController, IGTimeStickerModel, IGUniversalLocationStickerModel, UIImage;

@protocol IGStoryStickerViewControllerSelectionDelegate <NSObject>
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectCountdownStickerTrayModel:(IGCountdownStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectMusicTrack:(IGStoryMusicTrack *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectQuizStickerTrayModel:(IGQuizStickerTrayModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectQuestionAnswerStickerModel:(IGQuestionAnswerStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectSliderStickerModel:(IGSliderStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectMentionStickerModel:(IGMentionStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectPollStickerModel:(IGPollStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectHashtagStickerModel:(IGHashtagStickerModel *)arg2;
- (void)stickerViewControllerDidSelectLike:(IGStoryStickerViewController *)arg1;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectInternalStickerModel:(IGInternalStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectGalleryVideoSticker:(IGGalleryVideoStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectGalleryImageSticker:(UIImage *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectCameraStickerModel:(IGCameraStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectLocationStickerModel:(IGUniversalLocationStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectMemoriesSticker:(IGMemoriesStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectDateSticker:(IGDateStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectTimeStickerModel:(IGTimeStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectAnimatedSticker:(IGAnimatedStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectStaticSticker:(IGStaticStickerModel *)arg2;
- (void)stickerViewController:(IGStoryStickerViewController *)arg1 didSelectEmoji:(IGEmojiModel *)arg2;
@end

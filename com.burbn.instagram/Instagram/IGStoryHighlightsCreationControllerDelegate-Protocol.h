//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGHighlightCoverModel, IGReel, IGStoryHighlightsCreationController, NSSet, NSString;

@protocol IGStoryHighlightsCreationControllerDelegate
- (void)highlightsCreationControllerDidEditSuggestedHighlight:(IGStoryHighlightsCreationController *)arg1 addedItems:(NSSet *)arg2 removedItems:(NSSet *)arg3 title:(NSString *)arg4 coverModel:(IGHighlightCoverModel *)arg5;
- (void)highlightsCreationControllerDidTapCancel:(IGStoryHighlightsCreationController *)arg1;
- (void)highlightsCreationControllerDidFinish:(IGStoryHighlightsCreationController *)arg1 mode:(long long)arg2 reel:(IGReel *)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectRecipientOneTapStateTracker, IGMediaMetadata, IGStoryRecipientListController, NSArray, NSOrderedSet, NSSet;

@protocol IGStoryRecipientListControllerDelegate <NSObject>
- (void)storyRecipientListController:(IGStoryRecipientListController *)arg1 didDismissWithUploadMetadata:(IGMediaMetadata *)arg2 oneTapStateTracker:(IGDirectRecipientOneTapStateTracker *)arg3 selectedStorySendTarget:(long long)arg4 selectedExternalServices:(NSSet *)arg5 selectedDirectRecipients:(NSOrderedSet *)arg6 recipientsFromSearch:(NSOrderedSet *)arg7 bumpedRecipients:(NSSet *)arg8 selectedHighlightReelIDs:(NSSet *)arg9 selectedHighlightTitles:(NSArray *)arg10;
- (void)storyRecipientListController:(IGStoryRecipientListController *)arg1 didSendToStoryTarget:(long long)arg2 directRecipients:(NSSet *)arg3 asset:(id <IGQuickCamOutputAsset>)arg4;
@end

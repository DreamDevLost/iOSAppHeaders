//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemUFICellConfigurableDelegate.h"
#import "IGFeedSectionControllerDimmingProtocol.h"
#import "IGFeedSectionControllerDirectSharingProtocol.h"
#import "IGHasCTAPresenterContext.h"

@class IGFeedItemLocationInfo, IGFeedItemPageCellState, IGFeedItemRow, NSIndexSet, NSSet, UIView;

@protocol IGFeedSectionControllerType <IGFeedSectionControllerDirectSharingProtocol, IGFeedSectionControllerDimmingProtocol, IGHasCTAPresenterContext, IGFeedItemUFICellConfigurableDelegate>
@property(nonatomic) __weak id <IGFeedSectionControllerActionDelegate> actionDelegate;
@property(nonatomic) __weak id <IGFeedSectionControllerConfigurationDelegate> configurationDelegate;
@property(copy, nonatomic) NSSet *feedItemChangeNotificationsToIgnore;
- (void)animateHeartAndPerformLikeWithLocationInfo:(IGFeedItemLocationInfo *)arg1;
- (_Bool)isCTAVisible;
- (void)resetDisplayingDelayedCTA;
- (void)pauseDisplayingDelayedCTA;
- (void)displayCTARowWithDelay:(double)arg1;
- (double)inlineComposerTriggerDelay;
- (void)displayInlineComposer;
- (IGFeedItemRow *)rowForCellAtIndex:(long long)arg1;
- (NSIndexSet *)textCellIndexes;
- (long long)ctaCellIndex;
- (long long)viewsCellIndex;
- (long long)socialContextTextIndex;
- (long long)timestampIndex;
- (long long)moreCommentIndex;
- (long long)captionCellIndex;
- (long long)headerCellIndex;
- (long long)ufiCellIndex;
- (long long)gatedMediaCellIndex;
- (long long)mediaCellIndex;
- (void)showActionSheetWithEntryPoint:(unsigned long long)arg1;
- (UIView *)mediaCell;
- (id <IGFeedConfigurationType>)feedConfiguration;
- (IGFeedItemPageCellState *)pageCellState;
@end


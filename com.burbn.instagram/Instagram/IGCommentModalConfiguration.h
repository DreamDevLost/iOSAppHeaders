//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGCommentModalConfiguration : NSObject
{
    _Bool _presentInPartialModalSheet;
    _Bool _showMediaThumbnail;
    _Bool _shouldDisableKeyboardOffestUntilCommentsAreLoaded;
    _Bool _shouldShowCaptionInitially;
    _Bool _shouldDisableAutoScrollToBottom;
    _Bool _enableNullState;
    _Bool _enableTopGradientView;
    _Bool _enableSwipeRightToDismiss;
    _Bool _enableTimeSpentHackyFix;
    _Bool _enableHeader;
}

@property(readonly, nonatomic) _Bool enableHeader; // @synthesize enableHeader=_enableHeader;
@property(readonly, nonatomic) _Bool enableTimeSpentHackyFix; // @synthesize enableTimeSpentHackyFix=_enableTimeSpentHackyFix;
@property(readonly, nonatomic) _Bool enableSwipeRightToDismiss; // @synthesize enableSwipeRightToDismiss=_enableSwipeRightToDismiss;
@property(readonly, nonatomic) _Bool enableTopGradientView; // @synthesize enableTopGradientView=_enableTopGradientView;
@property(readonly, nonatomic) _Bool enableNullState; // @synthesize enableNullState=_enableNullState;
@property(readonly, nonatomic) _Bool shouldDisableAutoScrollToBottom; // @synthesize shouldDisableAutoScrollToBottom=_shouldDisableAutoScrollToBottom;
@property(readonly, nonatomic) _Bool shouldShowCaptionInitially; // @synthesize shouldShowCaptionInitially=_shouldShowCaptionInitially;
@property(readonly, nonatomic) _Bool shouldDisableKeyboardOffestUntilCommentsAreLoaded; // @synthesize shouldDisableKeyboardOffestUntilCommentsAreLoaded=_shouldDisableKeyboardOffestUntilCommentsAreLoaded;
@property(readonly, nonatomic) _Bool showMediaThumbnail; // @synthesize showMediaThumbnail=_showMediaThumbnail;
@property(readonly, nonatomic) _Bool presentInPartialModalSheet; // @synthesize presentInPartialModalSheet=_presentInPartialModalSheet;
- (id)initWithFeedItem:(id)arg1 userSession:(id)arg2 entryPoint:(long long)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGHashtagSuggestionsView, IGStoryColorPickingControls, IGStoryEmojiSuggestionsView, IGStoryMentionsView;

@interface IGStoryTextEntryInputAccessoryView : UIView
{
    IGStoryColorPickingControls *_textColorPickingControls;
    IGStoryMentionsView *_mentionsView;
    IGHashtagSuggestionsView *_hashtagSuggestionsView;
    IGStoryEmojiSuggestionsView *_emojiSuggestionsView;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) IGStoryEmojiSuggestionsView *emojiSuggestionsView; // @synthesize emojiSuggestionsView=_emojiSuggestionsView;
@property(readonly, nonatomic) IGHashtagSuggestionsView *hashtagSuggestionsView; // @synthesize hashtagSuggestionsView=_hashtagSuggestionsView;
@property(readonly, nonatomic) IGStoryMentionsView *mentionsView; // @synthesize mentionsView=_mentionsView;
@property(readonly, nonatomic) IGStoryColorPickingControls *textColorPickingControls; // @synthesize textColorPickingControls=_textColorPickingControls;
- (void).cxx_destruct;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserSession:(id)arg1 eyedropperColorPickerEnabled:(_Bool)arg2 colorPickerEnabled:(_Bool)arg3 privateMentionToggleEnabled:(_Bool)arg4 colorPalettes:(id)arg5 module:(id)arg6;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStickerViewType.h"
#import "IGStoryOverlayFlippable.h"

@class IGEmojiModel, NSString, UIBezierPath, UILabel;

@interface IGEmojiStickerView : UIView <IGStoryOverlayFlippable, IGStickerViewType>
{
    UILabel *_label;
    UIBezierPath *_cachedOutlinePath;
    UIView *_labelContainer;
    IGEmojiModel *_emojiModel;
}

@property(readonly, nonatomic) IGEmojiModel *emojiModel; // @synthesize emojiModel=_emojiModel;
- (void).cxx_destruct;
- (id)stickerView;
- (id)loggingId;
- (_Bool)isFlipped;
- (void)flipHorizontally;
- (id)storyAssetDiffableIdentifier;
- (void)_recomputeOutlinePath;
- (id)outlinePath;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGStoryOverlayTapModel, IGStyledString, UIImageView;

@interface IGStoryTappableOverlayTooltipContentView : UIView
{
    UIImageView *_chevronView;
    IGCoreTextView *_textView;
    _Bool _highlighted;
    _Bool _shouldHideChevron;
    IGStoryOverlayTapModel *_tappableOverlay;
    UIView *_iconView;
}

+ (id)_tooltipSubtitleWithTapModel:(id)arg1;
+ (id)_addLinkedUserForAttribution:(id)arg1;
+ (id)_subtitleStyle;
+ (id)_titleStyle;
+ (id)styledStringWithTapModel:(id)arg1;
+ (id)tooltipHorizontalEdgePaddingForTappableOverlay:(id)arg1;
+ (_Bool)shouldHideChevronForTappableOverlay:(id)arg1 module:(id)arg2;
+ (id)iconViewForTappableOverlay:(id)arg1 module:(id)arg2;
@property(nonatomic) _Bool shouldHideChevron; // @synthesize shouldHideChevron=_shouldHideChevron;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGStoryOverlayTapModel *tappableOverlay; // @synthesize tappableOverlay=_tappableOverlay;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IGCoreTextLinkHandler> coreTextLinkHandler;
@property(retain, nonatomic) IGStyledString *styledString;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

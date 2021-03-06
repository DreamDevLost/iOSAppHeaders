//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UILabel, UIView<IGSlideshowFullscreenNUXElement>, UIVisualEffectView;

@interface IGSlideshowNUXView : UIView
{
    long long _backgroundStyle;
    UIVisualEffectView *_blurView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_doneButton;
    UIView<IGSlideshowFullscreenNUXElement> *_nuxFullScreenElement;
    NSMutableArray *_gestureConfigurations;
    unsigned long long _dismissOptions;
    id <IGSlideshowNUXViewDelegate> _delegate;
}

@property(nonatomic) unsigned long long dismissOptions; // @synthesize dismissOptions=_dismissOptions;
@property(nonatomic) __weak id <IGSlideshowNUXViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addFullScreenNUXElement:(id)arg1;
- (void)addNUXElement:(id)arg1 forTargetPoint:(struct CGPoint)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_handleTap:(id)arg1;
- (void)_done;
- (void)setActionName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundStyle:(long long)arg2 dismissOptions:(unsigned long long)arg3;

@end


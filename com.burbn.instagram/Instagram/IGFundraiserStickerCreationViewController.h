//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGFundraiserStickerViewDelegate.h"
#import "IGStoryStickerEditingViewControllerProtocol.h"

@class IGFundraiserStickerView, IGKeyboardObserver, IGPassthroughView, IGStoryColorPaletteGradientWheel, IGTapButton, IGUserSession, NSArray, NSString, UIView;

@interface IGFundraiserStickerCreationViewController : UIViewController <IGFundraiserStickerViewDelegate, IGStoryStickerEditingViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGFundraiserStickerView *_fundraiserStickerView;
    UIView *_dimmingView;
    IGPassthroughView *_contentWrapperView;
    IGTapButton *_doneButton;
    IGTapButton *_cancelButton;
    IGStoryColorPaletteGradientWheel *_colorWheel;
    _Bool _stickerWasNewlyCreated;
    IGKeyboardObserver *_keyboardObserver;
    id <IGFundraiserStickerCreationViewControllerDelegate> _delegate;
    double _contentRegionCornerRadius;
    struct CGRect _contentRegion;
}

@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
@property(nonatomic) __weak id <IGFundraiserStickerCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) struct CGPoint editableStickerViewPositionInWindowCoordinatesWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (void)fundraiserStickerViewDidChangeTitle:(id)arg1;
- (void)_dismissSticker;
- (void)_didTapBackground;
- (void)_didTapDoneButton;
- (void)_colorWheelChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFundraiserStickerView:(id)arg1 userSession:(id)arg2 wasStickerNewlyCreated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


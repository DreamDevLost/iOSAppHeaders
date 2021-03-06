//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGMentionStickerViewDelegate.h"
#import "IGStoryMentionsViewDelegate.h"
#import "IGStoryStickerEditingViewControllerProtocol.h"

@class IGKeyboardObserver, IGMentionStickerView, IGStickerBundleView, IGStoryMentionsView, IGUserSession, NSArray, NSString, UIButton, UIView;

@interface IGMentionStickerCreationViewController : UIViewController <IGMentionStickerViewDelegate, IGStoryMentionsViewDelegate, IGAnalyticsModule, IGStoryStickerEditingViewControllerProtocol>
{
    IGUserSession *_userSession;
    UIView *_dimmingView;
    UIButton *_doneButton;
    UIView *_clippingContainerView;
    IGMentionStickerView *_mentionStickerView;
    IGStoryMentionsView *_mentionSuggestionsView;
    IGKeyboardObserver *_keyboardObserver;
    struct CGRect _visibleKeyboardRect;
    IGStickerBundleView *_stickerBundleView;
    double _contentRegionCornerRadius;
    id <IGMentionStickerCreationViewControllerDelegate> _delegate;
    struct CGRect _contentRegion;
}

@property(nonatomic) __weak id <IGMentionStickerCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) struct CGPoint editableStickerViewPositionInWindowCoordinatesWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (void)storyMentionsView:(id)arg1 didSelectUser:(id)arg2;
- (void)mentionStickerViewDidEndEditing:(id)arg1;
- (void)mentionStickerView:(id)arg1 didUpdateText:(id)arg2;
- (id)analyticsModule;
- (void)_dismissSelf;
- (void)_didTapBackground;
- (void)_didTapDoneButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 alreadyMentionedUsers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGPollStickerViewDismissDelegate.h"
#import "IGPollStickerViewTitleTextViewDelegate.h"
#import "IGStoryStickerEditingViewControllerProtocol.h"

@class IGKeyboardObserver, IGPollStickerView, IGTapButton, NSArray, NSString, UITapGestureRecognizer, UIView;

@interface IGPollStickerCreationViewController : UIViewController <IGPollStickerViewTitleTextViewDelegate, IGPollStickerViewDismissDelegate, IGStoryStickerEditingViewControllerProtocol>
{
    _Bool _pollStickerWasNewlyCreated;
    UIView *_clippingContainerView;
    struct CGPoint _entryTapPoint;
    _Bool _isInitialLocationInfoRecorded;
    id <IGPollStickerCreationViewControllerDelegate> _delegate;
    double _contentRegionCornerRadius;
    IGKeyboardObserver *_keyboardObserver;
    UIView *_dimmingView;
    IGTapButton *_doneButton;
    IGPollStickerView *_pollStickerView;
    UITapGestureRecognizer *_tapGesture;
    long long _state;
    struct CGRect _contentRegion;
    struct CGRect _visibleKeyboardRect;
    struct IGOverlayViewLocationInfo _initialPollStickerLocationInfo;
}

@property(readonly, nonatomic) struct IGOverlayViewLocationInfo initialPollStickerLocationInfo; // @synthesize initialPollStickerLocationInfo=_initialPollStickerLocationInfo;
@property(readonly, nonatomic) _Bool isInitialLocationInfoRecorded; // @synthesize isInitialLocationInfoRecorded=_isInitialLocationInfoRecorded;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(readonly, nonatomic) IGPollStickerView *pollStickerView; // @synthesize pollStickerView=_pollStickerView;
@property(readonly, nonatomic) IGTapButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) struct CGRect visibleKeyboardRect; // @synthesize visibleKeyboardRect=_visibleKeyboardRect;
@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
@property(nonatomic) __weak id <IGPollStickerCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) struct CGPoint editableStickerViewPositionInWindowCoordinatesWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (struct CGRect)_pollStickerViewBoundingRect;
- (void)_updateLayoutForPollStickerView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)pollStickerViewDidRequestDismiss:(id)arg1;
- (void)pollStickerView:(id)arg1 didFinishEditingTitleTextView:(id)arg2;
- (void)pollStickerView:(id)arg1 didChangeTitleTextView:(id)arg2;
- (void)pollStickerView:(id)arg1 willBeginEditingTitleTextView:(id)arg2;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)_didTapDoneButton:(id)arg1;
- (void)_didTapBackground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPollStickerView:(id)arg1 entryTapPoint:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


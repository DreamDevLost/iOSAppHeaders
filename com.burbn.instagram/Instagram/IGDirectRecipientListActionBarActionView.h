//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class IGTapButton, NSString, UILabel;

@interface IGDirectRecipientListActionBarActionView : UIView <UIGestureRecognizerDelegate>
{
    IGTapButton *_actionButton;
    UILabel *_buttonLabel;
    long long _actionType;
    id <IGDirectRecipientListActionBarActionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectRecipientListActionBarActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_buttonImageForActionType:(long long)arg1;
- (id)_labelTextForActionType:(long long)arg1;
- (void)_didTapActionButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureActionViewWithActionType:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


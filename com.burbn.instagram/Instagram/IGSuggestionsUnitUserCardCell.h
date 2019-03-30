//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGSuggestionsUnitDefaultCardCell.h"

#import "UIGestureRecognizerDelegate.h"

@class IGProfilePictureImageView, IGSuggestionsUnitUserMediaView, NSString, UIButton, UILabel, UIView;

@interface IGSuggestionsUnitUserCardCell : IGSuggestionsUnitDefaultCardCell <UIGestureRecognizerDelegate>
{
    IGProfilePictureImageView *_profilePictureImageView;
    UIButton *_dismissButton;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_socialContextLabel;
    IGSuggestionsUnitUserMediaView *_mediaView;
    UIView *_followView;
    UIView *_verifiedBadgeView;
    id <IGSuggestionsUnitUserCardCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGSuggestionsUnitUserCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissButtonTapped;
- (void)_didTapUserCardCell;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)configureWithUserInfo:(id)arg1 followView:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

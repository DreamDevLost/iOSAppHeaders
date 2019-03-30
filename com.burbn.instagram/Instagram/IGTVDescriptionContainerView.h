//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, IGCoreTextView, IGStringStyle, NSString, UIControl, UIScrollView;

@interface IGTVDescriptionContainerView : UIView
{
    UIView *_dimmingView;
    UIView *_separatorView;
    UIScrollView *_scrollView;
    UIView *_scrollViewContainer;
    CAGradientLayer *_alphaMaskLayer;
    IGCoreTextView *_textView;
    IGStringStyle *_stringStyle;
    _Bool _isPresented;
    NSString *_text;
    UIControl *_dismissControl;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(readonly, nonatomic) UIControl *dismissControl; // @synthesize dismissControl=_dismissControl;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_updateVisibilityForPresentationState;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


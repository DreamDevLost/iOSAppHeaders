//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTVStaticLoadingView, IGTapButton, UIButton;

@interface IGTVVideoFeedEmptyView : UIView
{
    UIView *_contentView;
    IGTVStaticLoadingView *_loadingView;
    IGTapButton *_closeButton;
    IGTapButton *_minimizeButton;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIButton *minimizeButton;
@property(readonly, nonatomic) UIButton *closeButton;
- (id)initWithDismissType:(unsigned long long)arg1;

@end


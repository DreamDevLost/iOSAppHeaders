//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel;

@interface IGFeedDebugOverlay : UIView
{
    UILabel *_viewInfoMaxPercentageLabel;
    UILabel *_viewInfoPercentageLabel;
    UILabel *_viewInfoTimerLabel;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithFeedItem:(id)arg1 userSession:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface IGWatchAndInstallContainerView : UIView
{
    UIView *_appStoreView;
    UIView *_touchBlockingOverlayView;
    _Bool _touchBlockingEnabled;
}

@property(nonatomic, getter=isTouchBlockingEnabled) _Bool touchBlockingEnabled; // @synthesize touchBlockingEnabled=_touchBlockingEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *touchBlockingOverlayView;
- (void)layoutSubviews;
- (id)initWithAppStoreView:(id)arg1;

@end

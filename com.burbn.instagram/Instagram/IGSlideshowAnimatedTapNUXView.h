//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGSlideshowFullscreenNUXElement.h"

@class IGSlideshowNUXView, NSString, UILabel;

@interface IGSlideshowAnimatedTapNUXView : UIView <IGSlideshowFullscreenNUXElement>
{
    UIView *_touchView;
    UILabel *_textLabel;
    double _touchSpacing;
    IGSlideshowNUXView *_nuxView;
}

@property(nonatomic) __weak IGSlideshowNUXView *nuxView; // @synthesize nuxView=_nuxView;
- (void).cxx_destruct;
- (void)willDisplay;
- (void)_performAnimation;
- (void)_positionTouch;
- (id)_delegate;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


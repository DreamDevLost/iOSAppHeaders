//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGStoryFacepileView;

@interface IGNewPostsIndicatorBannerView : UIView
{
    IGCoreTextView *_textLabel;
    IGStoryFacepileView *_facepileView;
    id <IGNewPostsIndicatorViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGNewPostsIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setMessage:(id)arg1;
- (void)setUsers:(id)arg1 message:(id)arg2 analyticsModule:(id)arg3;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


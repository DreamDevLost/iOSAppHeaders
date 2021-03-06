//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FLAnimatedImageView, IGStreamingVideoCacheRequest, NSURL;

@interface IGAnimatedImageView : UIView
{
    IGStreamingVideoCacheRequest *_currentRequest;
    NSURL *_animatedImageURL;
    FLAnimatedImageView *_animatedImageView;
    id <IGAnimatedImageViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGAnimatedImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FLAnimatedImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(retain, nonatomic) NSURL *animatedImageURL; // @synthesize animatedImageURL=_animatedImageURL;
- (void).cxx_destruct;
- (void)_finishDownloadImage:(id)arg1 animatedImageURL:(id)arg2;
- (void)_beginRequestForURL:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


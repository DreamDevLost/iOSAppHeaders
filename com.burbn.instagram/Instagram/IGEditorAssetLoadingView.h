//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCircularProgressView;

@interface IGEditorAssetLoadingView : UIView
{
    IGCircularProgressView *_progressView;
    UIView *_dimmingView;
}

@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface IGAdManagerButtonCell : IGTableViewCell
{
    _Bool _isShowingLoading;
    NSString *_title;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool isShowingLoading; // @synthesize isShowingLoading=_isShowingLoading;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideLoadingFeedback;
- (void)showLoadingFeedbackWithString:(id)arg1;
- (void)_setUp:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

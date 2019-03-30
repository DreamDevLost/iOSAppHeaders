//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class UIImageView, UILabel;

@interface IGSurveyFinishViewController : IGViewController
{
    UIImageView *_imageHolder;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageHolder; // @synthesize imageHolder=_imageHolder;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_finishSurvey;
- (struct CGRect)_rectForSubtitleWithContainerRect:(struct CGRect)arg1 titleRect:(struct CGRect)arg2;
- (struct CGRect)_rectForTitleWithContainerRect:(struct CGRect)arg1 imageRect:(struct CGRect)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)_createTextLabelWithText:(id)arg1 textColor:(id)arg2 font:(double)arg3;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface IGFlipProgressIndicatorView : UIView
{
    long long _totalSteps;
    long long _currentStep;
    UILabel *_currentStepLabel;
    UILabel *_separatorLabel;
    UILabel *_totalStepsLabel;
}

+ (struct CGSize)sizeOfView;
+ (struct CGSize)_sizeOfLabelViewType:(unsigned long long)arg1;
@property(retain, nonatomic) UILabel *totalStepsLabel; // @synthesize totalStepsLabel=_totalStepsLabel;
@property(retain, nonatomic) UILabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(retain, nonatomic) UILabel *currentStepLabel; // @synthesize currentStepLabel=_currentStepLabel;
@property(nonatomic) long long currentStep; // @synthesize currentStep=_currentStep;
@property(nonatomic) long long totalSteps; // @synthesize totalSteps=_totalSteps;
- (void).cxx_destruct;
- (void)_animateToStep:(long long)arg1 atStep:(long long)arg2;
- (void)setCurrentStep:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithCurrentStep:(long long)arg1 totalSteps:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStepperHeaderView;

@interface IGStepperHeaderControl : NSObject
{
    IGStepperHeaderView *_headerView;
    long long _currentStep;
}

- (void).cxx_destruct;
- (long long)currentProgressedStep;
- (void)updateToStep:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithNumberOfSteps:(long long)arg1 hostView:(id)arg2 insets:(struct UIEdgeInsets)arg3;

@end


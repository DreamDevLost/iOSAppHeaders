//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTooltipView, UIView;

@interface IGEmojiFitzpatrickTooltipPresenter : NSObject
{
    UIView *_parentView;
    IGTooltipView *_tooltipView;
}

@property(retain, nonatomic) IGTooltipView *tooltipView; // @synthesize tooltipView=_tooltipView;
@property(readonly, nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)dismissFitzpatrickViewAnimated:(_Bool)arg1;
- (void)presentFitzpatrickView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)initWithParentView:(id)arg1;

@end


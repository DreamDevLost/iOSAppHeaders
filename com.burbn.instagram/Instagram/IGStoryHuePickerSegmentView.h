//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImage;

@interface IGStoryHuePickerSegmentView : UIView
{
    UIColor *_beginningColor;
    UIColor *_endingColor;
    UIColor *_maxBrightnessColor;
    UIColor *_minBrightnessColor;
    UIImage *_cachedSnapshot;
}

- (void).cxx_destruct;
- (id)colorAtPointInBounds:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithBeginningColor:(id)arg1 endingColor:(id)arg2;

@end


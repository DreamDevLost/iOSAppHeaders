//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBouncyButton.h"

@class CAShapeLayer;

@interface IGQuestionStickerResponseBrowserNavigationButton : IGBouncyButton
{
    CAShapeLayer *_arrowLayer;
    _Bool _pointsToTheLeft;
}

@property(nonatomic) _Bool pointsToTheLeft; // @synthesize pointsToTheLeft=_pointsToTheLeft;
- (void).cxx_destruct;
@property(nonatomic) _Bool pointsToTheRight;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


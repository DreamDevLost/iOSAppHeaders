//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGFeedItemPageIndicatorProtocol.h"

@class FBTimer, IGGradientView, NSMutableArray, NSString, UILabel;

@interface IGFeedItemPageRedesignIndicator : UIView <IGFeedItemPageIndicatorProtocol>
{
    IGGradientView *_gradientView;
    NSMutableArray *_dots;
    FBTimer *_fadeOutAnimationTimer;
    UILabel *_nuxLabel;
    _Bool _showNUX;
    unsigned long long _numberOfPages;
    unsigned long long _currentPage;
}

@property(nonatomic) _Bool showNUX; // @synthesize showNUX=_showNUX;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (id)_currentIndicatorTintColor;
- (id)_indicatorTintColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)swipeToPage:(unsigned long long)arg1;
- (void)animateShowAndHideForSwipeCompletion:(CDUnknownBlockType)arg1;
- (void)_animateHideWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateShowAndHideCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


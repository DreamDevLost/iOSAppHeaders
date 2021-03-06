//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGDirectMessageCellReactionsViewLayoutSpec : FBValueObject <NSCopying, NSCoding>
{
    long long _maximumShownReactions;
    double _viewWidth;
    double _viewHeight;
    double _verticalInset;
    double _horizontalInsetLeft;
    double _horizontalInsetRight;
    double _individualReactionPadding;
    struct CGSize _individualReactionSize;
}

+ (id)inlineLayoutSpecWithParentViewWidth:(double)arg1 padding:(double)arg2 numberOfReactions:(long long)arg3;
@property(readonly, nonatomic) double individualReactionPadding; // @synthesize individualReactionPadding=_individualReactionPadding;
@property(readonly, nonatomic) struct CGSize individualReactionSize; // @synthesize individualReactionSize=_individualReactionSize;
@property(readonly, nonatomic) double horizontalInsetRight; // @synthesize horizontalInsetRight=_horizontalInsetRight;
@property(readonly, nonatomic) double horizontalInsetLeft; // @synthesize horizontalInsetLeft=_horizontalInsetLeft;
@property(readonly, nonatomic) double verticalInset; // @synthesize verticalInset=_verticalInset;
@property(readonly, nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(readonly, nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(readonly, nonatomic) long long maximumShownReactions; // @synthesize maximumShownReactions=_maximumShownReactions;
- (id)initWithMaximumShownReactions:(long long)arg1 viewWidth:(double)arg2 viewHeight:(double)arg3 verticalInset:(double)arg4 horizontalInsetLeft:(double)arg5 horizontalInsetRight:(double)arg6 individualReactionSize:(struct CGSize)arg7 individualReactionPadding:(double)arg8;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface IGRichTextEmphasis : NSObject
{
    UIColor *_textBackgroundColor;
    double _backgroundFillCornerRadius;
    double _backgroundFillSizeOffsetMultiplier;
    double _backgroundFillLeadingEdgeOffsetMultiplier;
}

@property(readonly, nonatomic) double backgroundFillLeadingEdgeOffsetMultiplier; // @synthesize backgroundFillLeadingEdgeOffsetMultiplier=_backgroundFillLeadingEdgeOffsetMultiplier;
@property(readonly, nonatomic) double backgroundFillSizeOffsetMultiplier; // @synthesize backgroundFillSizeOffsetMultiplier=_backgroundFillSizeOffsetMultiplier;
@property(readonly, nonatomic) double backgroundFillCornerRadius; // @synthesize backgroundFillCornerRadius=_backgroundFillCornerRadius;
@property(readonly, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
- (void).cxx_destruct;
- (id)initWithTextBackgroundColor:(id)arg1 backgroundFillCornerRadius:(double)arg2 backgroundFillSizeOffsetMultiplier:(double)arg3 backgroundFillLeadingEdgeOffsetMultiplier:(double)arg4;
- (id)initWithTextBackgroundColor:(id)arg1;

@end


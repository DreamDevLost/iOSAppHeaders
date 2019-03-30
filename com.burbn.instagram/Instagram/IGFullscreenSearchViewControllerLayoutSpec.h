//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor;

@interface IGFullscreenSearchViewControllerLayoutSpec : FBValueObject <NSCopying, NSCoding>
{
    UIColor *_bottomBorderColor;
    double _bottomBorderHeight;
}

+ (id)directAppHeaderLayoutSpec;
+ (id)defaultLayoutSpec;
@property(readonly, nonatomic) double bottomBorderHeight; // @synthesize bottomBorderHeight=_bottomBorderHeight;
@property(readonly, copy, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
- (void).cxx_destruct;
- (id)initWithBottomBorderColor:(id)arg1 bottomBorderHeight:(double)arg2;

@end


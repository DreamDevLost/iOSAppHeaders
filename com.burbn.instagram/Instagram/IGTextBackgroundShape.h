//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGTextBackgroundShape : NSObject
{
    NSMutableArray *_leftSidePoints;
    NSMutableArray *_rightSidePoints;
}

@property(readonly, nonatomic) NSMutableArray *rightSidePoints; // @synthesize rightSidePoints=_rightSidePoints;
@property(readonly, nonatomic) NSMutableArray *leftSidePoints; // @synthesize leftSidePoints=_leftSidePoints;
- (void).cxx_destruct;
- (id)_clockwisePointsWithMinimumHorizontalSeparation:(double)arg1;
- (void)drawWithFillColor:(id)arg1 cornerRadius:(double)arg2;
- (_Bool)hasPoints;
- (void)addRectToShape:(struct CGRect)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGARLinkTextBox : NSObject
{
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomLeft;
    struct CGPoint _bottomRight;
}

@property(nonatomic) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
- (double)rotationDegree;
- (id)initWithTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomLeft:(struct CGPoint)arg3 bottomRight:(struct CGPoint)arg4;

@end


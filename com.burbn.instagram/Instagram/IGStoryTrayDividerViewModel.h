//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSUUID, UIColor;

@interface IGStoryTrayDividerViewModel : NSObject <IGListDiffable>
{
    NSUUID *_diffIdentifier;
    double _cellWidth;
    double _topInset;
    double _bottomInset;
    UIColor *_dividerColor;
}

+ (id)topTrayDividerSmallViewModel;
@property(readonly, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(readonly, nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(readonly, nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithCellWidth:(double)arg1 topInset:(double)arg2 bottomInset:(double)arg3 color:(id)arg4;

@end


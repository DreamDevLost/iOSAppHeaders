//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGExploreSingleTopicFeedRestorationState : FBValueObject <NSCopying, NSCoding>
{
    double _topContentInsetAdjustment;
    struct CGPoint _contentOffset;
}

@property(readonly, nonatomic) double topContentInsetAdjustment; // @synthesize topContentInsetAdjustment=_topContentInsetAdjustment;
@property(readonly, nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
- (id)initWithContentOffset:(struct CGPoint)arg1 topContentInsetAdjustment:(double)arg2;

@end


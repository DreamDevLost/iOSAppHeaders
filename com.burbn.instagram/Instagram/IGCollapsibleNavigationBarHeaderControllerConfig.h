//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGCollapsibleNavigationBarHeaderControllerConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _resetScrollDistanceOnDrag;
    _Bool _hideStatusBar;
    _Bool _preserveHeaderHeight;
    _Bool _expandHeaderOnlyOnTopOfScrollView;
    double _expansionBuffer;
    double _scrollDistanceRatio;
    double _minVelocityYToStartExpansion;
    double _throttledCollapsionTime;
}

@property(readonly, nonatomic) _Bool expandHeaderOnlyOnTopOfScrollView; // @synthesize expandHeaderOnlyOnTopOfScrollView=_expandHeaderOnlyOnTopOfScrollView;
@property(readonly, nonatomic) _Bool preserveHeaderHeight; // @synthesize preserveHeaderHeight=_preserveHeaderHeight;
@property(readonly, nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property(readonly, nonatomic) _Bool resetScrollDistanceOnDrag; // @synthesize resetScrollDistanceOnDrag=_resetScrollDistanceOnDrag;
@property(readonly, nonatomic) double throttledCollapsionTime; // @synthesize throttledCollapsionTime=_throttledCollapsionTime;
@property(readonly, nonatomic) double minVelocityYToStartExpansion; // @synthesize minVelocityYToStartExpansion=_minVelocityYToStartExpansion;
@property(readonly, nonatomic) double scrollDistanceRatio; // @synthesize scrollDistanceRatio=_scrollDistanceRatio;
@property(readonly, nonatomic) double expansionBuffer; // @synthesize expansionBuffer=_expansionBuffer;
- (id)initWithExpansionBuffer:(double)arg1 scrollDistanceRatio:(double)arg2 minVelocityYToStartExpansion:(double)arg3 throttledCollapsionTime:(double)arg4 resetScrollDistanceOnDrag:(_Bool)arg5 hideStatusBar:(_Bool)arg6 preserveHeaderHeight:(_Bool)arg7 expandHeaderOnlyOnTopOfScrollView:(_Bool)arg8;

@end


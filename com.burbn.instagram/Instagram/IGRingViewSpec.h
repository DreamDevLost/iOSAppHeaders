//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSShadow;

@interface IGRingViewSpec : NSObject <NSCopying>
{
    _Bool _dynamicLineWidth;
    NSArray *_locations;
    NSArray *_colors;
    NSShadow *_shadow;
    double _shadowOpacity;
    double _animationDuration;
    double _animationStartRadian;
    double _widthMultiplier;
    double _lineWidth;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)_getGradientPointFromDictionary:(id)arg1;
+ (id)customSpecFromServerResponse:(id)arg1;
+ (id)greySpecWithLineWidth:(double)arg1;
+ (id)colorfulSpecWithLineWidth:(double)arg1;
+ (id)keywordSearchSpec;
+ (id)profilePictureContentSpec;
+ (id)errorSpec;
+ (id)feedItemHeaderFavoritesSpec;
+ (id)favoritesSpec;
+ (id)liveQAGradientSpec;
+ (id)liveExploreGradientSpec;
+ (id)liveDefaultGradientSpec;
+ (id)_liveDefaultGradientSpecWithLineWidth:(double)arg1;
+ (id)directSentBlackSpec;
+ (id)_directVisualMessageTombstoneLoadingSpecWithColor:(id)arg1;
+ (id)directVisualMessageReplayableTombstoneLoadingSpec;
+ (id)directVisualMessageUnseenTombstoneLoadingSpec;
+ (id)directInboxLoadingAccessorySpec;
+ (id)directThreadHeaderBlueRingSpec;
+ (id)directThreadHeaderGreyRingSpec;
+ (id)directThreadHeaderEmptySpec;
+ (id)directBlueSpec;
+ (id)directAppExpiringMessageColorfulSpec;
+ (id)directStoryColorfulSpec;
+ (id)countDownSpec;
+ (id)transparentWhiteThickSpec;
+ (id)transparentWhiteSpec;
+ (id)graySpec;
+ (id)activityFeedSpec;
+ (id)hashtagPageSpec;
+ (id)exploreOneByTwoColorfulSpec;
+ (id)exploreColorfulSpec;
+ (id)feedItemHeaderColorfulSpec;
+ (id)searchColorfulSpec;
+ (id)colorfulSpec;
+ (id)noneSpec;
+ (id)defaultShadow;
@property(readonly, nonatomic) _Bool dynamicLineWidth; // @synthesize dynamicLineWidth=_dynamicLineWidth;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) double widthMultiplier; // @synthesize widthMultiplier=_widthMultiplier;
@property(readonly, nonatomic) double animationStartRadian; // @synthesize animationStartRadian=_animationStartRadian;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, copy, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (double)lineWidthForBounds:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocations:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 colors:(id)arg4 dynamicLineWidth:(_Bool)arg5 lineWidth:(double)arg6 widthMultiplier:(double)arg7 shadow:(id)arg8 shadowOpacity:(double)arg9 animationDuration:(double)arg10 animationStartRadian:(double)arg11;
- (id)initWithColors:(id)arg1 dynamicLineWidth:(_Bool)arg2 lineWidth:(double)arg3 widthMultiplier:(double)arg4 shadow:(id)arg5 shadowOpacity:(double)arg6;

@end

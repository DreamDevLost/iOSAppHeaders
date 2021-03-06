//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIColor;

@interface RCTView : UIView
{
    UIColor *_backgroundColor;
    _Bool _removeClippedSubviews;
    CDUnknownBlockType _onAccessibilityAction;
    CDUnknownBlockType _onAccessibilityTap;
    CDUnknownBlockType _onMagicTap;
    CDUnknownBlockType _onAccessibilityEscape;
    NSArray *_accessibilityActions;
    long long _pointerEvents;
    long long _reactLayoutDirection;
    double _borderRadius;
    double _borderTopLeftRadius;
    double _borderTopRightRadius;
    double _borderTopStartRadius;
    double _borderTopEndRadius;
    double _borderBottomLeftRadius;
    double _borderBottomRightRadius;
    double _borderBottomStartRadius;
    double _borderBottomEndRadius;
    struct CGColor *_borderTopColor;
    struct CGColor *_borderRightColor;
    struct CGColor *_borderBottomColor;
    struct CGColor *_borderLeftColor;
    struct CGColor *_borderStartColor;
    struct CGColor *_borderEndColor;
    struct CGColor *_borderColor;
    double _borderTopWidth;
    double _borderRightWidth;
    double _borderBottomWidth;
    double _borderLeftWidth;
    double _borderStartWidth;
    double _borderEndWidth;
    double _borderWidth;
    long long _borderStyle;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

+ (struct UIEdgeInsets)contentInsetsForView:(id)arg1;
+ (void)autoAdjustInsetsForView:(id)arg1 withScrollView:(id)arg2 updateOffset:(_Bool)arg3;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(nonatomic) long long borderStyle; // @synthesize borderStyle=_borderStyle;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double borderEndWidth; // @synthesize borderEndWidth=_borderEndWidth;
@property(nonatomic) double borderStartWidth; // @synthesize borderStartWidth=_borderStartWidth;
@property(nonatomic) double borderLeftWidth; // @synthesize borderLeftWidth=_borderLeftWidth;
@property(nonatomic) double borderBottomWidth; // @synthesize borderBottomWidth=_borderBottomWidth;
@property(nonatomic) double borderRightWidth; // @synthesize borderRightWidth=_borderRightWidth;
@property(nonatomic) double borderTopWidth; // @synthesize borderTopWidth=_borderTopWidth;
@property(nonatomic) struct CGColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) struct CGColor *borderEndColor; // @synthesize borderEndColor=_borderEndColor;
@property(nonatomic) struct CGColor *borderStartColor; // @synthesize borderStartColor=_borderStartColor;
@property(nonatomic) struct CGColor *borderLeftColor; // @synthesize borderLeftColor=_borderLeftColor;
@property(nonatomic) struct CGColor *borderBottomColor; // @synthesize borderBottomColor=_borderBottomColor;
@property(nonatomic) struct CGColor *borderRightColor; // @synthesize borderRightColor=_borderRightColor;
@property(nonatomic) struct CGColor *borderTopColor; // @synthesize borderTopColor=_borderTopColor;
@property(nonatomic) double borderBottomEndRadius; // @synthesize borderBottomEndRadius=_borderBottomEndRadius;
@property(nonatomic) double borderBottomStartRadius; // @synthesize borderBottomStartRadius=_borderBottomStartRadius;
@property(nonatomic) double borderBottomRightRadius; // @synthesize borderBottomRightRadius=_borderBottomRightRadius;
@property(nonatomic) double borderBottomLeftRadius; // @synthesize borderBottomLeftRadius=_borderBottomLeftRadius;
@property(nonatomic) double borderTopEndRadius; // @synthesize borderTopEndRadius=_borderTopEndRadius;
@property(nonatomic) double borderTopStartRadius; // @synthesize borderTopStartRadius=_borderTopStartRadius;
@property(nonatomic) double borderTopRightRadius; // @synthesize borderTopRightRadius=_borderTopRightRadius;
@property(nonatomic) double borderTopLeftRadius; // @synthesize borderTopLeftRadius=_borderTopLeftRadius;
@property(nonatomic) double borderRadius; // @synthesize borderRadius=_borderRadius;
@property(nonatomic) _Bool removeClippedSubviews; // @synthesize removeClippedSubviews=_removeClippedSubviews;
@property(nonatomic) long long reactLayoutDirection; // @synthesize reactLayoutDirection=_reactLayoutDirection;
@property(nonatomic) long long pointerEvents; // @synthesize pointerEvents=_pointerEvents;
@property(copy, nonatomic) NSArray *accessibilityActions; // @synthesize accessibilityActions=_accessibilityActions;
@property(copy, nonatomic) CDUnknownBlockType onAccessibilityEscape; // @synthesize onAccessibilityEscape=_onAccessibilityEscape;
@property(copy, nonatomic) CDUnknownBlockType onMagicTap; // @synthesize onMagicTap=_onMagicTap;
@property(copy, nonatomic) CDUnknownBlockType onAccessibilityTap; // @synthesize onAccessibilityTap=_onAccessibilityTap;
@property(copy, nonatomic) CDUnknownBlockType onAccessibilityAction; // @synthesize onAccessibilityAction=_onAccessibilityAction;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateClippingForLayer:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)reactSetFrame:(struct CGRect)arg1;
- (CDStruct_a5ac02f4)borderColors;
- (CDStruct_d2b197d1)cornerRadii;
- (struct UIEdgeInsets)bordersAsInsets;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)layoutSubviews;
- (void)updateClippedSubviews;
- (void)didUpdateReactSubviews;
- (void)react_updateClippedSubviewsWithClipRect:(struct CGRect)arg1 relativeToView:(id)arg2;
- (void)react_remountAllSubviews;
- (id)description;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityActivate;
- (_Bool)isAccessibilityElement;
- (id)reactAccessibilityElement;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)didActivateAccessibilityCustomAction:(id)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


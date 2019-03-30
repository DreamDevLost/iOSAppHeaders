//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface IGTextLinkCarouselConfig : NSObject
{
    long long _linkStyle;
    UIFont *_font;
    UIColor *_titleColor;
    UIColor *_linkColor;
    double _interitemSpacing;
    double _minimumLinkHeight;
    struct UIEdgeInsets _sectionSeparatorInset;
}

+ (id)imageAndTitleConfig;
+ (id)boldConfig;
+ (id)defaultConfig;
@property(readonly, nonatomic) struct UIEdgeInsets sectionSeparatorInset; // @synthesize sectionSeparatorInset=_sectionSeparatorInset;
@property(readonly, nonatomic) double minimumLinkHeight; // @synthesize minimumLinkHeight=_minimumLinkHeight;
@property(readonly, nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(readonly, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) long long linkStyle; // @synthesize linkStyle=_linkStyle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLinkStyle:(long long)arg1 font:(id)arg2 titleColor:(id)arg3 linkColor:(id)arg4 interitemSpacing:(double)arg5 minimumLinkHeight:(double)arg6 sectionSeparatorInset:(struct UIEdgeInsets)arg7;

@end


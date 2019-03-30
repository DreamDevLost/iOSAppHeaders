//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class UIColor, UIFont;

@interface IGStringStyle : NSObject <NSCopying, NSMutableCopying>
{
    long long _textAlignment;
    double _paragraphSpacing;
    double _minLineHeight;
    double _maxLineHeight;
    double _firstLineHeadIndent;
    double _lineHeightMultiple;
    UIFont *_defaultFont;
    UIFont *_defaultBoldFont;
    UIColor *_defaultColor;
    UIColor *_linkColor;
    UIColor *_linkHighlightedColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    double _shadowRadius;
    _Bool _shouldBoldLink;
    _Bool _shouldUnderlineLink;
    _Bool _skipFontStyling;
    _Bool _skipParagraphStyling;
    long long _lineBreakMode;
}

@property(readonly, nonatomic) _Bool skipParagraphStyling; // @synthesize skipParagraphStyling=_skipParagraphStyling;
@property(readonly, nonatomic) _Bool skipFontStyling; // @synthesize skipFontStyling=_skipFontStyling;
@property(readonly, nonatomic) _Bool shouldUnderlineLink; // @synthesize shouldUnderlineLink=_shouldUnderlineLink;
@property(readonly, nonatomic) _Bool shouldBoldLink; // @synthesize shouldBoldLink=_shouldBoldLink;
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(readonly, nonatomic) UIFont *defaultBoldFont; // @synthesize defaultBoldFont=_defaultBoldFont;
@property(readonly, nonatomic) UIFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property(readonly, nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(readonly, nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(readonly, nonatomic) double firstLineHeadIndent; // @synthesize firstLineHeadIndent=_firstLineHeadIndent;
@property(readonly, nonatomic) double maxLineHeight; // @synthesize maxLineHeight=_maxLineHeight;
@property(readonly, nonatomic) double minLineHeight; // @synthesize minLineHeight=_minLineHeight;
@property(readonly, nonatomic) double paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) UIColor *linkHighlightedColor;
@property(readonly, nonatomic) UIColor *linkColor;
- (id)initWithFont:(id)arg1;
- (id)initWithFontSize:(long long)arg1;
- (id)init;

@end


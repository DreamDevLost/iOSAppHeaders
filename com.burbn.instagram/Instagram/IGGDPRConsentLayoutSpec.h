//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface IGGDPRConsentLayoutSpec : NSObject
{
    UIFont *_headerFont;
    UIFont *_contentSubHeaderFont;
    UIFont *_contentParagraphFont;
    UIFont *_contentTextLinkFont;
    UIColor *_headerColor;
    UIColor *_contentColor;
    long long _headerAlignment;
    long long _contentAlignment;
}

+ (id)initLayoutSpecWithConsentContext:(id)arg1;
+ (id)registrationFlowLayoutSpec;
+ (id)existingFlowLayoutSpec;
@property(readonly, nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(readonly, nonatomic) long long headerAlignment; // @synthesize headerAlignment=_headerAlignment;
@property(readonly, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(readonly, nonatomic) UIColor *headerColor; // @synthesize headerColor=_headerColor;
@property(readonly, nonatomic) UIFont *contentTextLinkFont; // @synthesize contentTextLinkFont=_contentTextLinkFont;
@property(readonly, nonatomic) UIFont *contentParagraphFont; // @synthesize contentParagraphFont=_contentParagraphFont;
@property(readonly, nonatomic) UIFont *contentSubHeaderFont; // @synthesize contentSubHeaderFont=_contentSubHeaderFont;
@property(readonly, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
- (void).cxx_destruct;
- (id)initWithHeaderFont:(id)arg1 headerAlignment:(long long)arg2 contentAlignment:(long long)arg3;

@end

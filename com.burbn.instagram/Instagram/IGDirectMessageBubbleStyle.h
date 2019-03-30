//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectMessageCellContentTheme, IGImageTintConfig, UIColor;

@interface IGDirectMessageBubbleStyle : FBValueObject <NSCopying, NSCoding>
{
    UIColor *_borderColor;
    IGImageTintConfig *_backgroundTintConfig;
    IGDirectMessageCellContentTheme *_contentTheme;
}

@property(readonly, copy, nonatomic) IGDirectMessageCellContentTheme *contentTheme; // @synthesize contentTheme=_contentTheme;
@property(readonly, copy, nonatomic) IGImageTintConfig *backgroundTintConfig; // @synthesize backgroundTintConfig=_backgroundTintConfig;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (id)initWithBorderColor:(id)arg1 backgroundTintConfig:(id)arg2 contentTheme:(id)arg3;

@end


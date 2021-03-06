//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGGradientLayerConfig, NSString, UIColor;

@interface IGImageTitleViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_title;
    double _fontSize;
    UIColor *_tintColor;
    NSString *_imageName;
    IGGradientLayerConfig *_gradientConfig;
    double _cornerRadius;
    double _imageTitleSpace;
}

@property(readonly, nonatomic) double imageTitleSpace; // @synthesize imageTitleSpace=_imageTitleSpace;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, copy, nonatomic) IGGradientLayerConfig *gradientConfig; // @synthesize gradientConfig=_gradientConfig;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 fontSize:(double)arg2 tintColor:(id)arg3 imageName:(id)arg4 gradientConfig:(id)arg5 cornerRadius:(double)arg6 imageTitleSpace:(double)arg7;

@end


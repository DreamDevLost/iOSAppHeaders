//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGTypographyStyle;

@interface IGDirectInboxThreadCellContentTheme : FBValueObject <NSCopying, NSCoding>
{
    _Bool _useHighContrast;
    IGTypographyStyle *_threadNameStyle;
    IGTypographyStyle *_threadNameEmphasizedStyle;
    IGTypographyStyle *_digestMessageStyle;
    IGTypographyStyle *_digestMessageEmphasizedStyle;
    IGTypographyStyle *_socialContextStyle;
    IGTypographyStyle *_timestampStyle;
    IGTypographyStyle *_schoolStyle;
}

+ (id)mainAppConfig;
+ (id)directAppConfig;
@property(readonly, nonatomic) _Bool useHighContrast; // @synthesize useHighContrast=_useHighContrast;
@property(readonly, copy, nonatomic) IGTypographyStyle *schoolStyle; // @synthesize schoolStyle=_schoolStyle;
@property(readonly, copy, nonatomic) IGTypographyStyle *timestampStyle; // @synthesize timestampStyle=_timestampStyle;
@property(readonly, copy, nonatomic) IGTypographyStyle *socialContextStyle; // @synthesize socialContextStyle=_socialContextStyle;
@property(readonly, copy, nonatomic) IGTypographyStyle *digestMessageEmphasizedStyle; // @synthesize digestMessageEmphasizedStyle=_digestMessageEmphasizedStyle;
@property(readonly, copy, nonatomic) IGTypographyStyle *digestMessageStyle; // @synthesize digestMessageStyle=_digestMessageStyle;
@property(readonly, copy, nonatomic) IGTypographyStyle *threadNameEmphasizedStyle; // @synthesize threadNameEmphasizedStyle=_threadNameEmphasizedStyle;
@property(readonly, copy, nonatomic) IGTypographyStyle *threadNameStyle; // @synthesize threadNameStyle=_threadNameStyle;
- (void).cxx_destruct;
- (id)initWithThreadNameStyle:(id)arg1 threadNameEmphasizedStyle:(id)arg2 digestMessageStyle:(id)arg3 digestMessageEmphasizedStyle:(id)arg4 socialContextStyle:(id)arg5 timestampStyle:(id)arg6 schoolStyle:(id)arg7 useHighContrast:(_Bool)arg8;

@end


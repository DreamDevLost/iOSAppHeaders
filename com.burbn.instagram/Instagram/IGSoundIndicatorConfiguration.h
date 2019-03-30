//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIBezierPath;

@interface IGSoundIndicatorConfiguration : NSObject
{
    UIBezierPath *_speakerPath;
    UIBezierPath *_smallSoundwavePath;
    UIBezierPath *_largeSoundwavePath;
    UIBezierPath *_crossPath;
    CDStruct_b17e9ffe _layoutSpec;
}

+ (id)defaultConfiguration;
@property(readonly, nonatomic) UIBezierPath *crossPath; // @synthesize crossPath=_crossPath;
@property(readonly, nonatomic) UIBezierPath *largeSoundwavePath; // @synthesize largeSoundwavePath=_largeSoundwavePath;
@property(readonly, nonatomic) UIBezierPath *smallSoundwavePath; // @synthesize smallSoundwavePath=_smallSoundwavePath;
@property(readonly, nonatomic) UIBezierPath *speakerPath; // @synthesize speakerPath=_speakerPath;
@property(readonly, nonatomic) CDStruct_b17e9ffe layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void).cxx_destruct;
- (id)_initWithLayoutSpec:(CDStruct_b17e9ffe)arg1 speakerPath:(id)arg2 smallSoundwavePath:(id)arg3 largeSoundwavePath:(id)arg4 crossPath:(id)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGColorSpaceConfiguration : NSObject
{
    _Bool _enableWideColorIfAvailable;
}

+ (id)sharedConfiguration;
@property(nonatomic) _Bool enableWideColorIfAvailable; // @synthesize enableWideColorIfAvailable=_enableWideColorIfAvailable;
- (_Bool)screenSupportsWideColor;
- (_Bool)shouldUseWideColor;

@end

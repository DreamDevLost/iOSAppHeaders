//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLocale;

@interface IGLocalizationBundleHelper : NSObject
{
    _Bool _shouldUseCompressedStrings;
    long long *_bundleCacheTockenAddress;
    NSLocale *_currentLocale;
}

- (void).cxx_destruct;
- (void)updateLocale:(id)arg1;
- (id)currentLocalizationBundle;
- (id)initWithLocale:(id)arg1 shouldUseCompressedStrings:(_Bool)arg2;

@end


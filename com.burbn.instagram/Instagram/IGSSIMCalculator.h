//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaQualityDataStore;

@interface IGSSIMCalculator : NSObject
{
    IGMediaQualityDataStore *_dataStore;
    _Bool _convertColorSpace;
}

- (void).cxx_destruct;
- (void)calculateSSIMForMediaId:(id)arg1 withEncodedAsset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)initWithDataStore:(id)arg1 convertColorSpace:(_Bool)arg2;

@end


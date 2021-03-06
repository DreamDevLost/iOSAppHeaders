//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBObjectGraphConfiguration, NSMutableArray;

@interface FBRetainCostCalculator : NSObject
{
    NSMutableArray *_candidates;
    FBObjectGraphConfiguration *_configuration;
    CDUnknownBlockType _sizeBlock;
    CDUnknownBlockType _additionalInfoBlock;
    id <FBRetainCostLogError> _errorLogger;
}

- (void).cxx_destruct;
- (void)addRoot:(id)arg1;
- (id)getAllocationSnapshot;
- (id)_traverseGraphFromObject:(id)arg1 withObjectMap:(id)arg2;
- (id)initWithObjectGraphConfiguration:(id)arg1 errorLogger:(id)arg2;
- (id)initWithObjectGraphConfiguration:(id)arg1 errorLogger:(id)arg2 sizeBlock:(CDUnknownBlockType)arg3 additionalInfoBlock:(CDUnknownBlockType)arg4;

@end


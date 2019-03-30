//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGCompositionConditionalExecutor : NSObject
{
    struct mutex _mutex;
    NSMutableArray *_conditionalExecutors;
    NSMutableArray *_executionBlocks;
    _Bool _conditionsMet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_removeConditionalAndExecuteIfNeeded:(id)arg1;
- (void)executeWhenConditionMet:(CDUnknownBlockType)arg1;
- (id)addConditionalExecutor;

@end


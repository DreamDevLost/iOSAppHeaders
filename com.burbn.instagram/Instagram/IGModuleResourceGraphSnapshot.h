//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGModuleLayoutRepresentation, NSMutableDictionary, NSMutableOrderedSet;

@interface IGModuleResourceGraphSnapshot : NSObject
{
    NSMutableOrderedSet *_modules;
    NSMutableDictionary *_moduleGraph;
    IGModuleLayoutRepresentation *_currentModule;
}

@property(readonly, nonatomic) IGModuleLayoutRepresentation *currentModule; // @synthesize currentModule=_currentModule;
- (void).cxx_destruct;
- (id)statesContainingIdentifier:(id)arg1;
- (id)initWithCurrentState:(id)arg1 modules:(id)arg2 graph:(id)arg3;

@end


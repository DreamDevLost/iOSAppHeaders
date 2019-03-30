//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGLocalExperiment : NSObject
{
    _Bool _shouldLogImmediately;
    _Bool _hasBeenExposed;
    NSString *_experimentName;
    unsigned long long _totalSegments;
    NSArray *_groups;
    unsigned long long _deployGroupIndex;
    NSString *_selectedGroupName;
    unsigned long long _selectedSegment;
    unsigned long long _totalGroupSize;
}

@property _Bool hasBeenExposed; // @synthesize hasBeenExposed=_hasBeenExposed;
@property(readonly, nonatomic) _Bool shouldLogImmediately; // @synthesize shouldLogImmediately=_shouldLogImmediately;
@property(readonly, nonatomic) unsigned long long totalGroupSize; // @synthesize totalGroupSize=_totalGroupSize;
@property(readonly, nonatomic) unsigned long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(readonly, nonatomic) NSString *selectedGroupName; // @synthesize selectedGroupName=_selectedGroupName;
@property(readonly, nonatomic) unsigned long long deployGroupIndex; // @synthesize deployGroupIndex=_deployGroupIndex;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) unsigned long long totalSegments; // @synthesize totalSegments=_totalSegments;
@property(readonly, nonatomic) NSString *experimentName; // @synthesize experimentName=_experimentName;
- (void).cxx_destruct;
- (id)peekGroupName;
- (id)groupName;
- (id)initWithExperimentName:(id)arg1 salt:(id)arg2 totalSegments:(unsigned long long)arg3 expirationDate:(id)arg4 groups:(id)arg5 deployGroupIndex:(unsigned long long)arg6 shouldLogImmediately:(_Bool)arg7;

@end


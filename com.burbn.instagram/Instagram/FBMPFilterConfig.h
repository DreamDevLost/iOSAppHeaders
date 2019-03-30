//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMPData.h"

@class NSDictionary, NSString;

@interface FBMPFilterConfig : NSObject <FBMPData>
{
    Class _filterClass;
    NSDictionary *_dictionary;
}

+ (id)configForFilterClass:(Class)arg1 withDictionary:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
- (void).cxx_destruct;
- (_Bool)matchesFilter:(id)arg1;
- (id)initWithFilterClass:(Class)arg1 dictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

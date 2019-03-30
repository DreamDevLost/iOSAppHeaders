//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashTrackEntryContaining.h"

@class NSArray, NSString;

@interface FNFDashTrackEntryContainer : NSObject <FNFDashTrackEntryContaining>
{
    NSArray *_timelineEntries;
    NSString *_urlTemplate;
    vector_12bd641b _logicalIndexLookup;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _logicalTimeLookup;
    int _sequenceCount;
    _Bool _hasRepetition;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_lookupPhysicalIndexForLogicalIndex:(int)arg1;
- (unsigned int)relativeStartTimeForEntryAtIndex:(int)arg1;
- (int)sequenceIndexForRelativeTime:(unsigned int)arg1;
- (id)timelineEntryAtIndex:(int)arg1;
- (id)lastEntry;
- (id)firstEntry;
- (int)count;
- (id)initWithTimelineEntries:(id)arg1 mediaUrlTemplate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


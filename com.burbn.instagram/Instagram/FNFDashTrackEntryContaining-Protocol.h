//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FNFMpdTimelineEntry;

@protocol FNFDashTrackEntryContaining <NSObject>
- (int)sequenceIndexForRelativeTime:(unsigned int)arg1;
- (unsigned int)relativeStartTimeForEntryAtIndex:(int)arg1;
- (FNFMpdTimelineEntry *)timelineEntryAtIndex:(int)arg1;
- (FNFMpdTimelineEntry *)lastEntry;
- (FNFMpdTimelineEntry *)firstEntry;
- (int)count;
@end


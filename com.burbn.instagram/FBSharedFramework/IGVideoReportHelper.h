//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface IGVideoReportHelper : NSObject
{
    NSMutableArray *_lastPlayedMediaIds;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedHelper;
- (void).cxx_destruct;
- (id)lastPlayedMediaIds;
- (void)addPlayedMediaId:(id)arg1;
- (id)init;

@end

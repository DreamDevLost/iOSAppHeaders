//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGQPDataStoreEventRecord, NSString;

@interface IGQPDataStoreEventRecordList : NSObject <NSCoding>
{
    NSString *_event;
    IGQPDataStoreEventRecord *_mostRecentRecord;
    long long _count;
}

@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) IGQPDataStoreEventRecord *mostRecentRecord; // @synthesize mostRecentRecord=_mostRecentRecord;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 count:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


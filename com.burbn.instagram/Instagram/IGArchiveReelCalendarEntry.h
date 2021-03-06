//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCalendarEntry.h"

@class IGReelShell, NSDate, NSString;

@interface IGArchiveReelCalendarEntry : NSObject <IGCalendarEntry>
{
    NSDate *_date;
    IGReelShell *_reelShell;
}

@property(readonly, nonatomic) IGReelShell *reelShell; // @synthesize reelShell=_reelShell;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithReelShell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


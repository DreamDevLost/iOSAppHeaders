//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGReportFlowTracker : NSObject
{
    NSString *_salt;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *salt; // @synthesize salt=_salt;
- (void).cxx_destruct;
- (id)_generateNewSalt;
- (id)_genMd5HashForPayload:(id)arg1;
- (id)getHashForPayload:(id)arg1;
- (void)updateTrackerWithAction:(unsigned long long)arg1;

@end


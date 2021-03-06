//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FBFunnelBeaconHandler : NSObject
{
    NSString *_persistFolderPath;
    NSString *_persistedFilePath;
    NSMutableDictionary *_eventBeaconLookupTable;
}

+ (id)beaconHandler;
+ (void)setBeaconHandler:(id)arg1 withIntegrationDelegate:(id)arg2;
@property(copy, nonatomic) NSMutableDictionary *eventBeaconLookupTable; // @synthesize eventBeaconLookupTable=_eventBeaconLookupTable;
- (void).cxx_destruct;
- (id)persistedFilePath;
- (void)_persistEventBeacon;
- (id)_generateNewBeaconSession;
- (id)_generateNewEventBeacon;
- (_Bool)shouldIncrementBeacon:(id)arg1 withSamplingRate:(int)arg2;
- (int)beaconIdForFunnel:(id)arg1;
- (id)beaconSessionForFunnel:(id)arg1;
- (id)initWithPersistFolderPath:(id)arg1;

@end


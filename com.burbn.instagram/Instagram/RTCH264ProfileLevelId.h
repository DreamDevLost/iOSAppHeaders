//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RTCH264ProfileLevelId : NSObject
{
    unsigned long long _profile;
    unsigned long long _level;
    NSString *_hexString;
}

@property(retain, nonatomic) NSString *hexString; // @synthesize hexString=_hexString;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)initWithProfile:(unsigned long long)arg1 level:(unsigned long long)arg2;
- (id)initWithHexString:(id)arg1;

@end


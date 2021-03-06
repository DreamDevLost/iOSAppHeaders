//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface IGRageShakeSettings : NSObject
{
    NSString *_appName;
    NSNumber *_categoryID;
    NSArray *_tags;
}

+ (void)configureWithReportSettings:(id)arg1;
+ (id)reportSettings;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) NSNumber *categoryID; // @synthesize categoryID=_categoryID;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)initWithAppName:(id)arg1 categoryID:(id)arg2 tags:(id)arg3;

@end


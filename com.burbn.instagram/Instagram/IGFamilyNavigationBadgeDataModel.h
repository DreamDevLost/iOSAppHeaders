//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGFamilyNavigationBadgeDataModel : NSObject
{
    _Bool _shouldIncludeNotifInCount;
    NSString *_userId;
    NSArray *_appMetaDataArray;
}

@property(readonly, copy, nonatomic) NSArray *appMetaDataArray; // @synthesize appMetaDataArray=_appMetaDataArray;
@property _Bool shouldIncludeNotifInCount; // @synthesize shouldIncludeNotifInCount=_shouldIncludeNotifInCount;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 shouldIncludeNotifInCount:(_Bool)arg2 appMetaDataArray:(id)arg3;

@end


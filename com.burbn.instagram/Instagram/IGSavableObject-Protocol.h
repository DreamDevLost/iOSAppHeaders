//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPhoto, NSArray, NSString;

@protocol IGSavableObject <NSObject>
@property(readonly) long long saveItemType;
@property(copy) NSArray *savedCollectionIds;
@property(readonly, copy) NSString *saveId;
@property(readonly, copy) IGPhoto *savePhoto;
@end

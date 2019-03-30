//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol IGSaveLogger <NSObject>
- (void)logUnsaveFailed;
- (void)logSaveFailed;
- (void)logRemoveFromCollectionWithCollectionId:(NSString *)arg1 extras:(NSDictionary *)arg2;
- (void)logAddToCollectionWithCollectionId:(NSString *)arg1;
- (void)logUnsaveWithExtras:(NSDictionary *)arg1;
- (void)logSave;
@end

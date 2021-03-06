//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGEmptyFeedModel, IGEmptyFeedStyle, NSString;

@protocol IGFeedStatusViewDataSource <NSObject>
- (NSString *)authorizationErrorMessageDetail;
- (NSString *)authorizationErrorMessage;
- (NSString *)errorMessage;
- (IGEmptyFeedModel *)emptyFeedModel;
- (unsigned long long)itemCount;
- (long long)authorizationError;
- (_Bool)moreAvailable;
- (_Bool)loadedOnce;
- (long long)status;

@optional
- (_Bool)hasRestrictedFeed;
- (IGEmptyFeedStyle *)emptyFeedStyle;
@end


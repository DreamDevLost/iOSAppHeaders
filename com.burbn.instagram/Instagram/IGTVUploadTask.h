//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPostCreationManager, NSString;

@interface IGTVUploadTask : NSObject
{
    IGPostCreationManager *_postCreationManager;
    _Bool _useNewUploadInfra;
    NSString *_uploadID;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)completeShareWithMetadata:(id)arg1 forUserPK:(id)arg2;
- (void)uploadCoverImage:(id)arg1;
- (id)initWithComposition:(id)arg1 postCreationManager:(id)arg2 userSession:(id)arg3;

@end

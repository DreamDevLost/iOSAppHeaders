//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGHashtagPostCreationLogger : NSObject
{
    NSString *_uploadId;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_getCommonExtras;
- (void)logHashtagTypeAheadDoneWithModule:(id)arg1 hashtagsMetadata:(id)arg2;
- (void)logHashtagRowClickWithExtras:(id)arg1 module:(id)arg2;
- (id)initWithUploadId:(id)arg1 userSession:(id)arg2;

@end

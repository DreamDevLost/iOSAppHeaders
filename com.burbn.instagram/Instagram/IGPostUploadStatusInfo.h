//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGPostShare, IGPostUpload;

@interface IGPostUploadStatusInfo : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGPostUpload *_postUpload_postUpload;
    _Bool _postUpload_expanded;
    IGPostShare *_postShare_postShare;
}

+ (id)postUploadWithPostUpload:(id)arg1 expanded:(_Bool)arg2;
+ (id)postShareWithPostShare:(id)arg1;
- (void).cxx_destruct;
- (void)matchPostUpload:(CDUnknownBlockType)arg1 postShare:(CDUnknownBlockType)arg2;

@end

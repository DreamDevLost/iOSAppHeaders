//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaUploadFlow, IGUploadModel;

@interface IGMediaUploadModelHolder : NSObject
{
    IGMediaUploadFlow *_uploadFlow;
    IGUploadModel *_uploadModel;
}

@property(readonly, nonatomic) IGUploadModel *uploadModel; // @synthesize uploadModel=_uploadModel;
@property(readonly, nonatomic) IGMediaUploadFlow *uploadFlow; // @synthesize uploadFlow=_uploadFlow;
- (void).cxx_destruct;
- (id)initWithUploadFlow:(id)arg1 uploadModel:(id)arg2;

@end

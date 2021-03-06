//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDraftPreview, NSString;

@interface IGDraftBeingStored : NSObject
{
    _Bool _hasFinishedArchiving;
    long long _numClipEncodesRemaining;
    NSString *_filePath;
    NSString *_previewFilePath;
    CDUnknownBlockType _completion;
    IGDraftPreview *_draftPreview;
}

@property(retain, nonatomic) IGDraftPreview *draftPreview; // @synthesize draftPreview=_draftPreview;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *previewFilePath; // @synthesize previewFilePath=_previewFilePath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long numClipEncodesRemaining; // @synthesize numClipEncodesRemaining=_numClipEncodesRemaining;
@property(nonatomic) _Bool hasFinishedArchiving; // @synthesize hasFinishedArchiving=_hasFinishedArchiving;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSURL;

@interface FBARSegmentationModelConfiguration : FBValueObject <NSCopying>
{
    _Bool _isFullyAsync;
    NSURL *_execNetFileURL;
    NSURL *_predictNetFileURL;
}

@property(readonly, nonatomic) _Bool isFullyAsync; // @synthesize isFullyAsync=_isFullyAsync;
@property(readonly, copy, nonatomic) NSURL *predictNetFileURL; // @synthesize predictNetFileURL=_predictNetFileURL;
@property(readonly, copy, nonatomic) NSURL *execNetFileURL; // @synthesize execNetFileURL=_execNetFileURL;
- (void).cxx_destruct;
- (id)initWithExecNetFileURL:(id)arg1 predictNetFileURL:(id)arg2 isFullyAsync:(_Bool)arg3;

@end

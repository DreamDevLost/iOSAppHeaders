//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryNetegoModel;

@interface IGStoryPlayerMediaViewConfig : NSObject
{
    _Bool _coverFrameEnabled;
    IGStoryNetegoModel *_storyNetegoModel;
}

+ (id)storyNetegoConfigWithModel:(id)arg1;
+ (id)defaultConfig;
@property(readonly, nonatomic) IGStoryNetegoModel *storyNetegoModel; // @synthesize storyNetegoModel=_storyNetegoModel;
@property(readonly, nonatomic) _Bool coverFrameEnabled; // @synthesize coverFrameEnabled=_coverFrameEnabled;
- (void).cxx_destruct;
- (id)initWithCoverFrameEnabled:(_Bool)arg1 storyNetegoModel:(id)arg2;
- (id)initWithCoverFrameEnabled:(_Bool)arg1;

@end


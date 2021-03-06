//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGLiveCommentModel, NSString;

@interface IGPostLiveComment : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    IGLiveCommentModel *_commentModel;
    double _offset;
    NSString *_event;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) IGLiveCommentModel *commentModel; // @synthesize commentModel=_commentModel;
- (void).cxx_destruct;
- (id)initWithCommentModel:(id)arg1 offset:(double)arg2 event:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


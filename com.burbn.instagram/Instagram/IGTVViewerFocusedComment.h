//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGTVViewerFocusedComment : FBValueObject <NSCopying, NSCoding>
{
    NSString *_commentId;
    long long _entryPoint;
}

@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (id)initWithCommentId:(id)arg1 entryPoint:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGCommentDraft : NSObject
{
    NSString *_draftText;
    NSString *_draftID;
}

@property(readonly, copy, nonatomic) NSString *draftID; // @synthesize draftID=_draftID;
@property(readonly, copy, nonatomic) NSString *draftText; // @synthesize draftText=_draftText;
- (void).cxx_destruct;
- (id)initWithDraftID:(id)arg1 draftText:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

@interface IGSearchHashtagProvider : FBValueObject <NSCopying, NSCoding>
{
    _Bool _newHashtagCellDesignEnabled;
    _Bool _showCheckMark;
    NSDictionary *_previouslySelectedTagNamesToHashtagModels;
}

@property(readonly, copy, nonatomic) NSDictionary *previouslySelectedTagNamesToHashtagModels; // @synthesize previouslySelectedTagNamesToHashtagModels=_previouslySelectedTagNamesToHashtagModels;
@property(readonly, nonatomic) _Bool showCheckMark; // @synthesize showCheckMark=_showCheckMark;
@property(readonly, nonatomic) _Bool newHashtagCellDesignEnabled; // @synthesize newHashtagCellDesignEnabled=_newHashtagCellDesignEnabled;
- (void).cxx_destruct;
- (id)initWithNewHashtagCellDesignEnabled:(_Bool)arg1 showCheckMark:(_Bool)arg2 previouslySelectedTagNamesToHashtagModels:(id)arg3;

@end


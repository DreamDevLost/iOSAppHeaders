//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGImageTitleSubtitleViewLayoutSpec;

@interface IGDirectReplyToAuthorViewModel : NSObject <IGListDiffable>
{
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
}

@property(readonly, nonatomic) IGImageTitleSubtitleViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithLayoutSpec:(id)arg1;

@end

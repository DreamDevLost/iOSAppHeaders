//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray;

@interface IGGenericSurveyQuestionTitlesDataSource : NSObject <IGListDiffable>
{
    NSArray *_viewModels;
}

@property(readonly, copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithQuestionListItem:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGListCellController : NSObject
{
    id <IGListSectionContext> _sectionContext;
}

+ (Class)collectionViewCellClass;
@property(readonly, nonatomic) __weak id <IGListSectionContext> sectionContext; // @synthesize sectionContext=_sectionContext;
- (void).cxx_destruct;
- (void)didSelectCell;
- (struct CGSize)sizeForWidth:(double)arg1;
- (id)cellWithCollectionContext:(id)arg1 sectionController:(id)arg2 index:(long long)arg3;
- (void)configureCell:(id)arg1;
- (id)initWithSectionContext:(id)arg1;

@end


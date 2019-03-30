//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGGalleryPageCalculator : NSObject
{
    struct UIEdgeInsets _contentInset;
    struct CGSize _viewportSize;
    unsigned long long _numberOfPages;
}

@property(readonly, nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (struct CGRect)frameForContentOffset:(struct CGPoint)arg1 workingRange:(unsigned long long)arg2;
- (long long)_pageIndexForContentOffset:(struct CGPoint)arg1;
- (struct CGRect)_frameForPageAtIndex:(unsigned long long)arg1;
- (id)initWithContentInset:(struct UIEdgeInsets)arg1 contentSize:(struct CGSize)arg2 viewportSize:(struct CGSize)arg3;
- (id)initWithCollectionView:(id)arg1;

@end


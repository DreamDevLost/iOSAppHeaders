//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface IGDirectThreadCollectionViewLayout : UICollectionViewFlowLayout
{
    id <IGDirectThreadCollectionViewLayoutDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectThreadCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end


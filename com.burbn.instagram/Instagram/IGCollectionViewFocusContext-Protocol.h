//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class UICollectionView;

@protocol IGCollectionViewFocusContext
@property(readonly, nonatomic) UICollectionView *collectionView;
@property(readonly, nonatomic) long long focusedSection;
- (void)removeListener:(id <IGCollectionViewFocusListener>)arg1;
- (void)addListener:(id <IGCollectionViewFocusListener>)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListSupplementaryViewSource.h"

@class IGListSectionController, NSString, UIColor;

@interface IGSeparatorSupplementaryViewSource : NSObject <IGListSupplementaryViewSource>
{
    _Bool _hasTopSeparator;
    _Bool _hasBottomSeparator;
    double _rightInset;
    double _leftInset;
    UIColor *_separatorColor;
    UIColor *_backgroundColor;
    IGListSectionController *_sectionController;
    id <IGListCollectionContext> _collectionContext;
}

@property(readonly, nonatomic) _Bool hasBottomSeparator; // @synthesize hasBottomSeparator=_hasBottomSeparator;
@property(readonly, nonatomic) _Bool hasTopSeparator; // @synthesize hasTopSeparator=_hasTopSeparator;
@property(readonly, nonatomic) __weak id <IGListCollectionContext> collectionContext; // @synthesize collectionContext=_collectionContext;
@property(readonly, nonatomic) __weak IGListSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
- (void).cxx_destruct;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (id)initWithSectionController:(id)arg1 collectionContext:(id)arg2 hasTopSeparator:(_Bool)arg3 hasBottomSeparator:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


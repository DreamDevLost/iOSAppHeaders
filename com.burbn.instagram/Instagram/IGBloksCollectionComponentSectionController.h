//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListDisplayDelegate.h"

@class IGBloksCollectionComponentItem, IGBloksContext, NSString;

@interface IGBloksCollectionComponentSectionController : IGListSectionController <IGListDisplayDelegate>
{
    IGBloksContext *_context;
    IGBloksCollectionComponentItem *_item;
    unsigned long long _direction;
    struct shared_ptr<boost::variant<std::__1::shared_ptr<Lispy::FunctionCall>, Lispy::LoadArgument, boost::variant<std::__1::shared_ptr<Lispy::FunctionRef>, Lispy::None, Lispy::Number, Lispy::ObjectRef, std::__1::shared_ptr<Lispy::PatternCase>, std::__1::shared_ptr<Lispy::PatternDefault>, std::__1::shared_ptr<Lispy::VectorWrapper>, std::__1::shared_ptr<Lispy::MapWrapper>>>> _appearCallback;
    struct shared_ptr<boost::variant<std::__1::shared_ptr<Lispy::FunctionCall>, Lispy::LoadArgument, boost::variant<std::__1::shared_ptr<Lispy::FunctionRef>, Lispy::None, Lispy::Number, Lispy::ObjectRef, std::__1::shared_ptr<Lispy::PatternCase>, std::__1::shared_ptr<Lispy::PatternDefault>, std::__1::shared_ptr<Lispy::VectorWrapper>, std::__1::shared_ptr<Lispy::MapWrapper>>>> _disappearCallback;
    struct BKBloksLayoutResult _computedLayout;
    struct BKBloksLayoutConstrainingSize _constrainingSizeForComputedLayout;
}

+ (Class)collectionViewCellClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct BKBloksLayoutConstrainingSize)_getDefaultConstrainingSize;
- (struct BKBloksLayoutConstrainingSize)_getConstrainingSize;
- (void)_computeAndStoreLayoutIfNeeded;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithContext:(id)arg1 direction:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


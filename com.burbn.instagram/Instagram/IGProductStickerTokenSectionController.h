//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGProductStickerTokenModel;

@interface IGProductStickerTokenSectionController : IGListSectionController
{
    IGProductStickerTokenModel *_tokenModel;
    id <IGProductStickerTokenSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGProductStickerTokenSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@end

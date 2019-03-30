//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGMediaPreloaderItem.h"

@class IGPhoto, NSString;

@interface IGShoppingPDPProductImageViewModel : NSObject <IGListDiffable, IGMediaPreloaderItem>
{
    NSString *_identifier;
    IGPhoto *_photo;
}

@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)mediaOverlay;
- (id)video;
- (long long)mediaType;
- (id)pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 photo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString;

@interface IGGalleryFragment : NSObject <IGListDiffable>
{
    NSString *_fragmentID;
}

@property(readonly, copy, nonatomic) NSString *fragmentID; // @synthesize fragmentID=_fragmentID;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFragmentID:(id)arg1;

@end

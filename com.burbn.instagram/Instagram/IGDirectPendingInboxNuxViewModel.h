//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString;

@interface IGDirectPendingInboxNuxViewModel : NSObject <IGListDiffable>
{
    NSString *_nuxString;
    double _cellHeight;
}

@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, nonatomic) NSString *nuxString; // @synthesize nuxString=_nuxString;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)init;

@end


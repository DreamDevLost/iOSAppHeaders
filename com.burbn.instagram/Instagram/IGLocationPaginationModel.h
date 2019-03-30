//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGLocationPaginationModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _moreAvailable;
    NSString *_nextMaxId;
    NSString *_nextPage;
    NSArray *_nextMediaIds;
}

@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSArray *nextMediaIds; // @synthesize nextMediaIds=_nextMediaIds;
@property(readonly, copy, nonatomic) NSString *nextPage; // @synthesize nextPage=_nextPage;
@property(readonly, copy, nonatomic) NSString *nextMaxId; // @synthesize nextMaxId=_nextMaxId;
- (void).cxx_destruct;
- (id)initWithNextMaxId:(id)arg1 nextPage:(id)arg2 nextMediaIds:(id)arg3 moreAvailable:(_Bool)arg4;

@end


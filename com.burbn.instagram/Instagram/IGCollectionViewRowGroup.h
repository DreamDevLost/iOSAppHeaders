//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface IGCollectionViewRowGroup : NSObject
{
    _Bool _hasFloatingHeader;
    NSIndexPath *_headerIndexPath;
    NSIndexPath *_endIndexPath;
}

@property(retain, nonatomic) NSIndexPath *endIndexPath; // @synthesize endIndexPath=_endIndexPath;
@property(retain, nonatomic) NSIndexPath *headerIndexPath; // @synthesize headerIndexPath=_headerIndexPath;
@property(nonatomic) _Bool hasFloatingHeader; // @synthesize hasFloatingHeader=_hasFloatingHeader;
- (void).cxx_destruct;

@end


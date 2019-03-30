//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGSearchLoggingData : NSObject
{
    _Bool _isCacheResult;
    _Bool _isLocalItem;
    NSArray *_resultList;
    NSArray *_resultIDList;
    NSArray *_resultTypeList;
    NSString *_rankToken;
}

@property(readonly, copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(readonly, nonatomic) _Bool isLocalItem; // @synthesize isLocalItem=_isLocalItem;
@property(readonly, nonatomic) _Bool isCacheResult; // @synthesize isCacheResult=_isCacheResult;
@property(readonly, copy, nonatomic) NSArray *resultTypeList; // @synthesize resultTypeList=_resultTypeList;
@property(readonly, copy, nonatomic) NSArray *resultIDList; // @synthesize resultIDList=_resultIDList;
@property(readonly, copy, nonatomic) NSArray *resultList; // @synthesize resultList=_resultList;
- (void).cxx_destruct;
- (id)initWithResultList:(id)arg1 isCachedResult:(_Bool)arg2 isLocalItem:(_Bool)arg3 rankToken:(id)arg4;

@end


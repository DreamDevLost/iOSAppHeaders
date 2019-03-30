//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface RCTDevMenu : NSObject
{
    _Bool _shakeToShow;
    _Bool _profilingEnabled;
    _Bool _liveReloadEnabled;
    _Bool _hotLoadingEnabled;
    NSArray *_presentedItems;
}

+ (id)moduleName;
@property(readonly, copy, nonatomic) NSArray *presentedItems; // @synthesize presentedItems=_presentedItems;
@property(nonatomic) _Bool hotLoadingEnabled; // @synthesize hotLoadingEnabled=_hotLoadingEnabled;
@property(nonatomic) _Bool liveReloadEnabled; // @synthesize liveReloadEnabled=_liveReloadEnabled;
@property(nonatomic) _Bool profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property(nonatomic) _Bool shakeToShow; // @synthesize shakeToShow=_shakeToShow;
- (void).cxx_destruct;
- (_Bool)isActionSheetShown;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reload;
- (void)show;

@end

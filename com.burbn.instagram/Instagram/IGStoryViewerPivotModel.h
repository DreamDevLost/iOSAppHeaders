//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IGStoryViewerPivotModel : NSObject
{
    NSArray *_pivotItems;
    long long _currentType;
    long long _mode;
}

@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(readonly, copy, nonatomic) NSArray *pivotItems; // @synthesize pivotItems=_pivotItems;
- (void).cxx_destruct;
- (id)initWithPivotItems:(id)arg1 currentType:(long long)arg2 mode:(long long)arg3;

@end

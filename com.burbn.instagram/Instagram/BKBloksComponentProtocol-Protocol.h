//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BKBloksTemplate.h"

@class NSObject<BKBloksModel>;

@protocol BKBloksComponentProtocol <BKBloksTemplate>
+ (const struct BKBloksComponentConfig *)componentConfig;
+ (const struct BKBloksComponentViewConfig *)viewConfig;
+ (struct BKBloksLayout)computeLayoutWithModel:(NSObject<BKBloksModel> *)arg1 constrainingSize:(struct BKBloksLayoutConstrainingSize)arg2;
@end


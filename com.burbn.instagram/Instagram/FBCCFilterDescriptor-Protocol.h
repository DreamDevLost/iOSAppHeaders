//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCCFilterParameters, FBCaptureCoordinatorFilter, NSString;

@protocol FBCCFilterDescriptor <NSObject>
@property(readonly, nonatomic) NSString *filterName;
- (FBCCFilterParameters *)asFilterParameters;
- (FBCaptureCoordinatorFilter *)asCCFilter;
@end


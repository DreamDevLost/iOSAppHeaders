//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IGFeedSectionControllerDimmingProtocol <NSObject>
@property(nonatomic, getter=isDimmed) _Bool dimmed;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)enableDimmingWithDimmedAlpha:(double)arg1 delegate:(id <IGFeedSectionControllerDimmingDelegate>)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSavePopoutView;

@protocol IGSavePopoutViewDelegate <NSObject>
- (void)savePopoutViewDidFinishAnimation;
- (_Bool)shouldAnimatePopoutView:(IGSavePopoutView *)arg1;
- (struct CGPoint)targetCenterWithPopoutView:(IGSavePopoutView *)arg1;
@end


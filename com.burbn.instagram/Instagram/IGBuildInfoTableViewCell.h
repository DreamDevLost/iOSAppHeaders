//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

@class UILongPressGestureRecognizer;

@interface IGBuildInfoTableViewCell : IGGroupedTableViewCell
{
    UILongPressGestureRecognizer *_longPressGR;
    id <IGBuildInfoTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBuildInfoTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGR; // @synthesize longPressGR=_longPressGR;
- (void).cxx_destruct;
- (void)_handleGesture:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

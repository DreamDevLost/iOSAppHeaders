//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISwitch.h"

@interface IGSwitch : UISwitch
{
    CDUnknownBlockType _switchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
- (void).cxx_destruct;
- (void)toggleIfInAccessibilityMode;
- (void)_onChange;
- (id)initWithSwitchBlock:(CDUnknownBlockType)arg1;

@end


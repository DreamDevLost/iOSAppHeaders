//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KFEventModel, KFInteractivityToolbox;

@interface KFEvent : NSObject
{
    KFInteractivityToolbox *_toolbox;
    KFEventModel *_model;
    _Bool _active;
}

- (void).cxx_destruct;
- (_Bool)satisfiedBy:(id)arg1;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithInteractivityToolbox:(id)arg1 model:(id)arg2;

@end


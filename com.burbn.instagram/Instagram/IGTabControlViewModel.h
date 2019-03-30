//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray;

@interface IGTabControlViewModel : NSObject <IGListDiffable>
{
    id <IGTabControlDelegate> _delegate;
    NSArray *_segments;
    long long _style;
    unsigned long long _selectedIndex;
}

@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) __weak id <IGTabControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithSegments:(id)arg1 style:(long long)arg2 selectedIndex:(unsigned long long)arg3;

@end


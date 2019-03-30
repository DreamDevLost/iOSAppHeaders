//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCanvasElement.h"
#import "NSCoding.h"

@class NSArray, NSString, UIColor;

@interface IGCanvasFooter : NSObject <IGCanvasElement, NSCoding>
{
    NSString *_loggingToken;
    long long _elementIndex;
    unsigned long long _alignment;
    struct UIEdgeInsets _insets;
    UIColor *_backgroundColor;
    NSArray *_footerElements;
}

@property(readonly, copy, nonatomic) NSArray *footerElements; // @synthesize footerElements=_footerElements;
- (void).cxx_destruct;
- (struct UIEdgeInsets)insets;
- (unsigned long long)alignment;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (long long)elementIndex;
- (id)loggingToken;
- (unsigned long long)elementType;
- (id)initWithResponse:(id)arg1 index:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

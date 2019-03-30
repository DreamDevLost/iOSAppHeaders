//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBDateFormatter.h"

@interface FBCompositeDateFormatter : FBDateFormatter
{
    FBDateFormatter *_formatterA;
    FBDateFormatter *_formatterB;
    CDUnknownBlockType _formatBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType formatBlock; // @synthesize formatBlock=_formatBlock;
@property(readonly, nonatomic) FBDateFormatter *formatterB; // @synthesize formatterB=_formatterB;
@property(readonly, nonatomic) FBDateFormatter *formatterA; // @synthesize formatterA=_formatterA;
- (void).cxx_destruct;
- (void)setClock:(id)arg1;
- (id)initWithFormatterA:(id)arg1 formatterB:(id)arg2 formatBlock:(CDUnknownBlockType)arg3;
- (id)formatDate:(id)arg1;

@end

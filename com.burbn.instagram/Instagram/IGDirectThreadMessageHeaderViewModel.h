//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectThreadMessageSenderViewModel, NSString;

@interface IGDirectThreadMessageHeaderViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_uniqueIdentifier;
    NSString *_dateString;
    IGDirectThreadMessageSenderViewModel *_senderViewModel;
    unsigned long long _alignment;
    double _sideMargin;
}

@property(readonly, nonatomic) double sideMargin; // @synthesize sideMargin=_sideMargin;
@property(readonly, nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(readonly, copy, nonatomic) IGDirectThreadMessageSenderViewModel *senderViewModel; // @synthesize senderViewModel=_senderViewModel;
@property(readonly, copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUniqueIdentifier:(id)arg1 dateString:(id)arg2 senderViewModel:(id)arg3 alignment:(unsigned long long)arg4 sideMargin:(double)arg5;

@end


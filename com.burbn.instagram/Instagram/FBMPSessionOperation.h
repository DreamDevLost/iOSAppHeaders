//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMPSessionOperation.h"

@class NSString;

@interface FBMPSessionOperation : NSObject <FBMPSessionOperation>
{
    variant_d68ec686 _operation;
}

@property(readonly, nonatomic) variant_d68ec686 operation; // @synthesize operation=_operation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithOperation:(variant_d68ec686)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


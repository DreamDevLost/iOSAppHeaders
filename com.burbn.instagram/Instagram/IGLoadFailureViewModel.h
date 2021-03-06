//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSavedMediaSectionControllerFactory.h"

@class NSString;

@interface IGLoadFailureViewModel : NSObject <IGSavedMediaSectionControllerFactory>
{
    id <IGLoadFailureViewCellRetryDelegate> _retryDelegate;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) __weak id <IGLoadFailureViewCellRetryDelegate> retryDelegate; // @synthesize retryDelegate=_retryDelegate;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)sectionController;
- (id)initWithErrorMessage:(id)arg1 retryDelegate:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAsyncTask, IGLabelItemViewModel, IGUserSession, NSArray, NSString;

@interface IGNametagStickerSearchDataSource : NSObject
{
    NSString *_searchText;
    IGUserSession *_userSession;
    IGAsyncTask *_stickerSearchTask;
    NSArray *_defaultItems;
    IGLabelItemViewModel *_emojiLabelModel;
    IGLabelItemViewModel *_emptyResultsLabelModel;
    id <IGNametagStickerSearchDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGNametagStickerSearchDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchDefaultItems;
- (void)_handleStickerSearchResponse:(id)arg1 searchText:(id)arg2;
- (void)searchForText:(id)arg1;
- (id)initWithDefaultItems:(id)arg1 userSession:(id)arg2;

@end


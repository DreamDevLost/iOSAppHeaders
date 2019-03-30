//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSObject<UIScrollViewDelegate>;

@protocol RCTScrollableProtocol
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)removeScrollListener:(NSObject<UIScrollViewDelegate> *)arg1;
- (void)addScrollListener:(NSObject<UIScrollViewDelegate> *)arg1;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)scrollToEnd:(_Bool)arg1;
- (void)scrollToOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollToOffset:(struct CGPoint)arg1;
@end


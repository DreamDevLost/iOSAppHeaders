//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBloksContext, NSObject<BKBloksModel>;

@interface IGBloksPanGestureController : NSObject
{
    IGBloksContext *_context;
    NSObject<BKBloksModel> *_model;
    struct shared_ptr<boost::variant<std::__1::shared_ptr<Lispy::FunctionCall>, Lispy::LoadArgument, boost::variant<std::__1::shared_ptr<Lispy::FunctionRef>, Lispy::None, Lispy::Number, Lispy::ObjectRef, std::__1::shared_ptr<Lispy::PatternCase>, std::__1::shared_ptr<Lispy::PatternDefault>, std::__1::shared_ptr<Lispy::VectorWrapper>, std::__1::shared_ptr<Lispy::MapWrapper>>>> _onBegin;
    struct shared_ptr<boost::variant<std::__1::shared_ptr<Lispy::FunctionCall>, Lispy::LoadArgument, boost::variant<std::__1::shared_ptr<Lispy::FunctionRef>, Lispy::None, Lispy::Number, Lispy::ObjectRef, std::__1::shared_ptr<Lispy::PatternCase>, std::__1::shared_ptr<Lispy::PatternDefault>, std::__1::shared_ptr<Lispy::VectorWrapper>, std::__1::shared_ptr<Lispy::MapWrapper>>>> _onChange;
    struct shared_ptr<boost::variant<std::__1::shared_ptr<Lispy::FunctionCall>, Lispy::LoadArgument, boost::variant<std::__1::shared_ptr<Lispy::FunctionRef>, Lispy::None, Lispy::Number, Lispy::ObjectRef, std::__1::shared_ptr<Lispy::PatternCase>, std::__1::shared_ptr<Lispy::PatternDefault>, std::__1::shared_ptr<Lispy::VectorWrapper>, std::__1::shared_ptr<Lispy::MapWrapper>>>> _onEnd;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onPan:(id)arg1;
- (void)setContext:(id)arg1 model:(id)arg2;

@end


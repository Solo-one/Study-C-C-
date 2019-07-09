//
// 接口实现类

#include "class_c.h"
#include "class_c_impl.h"

ClassC::ClassC(const ClassA & xa, const ClassB & xb) {
    impl = new ClassCImpl(xa, xb);
}

ClassC::~ClassC(){
    delete impl;
}

int ClassC::getA() const{
    return impl->getA();        
}
double  ClassC::getB() const{
    return impl->getB();        
}
double  ClassC::getC() const{
    return impl->getC();        
}

// class_c_impl.h
// 接口

#include "class_c_impl.h"

ClassCImpl::ClassCImpl(const ClassA& xa,const ClassB& xb){
    a = xa;
    b = xb;
    c = (b.getB() + a.getA());
}

int ClassCImpl::getA() const{
    return a.getA();        
}

double  ClassCImpl::getB() const{
    return b.getB();        
}

double  ClassCImpl::getC() const{
    return c.getB();        
}

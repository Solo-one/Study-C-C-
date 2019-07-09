// class_c_impl.h
// 接口

#include "class_a.h"
#include "class_b.h"

class ClassCImpl {
    public:
        ClassCImpl(const ClassA & xa, const ClassB & xb);
        int getA() const;
        double getB() const;
        double getC() const;
    private:
        ClassA a;
        ClassB b;
        ClassB c;
};

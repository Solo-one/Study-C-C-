// class_c.h
// 接口

class ClassA;
class ClassB;
class ClassCImpl;

class ClassC {
    public:
        ClassC(const ClassA & xa, const ClassB & xb);
        virtual ~ClassC();
        int getA() const;
        double getB() const;
        double getC() const;
    private:
        // 使用指针来指向实现类
        ClassCImpl *impl;

};

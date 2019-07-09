// class_b.h
//

class ClassB {
    public:
        double b;
        ClassB(double x) {
            b = x;
        }
        ClassB() { b = 0.0;}
        double getB() const {
            return b;
        }
    private:

};

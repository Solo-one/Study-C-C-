// class_a.h
//

class ClassA {
    public:
        int a;
        ClassA(int x) {
            a = x;
        }
        ClassA() { a = 0;}
        int getA() const {
            return a;
        }
    private:

};

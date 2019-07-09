
#include <stdio.h>
#include "class_a.h"
#include "class_b.h"
#include "class_c.h"
#include "class_c_impl.h"

int main() {
    ClassA a;
    ClassB b;
    ClassC c(a, b);


    printf("%f", c.getC());
    return 0;
}

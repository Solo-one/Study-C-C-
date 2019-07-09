
#include <stdio.h>
#include "three_sum_slow.h"

int main(int argc, char* argv[]) {
    printf("hello world!\n");
    int count = 0;
    ThreeSum* three_sum_slow = new ThreeSumSlow();
    int nums[10] = {1, 2, 3, -3 , 0, 1};
    //count = three_sum_slow->count((const int[]){0, 1});
    count = three_sum_slow->count(nums);

    printf("ouput:%d\n", count);

    delete three_sum_slow;

    //ThreeSum three_sum; // 不能直接实例化
    //ThreeSumSlow three_sum_slow_1;
    //printf("ouput:%d\n", three_sum_slow_1.count());

    return 0;
}

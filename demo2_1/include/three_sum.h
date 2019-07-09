#ifndef __THREE_SUM_H
#define __THREE_SUM_H

class ThreeSum {
    public:
        //提供接口的纯虚函数
        virtual int count(const int* nums) = 0;
        //这里需要虚析构函数
        virtual ~ThreeSum(){};
       
};

#endif

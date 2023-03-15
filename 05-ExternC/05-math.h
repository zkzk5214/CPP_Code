// header file: 存放函数的声明 

// 使用#ifndef、#define、#endif来防止头文件的内容被重复包含
// #ifndef、#define、#endif 受C/C++标准的支持,不受编译器的任何限制
// #ifndef、#define、#endif 可以针对一个文件中的部分代码
// #ifndef __MATH_H //文件名(规范)
// #define __MATH_H


#ifdef __cplusplus // 如果定义了cpp宏(条件定义), 中间的代码才可以参与编译
extern "C" {
#endif // __cplusplus

    int sum(int v1, int v2);
    int delta(int v1, int v2);

#ifdef __cplusplus
}   
#endif // __cplusplus

// #endif //!__MATH_H
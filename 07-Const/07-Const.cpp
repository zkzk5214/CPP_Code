#include <iostream>
using namespace std;

// 结构体变量
struct Date {
    int year;
    int month;
    int day;
};


int main(){
    // 1-const 是常量的意思, 被其修饰的变量不可修改
    // 如果修饰的是类、结构体(的指针),其成员也不可以更改
    // const int age = 10;
    // Date d = {2011, 2, 5}; // 前加 const 后续命令报错(不可以更改)
    // Date d2 = {2013, 4, 8};
    // d = d2;
    // d.year = 2015;

    // Date *p = &d; // d 的地址值赋值给指针 p,指针 p 指向结构体 d
    // p -> year = 2015; // 如果是指向结构体的指针去访问结构体的成员,使用 -> 
    // (*p).month = 5; // *p 取出指针所指向的d
    // *p = d2; // 将 d2 赋值给 d
    // cout << d.year << endl; // 结构体本身访问成员,使用 . 

    // 2- const 修饰的是其右边的内容
    int age = 10;
    int height = 30;
    const int *p1 = &age; // const 修饰 *p1, *p1是常量, p1 不是常量,所以 p1 可以赋值, *p1 不能赋值 p1 -> 也是不可用的
    int const *p2 = &age; // 等价上一句
    int * const p3 = &age; // const 修饰 p3, p3是常量, *p3 不是常量,所以 *p3 可以赋值, p3 不能赋值
    const int * const p4 = &age; // 第一个 const 修饰 *p4 ,第二个 const 修饰 p4, 都是常量
    int const * const p5 = &age; // 等价上一句

    // *p3 = 20;
    // p3 = &height;



    // getchar();
    return 0;
}
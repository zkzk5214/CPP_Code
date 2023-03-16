#include<iostream>
using namespace std;

// 1-建议声明和实现都增加inline修饰
// inline void func();
// inline int sum(int v1, int v2);

// 2-编译器会将函数调用直接展开为函数体代码
inline void func(){
    cout << "func()" << endl;
}

inline int sum(int v1, int v2){
    return v1+v2;
}
// 3-函数每次调用都会涉及内存开辟栈空间和回收栈空间
// 一旦变成 inline函数, 执行代码的时候就不存在函数调用(也就没有开辟和回收,不会分配内存和回收内存)
/*使用情况: 
1.函数代码体积不是很大(建议<10行)
2.频繁调用的函数
*/ 

// 4-有些函数即使声明为inline,也不一定会被编译器内联,比如递归函数
// inline void run(){
//     run();
// }

// #define add(v1,v2) v1 + v2 // 宏替换
// 内联函数和宏, 都可以减少函数调用的开销
// 对比宏, 内联函数多了语法检测和函数特性

// 思考一下代码的区别
// #define add(v) v + v // (1)
inline int add(int v){  // (2)
    return v + v;
}

int main(){
    func();
    // int c = sum(10,20); // ==> int c = 10+20
    // int c = add(10,20);

    int a = 10;
    int c = add(++a); // (1) c = ++a + ++a = 11 + 12 (2) 11+11
    cout << c << endl;

    // Other Question 
    int b = 1;
    int d = 2;
    // ( b = d ) = 4;
    ( b > d ? b : d) = 4; // b=4 if b>d else d=4
    cout << "b = " << b << endl;
    cout << "d = " << d << endl;


    // getchar();
    return 0;
}
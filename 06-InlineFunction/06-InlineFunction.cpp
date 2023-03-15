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
inline void run(){
    run();
}

int main(){
    func();
    int c = sum(10,20); // ==> int c = 10+20
    cout << c << endl;

    // getchar();
    return 0;
}
#include<iostream>
using namespace std;

/*
    C 语言不支持函数重载
    C++ 支持
*/

int sum_(int v1, int v2) {
    return v1 + v2;
}

int sum_(int v1, int v2, int v3){
    return v1 + v2 + v3;
}

void func(int v1, double v2){
    cout << "func(int v1, double v2)" << endl;
}

void func(double v1, int v2){
    cout << "func(double v1, int v2)" << endl;
}

// 歧义，二义性
// int func(){
//     return 0;
// }
// double func(){
//     return 0;
// }
// 下面这种方法可以
int func(int a){
    return 0;
}
double func(){
    return 0;
}

// display_int (举例命名，并不是编译器的实际命名)(name decoration)
void display(int a){
    cout << "display(int) -" << a << endl;
}

// display_long
void display(long a){
    cout << "display(long) -" << a << endl;
}

// display_float
void display(float a){
    cout << "display(float) -" << a << endl;
}

int main() {
    // 1-两个函数的函数名完全一样，参数 类型/个数/顺序 不同 
    // 2-返回值类型与重载无关 
    // 3-调用函数时，实参的隐式类型转化可能会产生二义性
    // 本质采用了 name mangling/ name decoration 技术
    // C++ 编译器默认会对符号名（比如函数名）进行改编、修饰
    // 重载的时候会生成多个不同的函数名，不同编译器有不同的生成规则

    // 1-1)
    // cout << sum_(10, 20) << endl;
    // cout << sum_(10, 20, 30) << endl;

    // 1-2
    // func(10, 10.5);
    // func(10.5 ,10);

    // 2 
    // func(10);

    // 3
    display(10); // long l = 10; 隐式转换；long l = (long) 10; 显式转换
    display(10L);
    // display(10.0);

    // int: 4byte=32bit -2**31~2**31-1
    // unsigned: 4byte=32bit 0~2**31-1
    // long: 4byte=32bit -2**31~2**31-1
    // short: 2byte=16bit -2**15~2**15-1
    // int 和 long 在不同平台上的长度可能不一样 int至少16位，long 32 
    // sizeof(int) <= sizeof(long)
    // getchar(); 
    return 0;
}


// Debug 模式：很多调试信息，文件比较臃肿
// Release 模式：去除调试信息，生成的可执行文件比较精简高效
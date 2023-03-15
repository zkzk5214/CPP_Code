# include <iostream>
using namespace std;

// 1-被extern C 修饰的代码会按照C语言的方式去编译
// extern "C" void func(){
// }
// extern "C" void func(int){
// }
// or
// extern "C"{
//     void func(){
// }
//     void func(int){
// }
// }

// 2-如果函数同时有声明和实现,要让函数声明被extern“C”修饰,函数实现可以(不)修饰
// extern "C" void func();
// extern "C" void func(int);
// or
// extern "C"{
//     void func();
//     void func(int);
// }

// void func();
// extern "C" void func(int);

// 3-第三方框架/库:可能是用C语言写的开源库
#include "05-math.h"
extern "C" void other();

#include "test.h"

int main(){

    cout << sum(10, 20) << endl;
    cout << delta(30, 20) << endl;

    // getchar();
    return 0;

}

// void func(){
// }
// void func(int){
// }


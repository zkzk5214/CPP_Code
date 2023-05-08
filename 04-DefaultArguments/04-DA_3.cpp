#include <iostream>
using namespace std;

// 3-默认参数的值可以是常量、全局符号(全局变量、函数名)
// 写在函数外面叫全局变量,里面是局部变量 
// int age = 20;
// int sum(int v1=5, int v2=age);

// void test(){
//     cout << "test()" << endl;
// }

// void test(int a){
//     cout << "test(int) - " << a << endl;
// }

// void func(int v1, void(*p)(int)=test){
//     p(v1); // 等于 test(v1)
// }

// 4-函数重载、默认参数可能会产生冲突、二义性(建议优先选择使用默认参数)
// void display(int a, int b=20){
//     cout << "a is " << a << endl;
// }

// void display(int a){
//     cout << "a is " << a << endl;
// }

int main(){

    // 2)
    // test();
    // *p 是指针,指向test函数(将函数名复制给p), void表示这个函数无返回值, ()表示此函数无参数传入
    // void(*p)() = test; 
    // void(*p)(int) = test;
    // p(10);

    // 3)
    // func(20,test);
    // func(30);

    // 4)
    // display(10); (X)

    // getchar();
    return 0;
}
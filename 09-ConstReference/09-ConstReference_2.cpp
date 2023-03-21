#include <iostream>
using namespace std;

// const 引用的特点
// 1-可以指向临时数据(常量、表达式、函数返回值等)
// 2-可以指向不同类型的数据
// 3-作为函数参数时(此规则也适用于const指针)
//      可以接受const和非const实参(非const引用,只能接受非const实参)
//      可以跟非const引用构成重载
// 4-当常引用指向了不同类型的数据时,会产生临时变量,即引用指向的并不是初始化时的那个变量
int func(){
    return 8;
}

int sum(const int &v1, const int &v2){  // 常引用
    cout << "sum(const int &v1, const int &v2)" << endl;
    return v1 + v2;
}

int sum_(int &v1, int &v2){  // 非const引用
    return v1 + v2;
}

// 3-2
// 如果删除& 无法重载
int sum(int &v1, int &v2){  // 非const引用
    cout << "sum(int &v1, int &v2)" << endl;
    return v1 + v2;
}

int main(){

    int age = 10;
    // 1-1
    // int &ref = age;
    // const int &ref = 30; // 常引用可以指向临时数据

    // 1-2
    // int a = 1;
    // int b = 2;
    // const int &ref = a+b; // 表达式

    // 1-3 
    // const int &ref = func(); // 函数返回值

    // 2-1
    // const double &ref = age;

    // 3-1
    // 非const实参
    int a = 10; 
    int b = 20;
    sum(a,b);
    sum_(a,b); // 非const引用,只能接受非const实参
    // const实参
    const int c = 10;
    const int d = 20;
    sum(c,d);
    // const常量
    sum(10, 20);



    return 0;
}
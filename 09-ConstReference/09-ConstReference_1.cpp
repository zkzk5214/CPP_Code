#include <iostream>
using namespace std;

// 1-引用可以被const修饰,这样就无法通过引用修改数据了,可以称为常引用
// 2-const必须写在&符号的左边,才能算是常引用


// 需求:只能做访问,不允许修改
// void test(const int *p){
//     *p = 30;
// }

int main(){

    int age = 10;
    int height = 20;
    // const int &ref = age; // 引用. int const &ref = age; 效果一样
    // const int *p = &age; // 指针
    // cout << *p << endl;
    // ref = 30; # 无法修改,可以访问

    
    // 1) int & const ref = age; //(X) const 不能直接用于引用, 无意义
    // ref1不能修改指向,可以通过ref间接修改所指向的变量
    int & ref1 = age; // 相当于上一句
    // 2)
    int const &ref2 = age; // ref2不能修改指向,不可以通过ref2间接修改所指向的变量
    // 3) equal to 1)
    int * const p1 =&age; // 指针变量p1不能修改指向,但是可以利用指针变量p1间接修改所指向的变量
    // p1 = &height; (X)
    *p1 = 30;
    // 4)
    int const *p2 = &age; // 指针变量p2可以修改指向,不可以利用指针变量p2间接修改所指向的变量
    p2 = &height;
    // *p2 = 30; (X)

    // int * const ref = age;
    // ref = 30;
    // cout << ref << endl;
   

    return 0;
}
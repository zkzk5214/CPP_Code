#include <iostream>
using namespace std;

// 1-在c语言中,使用指针可以间接获取、修改某个变量的值
// 2-在c++中,使用引用可以起到跟指针类似的功能
// 引用相当于是变量的别名(基本数据类型、枚举、结构体、类、指针、数组等,都可以有引用)
// 3-对引用做计算,就是对引用所指向的变量做计算
// 4-在定义的时候就必须初始化,一旦指向了某个变量,就不可以再改变,从一而终(指针可以)
// 5-可以利用引用初始化另一个引用,相当于某个变量的多个别名
// 6-不存在引用的引用、指向引用的指针、引用数组
// 7-引用存在的价值之一:比指针更安全、函数返回值可以被赋值

// 值传递,a b 没有做交换
// void swap(int v1, int v2){
//     int tmp = v1;
//     v1 = v2;
//     v2 = tmp;
// }

// 指针
// void swap(int *v1, int *v2){  // int *v1 = &a, int *v2 = &b
//     // 指针通过 *v1 *v2 可以访问外面参数的存储空间, 达到修改的效果
//     int tmp = *v1;
//     *v1 = *v2;
//     *v2 = tmp;
// }

// 引用
void swap(int &v1, int &v2){  // int &v1 = a, int &v2 = b
    int tmp = v1;
    v1 = v2;
    v2 = tmp;
}

int abc = 20; // 引用可以指向全局变量

int main(){

    int age = 10;
    // 1)
    // int *p = &age;
    // *p = 20;
    // 2)
    // int &ref = age; // 定义了一个 age 的引用, 确定了指向, refAge相当于是age的别名,即ref 的就是 age 
    // ref = 20;
    // 3)
    // ref += 30;
    // cout << age << endl;
    // 4)
    // int height = 20;
    // ref = height; //此操作为赋值,不是修改引用的指向, (若 ref=10; height的值依然是20)
    // int &ref = height; 
    // 5)
    // int &ref1 = ref;
    // int &ref2 = ref1; // 都是age的别名
    // ref += 10;
    // ref1 += 10;
    // ref2 += 10;
    // cout << age << endl;
    // 7)
    // int *p = &age; 
    // 指针可以随意修改指向,有可能会指向不该指的地方,而且还可以赋值
    // 一定要在定义引用的同时指定变量,切类型相同
    int a = 10;
    int b = 20;
    // swap(&a,&b); // 指针
    swap(a,b); // 引用
    cout << "a = " << a << ", b = " << b << endl;

    // Q: 后面是否可以再调用别的值,即从一而终 -: 可以
    int c = 2;
    int d = 3;
    swap(c,d); // 每次调用函数都会重新创建一个变量, 即每次调用产生的 v1 v2 都是全新的,内存都是全新的
    cout << "c = " << c << ", d = " << d << endl;


    // getchar();
    return 0;
}
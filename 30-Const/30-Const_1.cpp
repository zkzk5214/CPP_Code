#include <iostream>
using namespace std;

// 1-const成员:被const修饰的成员变量、非静态成员函数
// 2-const成员变量:
// 2.1-必须初始化(类内部初始化),可以在声明的时候直接初始化赋值
// 2.2-非static的const成员变量还可以在初始化列表中初始化
// 3-const成员函数(非静态)
// 3.1-const关键字写在参数列表后面,函数的声明和实现都必须带const
// 3.2-内部不能修改非static成员变量
// 3.3-内部只能调用const成员函数、static成员函数 
// 3.4-非const成员函数可以调用const成员函数
// 3.5-const成员函数和非const成员函数构成重载
// 3.6-非const对象(指针)优先调用非const成员函数
// 3.7-const对象(指针)只能调用const成员函数、static成员函数
class Car{
public:
    const int mc_price = 0; // 2.1
    // Car():m_price(0){} // 2.2
    void run() const { // 3.1
        cout << "run() const" << endl;
        // m_price = 10; // 3.2
        test(); // 3.3:如果不带const或者static的test能调用成功则m_price是可以修改的
    }
    // void run() const; // 3.1

    // void test() const {
    //     // m_price = 0;
    // }

    static void test(){}; // 3.3:静态成员函数本身不能访问非静态成员变量

    void run1() const { // 3.4
        cout << "run()" << endl;
    }
    void test1(){ // 3.4
        run1();
    };

    void run(){ // 3.5
        cout << "run()" << endl;
    }

};

// void Car::run() const { // 3.1
//     cout << "run()" << endl;
// }

int main(){

    Car car;
    car.run(); // 3.6 非const对象能调用const成员函数


    const Car car2; // 3.7 const对象不能调用非const成员函数(注释 void run() const{},则报错 )
    car2.run();
    car2.test(); // 3.7 static 成员函数不可能修改 m_price 成员变量

    const Car *p;
    p-> run();

    // getchar();
    return 0;
}
#include <iostream>
using namespace std;

// 1-静态成员:被static修饰的成员变量/函数
// 可以通过对象(对象.静态成员)、对象指针(对象指针->静态成员)、类访问(类名::静态成员)
// 2-静态成员变量
// 存储在数据段(全局区,类似于全局变量),整个程序运行过程中只有一份内存
// 对比全局变量,它可以设定访问权限(public、protected、private),达到局部共享的目的
// 必须初始化,必须在类外面初始化,初始化时不能带static,如果类的声明和实现分离(在实现.cpp中初始化)
class Car{
public:
    static int m_price; // 只占一份内存,相当于全局变量
    void run(){
        cout << "run" << endl;
    }
};

// 初始化成员变量
int Car::m_price = 0; //静态成员变量要放在类外面去初始化

int main(){
    
    Car car1;
    car1.m_price = 100; // 1
    
    Car *p = new Car(); // 1
    p -> m_price = 200;
    delete p; // 静态成员变量并不存在于对象里面,delete 不会 销毁静态成员变量



    Car::m_price = 300; // 1 

    cout << Car::m_price << endl;

    // getchar();
    return 0;
}
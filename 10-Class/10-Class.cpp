#include <iostream>
using namespace std;
// 1-C++中可以使用struct、class来定义一个类
// 2-struct和class的区别
//      struct的默认成员权限是public(公共的,外面都可以访问)
//      class的默认成员权限是private
//      struct 等于 class+public , class等于 struct+private
//      开发过程中尽量不要用struct去定义类,使用 class
//    2-5 struct仍然可以被定义类的原因:兼容c语言
// 3-c++编程规范 变量名规范参考:
//  全局变量: g_
//  成员变量: m_
//  静态变量: s_
//  常量: c_
//  使用驼峰标识

// 2-5 c语言定义类
// void test(){
// }
// struct Person{
//     int age;
//     void(*run)() = test;
// }

class Person{
// 默认 private: , 如果写明 public: 则外部可以访问
// person 对象占用四个字节 (int m_age;)
public:
    // 成员变量
    int m_age; 
    // 成员函数(方法)
    void run(){
        cout << m_age << " - Person::rum()"<< endl;
    }
};

// struct Person {
// // private: // 往后的成员 age run 都是私有的,即外面不可以访问,如 person.age = 10; 不写默认就是 public:
//     // 成员变量
//     int m_age;
//     // 成员函数(方法)
//     void run(){
//         cout << m_age << " - Person::rum()" << endl;
//     }
// };

void test(){
     // 利用类创建对象
    Person person;
    person.m_age = 10; // 给成员变量赋值
    person.run(); // 调用成员函数

    Person *p = &person; // 右边是person类型, 所以左边是 Person *
    p -> m_age = 20;
    p -> run(); 
}
  
class Car {
public:
    // 每次创建对象都会给成员变量分配内存
    // 每创建出来一个对象,都有自己的成员变量(单独的)
    int m_price; 
    // 函数代码在内存中只有一份
    // 通过函数的内存地址找到唯一的函数去调用(公用的)
    // 所以创建对象的时候函数如果没有被调用则不占内存
    // 类可以销毁,函数不可以,所以函数的内存不在对象里
    void run(){
        cout << "Car::run()"<<m_price<<endl;
    }
};


int main(){

    // 利用类创建对象
    Person person; 
    // 访问person对象的成员变量
    person.m_age = 10; // 给成员变量赋值
    // 访问person对象调用成员函数
    person.run(); // 调用成员函数

    // 通过指针间接访问person对象
    Person *p = &person; // 右边是person类型, 所以左边是 Person *
    p -> m_age = 20;
    p -> run(); 
    // 上面代码中的person对象,p指针的内存都是在函数的栈空间,自动分配和回收的

    test();

    Car car;
    car.m_price = 10;
    car.run();

    cout << sizeof(car) << endl;
    cout << sizeof(Car) << endl;
    return 0;
}
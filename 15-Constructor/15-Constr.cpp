
#include <iostream>
using namespace std;
// 构造函数(也叫构造器),在对象创建的时候自动调用,一般用于完成对象的初始化工作
// 特点: 函数名与类同名,无返回值(void都不能写),可以有参数,可以重载,可以有多个构造函数
struct Person{
    int m_age;

    Person(){
        m_age = 0;
        cout << "Person()" << endl; // 构造函数
    }
};

int main(){

    Person person;
    // person.m_age = 0; // method 1


    // getchar();
    return 0;
}
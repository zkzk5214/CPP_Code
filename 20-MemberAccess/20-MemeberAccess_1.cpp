#include <iostream>
using namespace std;


// 利用指针可以访问私有变量

class Person{
// private:
public:
    int m_age;
public:
    void run(){

    }
};

class Student:public Person{ // class 默认 private 继承

};

class GoodStudent:public Person{

};

int main(){

    // 成员变量不一定按序,看编译器,8个字节(int)
    int a = 10;
    int *p_a = &a;
    int b = 11;
    int *p_b = &b;
    int c = 12;
    int *p_c = &c;
    cout << p_a << endl;
    cout << p_b << endl;
    cout << p_c << endl;

    Person *pp = new Person[3];
    cout << pp->m_age << endl;
    cout << pp[1].m_age << endl;
    cout << (*(pp+1)).m_age << endl; // 等价40行

    // getchar();
    return 0;
}
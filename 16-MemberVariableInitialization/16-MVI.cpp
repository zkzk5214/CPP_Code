#include <iostream>
using namespace std;

// 默认情况下,成员变量的初始化
// 如果自定义了构造函数,除了全局区,其他内存空间的成员变量默认都不会被初始化,需要开发人员手动初始化(clang会初始化)

struct Person{
    int m_age;
};

struct Person1{
    int m_age;

    Person1(){

    }
};

struct Person2{
    int m_age;

    Person2(){
        memset(this, 0, sizeof(Person2)); // this指针指向函数调用者
    }
};

// 全局区(成员变量初始化为0)
Person g_person;
Person1 g_person1;

int main(){
    // 栈空间(成员变量不会被初始化)
    // Person person;

    // 堆空间(成员变量初始化为0)
    Person *p0 = new Person; // 成员变量不会被初始化(clang 会初始化为0)
    Person *p1 = new Person(); // 成员变量初始化为0

    Person1 *p01 = new Person1; // 成员变量不会被初始化(clang 会初始化为0)
    Person1 *p11 = new Person1(); // 成员变量不会被初始化(clang 会初始化为0)

    Person *p2 = new Person[3]; // 成员变量不会被初始化(clang 会初始化为0)
    Person1 *p21 = new Person1[3]; // 成员变量不会被初始化(clang 会初始化为0)

    Person *p3 = new Person[3](); // 3个Person对象的成员变量都初始化为0
    // Person *p4 = new Person[3]{}; // 3个Person对象的成员变量都初始化为0

    // cout << g_person.m_age << endl;
    // cout << g_person1.m_age << endl;

    // cout << person.m_age << endl;

    // cout << p0->m_age << endl;
    // cout << p01->m_age << endl;

    // cout << p1->m_age << endl;
    // cout << p11->m_age << endl;
    
    cout << p2->m_age<<endl;
    cout << p21->m_age<<endl;
    // getchar();
    return 0;
}
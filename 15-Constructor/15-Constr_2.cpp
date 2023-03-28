#include <iostream>
using namespace std;

struct Person{
    int m_age;

    Person(){
        m_age = 0;
        cout << "Person()" << endl; // 构造函数
    }

    Person(int age){
        m_age = age;
        cout << "Person(int age)" << endl; // 函数名一样,参数不一样(重载)
    }
};

Person g_person0; // 调用Person()
// Person g_person1(); // 函数的声明
// Person g_person1(){
    //     return Person();
    // } // 函数的实现
Person g_person2(10); // 调用Person(int age)

int main(){

    Person person0; // 调用Person()
    // Person person1(); // 函数的声明(并没有生成Person对象)
    Person person2(20); // 调用Person(int age)

    Person *p0 = new Person; // 调用Person()
    Person *p1 = new Person(); // 调用Person()
    Person *p2 = new Person(30); // 调用Person(int age)

    // 4个有参,3个无参,一共创建了7个Person对象

    // getchar();
    return 0;
}
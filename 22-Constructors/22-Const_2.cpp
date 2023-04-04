#include <iostream>
using namespace std;

// 1-子类的构造桉树默认会调用父类的无参构造函数
// 2-如果子类的构造函数显式地调用了父类的有参构造哈书,就不会再去默认调用父类的无参构造函数
// 3-如果父类缺少无参构造函数,子类的构造函数必须显式调用父类的有参构造函数

struct Person{
    // 3- 如果注释10-12, 21不可用
    Person(){
        cout << "Person::Person()" << endl;
    }
    Person(int age){
        cout << "Person::Person(int age)" << endl;
    }
};

struct Student:Person{
    int m_no;
    // 1-
    // Student(){
    // 2-
    Student():Person(10){
        // call Person()
        cout << "Student::Student()" << endl;
    }
};

class Person1{
    int m_age;
public:
    Person1(int age): m_age(age){}
};

class Student1:Person1{
    int m_no;
public:
    Student1(int age, int no): Person1(age), m_no(no){} // 构造函数调用构造函数,子类的构造函数调用父类的构造函数,去初始化父类里面的成员变量
};

int main(){

    Student student;
    // getchar();
    return 0;
}
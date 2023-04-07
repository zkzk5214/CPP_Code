#include <iostream>
using namespace std;

//1-菱形继承带来的问题
//  最底下子类从基类继承的成员变量冗余，重复
//  最底下子类无法访问基类的成员，有二义性
class Person{
    int m_age;
};

class Student:public Person{

    // int m_age; 继承父类
    int m_score;
};

class Worker:public Person{
    // int m_age; 继承父类
    int m_salary;
};

class Undergraduate:public Student, public Worker{
    // 1-
    // int m_age; 继承父类(先继承 Student，放前面)
    // int m_score; 继承父类
    // int m_age; 继承父类
    // int m_salary; 继承父类
    int m_grade;
};

int main(int argc, char const *argv[]) {
    Undergraduate ug;

    cout << sizeof(ug) << endl; // 20 bytes
    getchar();
    return 0;
}

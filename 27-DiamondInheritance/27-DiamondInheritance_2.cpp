#include <iostream>
using namespace std;

//虚继承可以解决菱形继承带来的问题
//  Person类被称为虚基类

// 假设 Person里面有10个成员变量
// 成员变量数目：没有使用虚继承：10*2+3 = 23
// 成员变量数目：使用虚继承：10+3+2 = 15
struct Person{
    int m_age = 1;
};

// 注意虚继承的位置
struct Student: public virtual Person{
    int m_score = 2;
    //                              -> 0(虚表指针与本类起始的偏移量，一般是 0) ;
    // 虚表指针（存放虚表地址指向虚表）  -> 8(虚基类第一个成员变量与本类起始的偏移量)
    // m_score = 2
    // m_age = 1
    // 本类即虚表指针，虚基类为 m_age，偏移了8(4+4:虚表指针+m_score)个字节
};

// 注意虚继承的位置
struct Worker: public virtual Person{
    int m_salary = 3;
    //                              -> 0(虚表指针与本类起始的偏移量，一般是 0) ;
    // 虚表指针（存放虚表地址指向虚表）  -> 8(虚基类第一个成员变量与本类起始的偏移量)
    // m_salary = 3
    // m_age = 1
    // 本类即虚表指针，虚基类为 m_age，偏移了8(4+4:虚表指针+m_salary)个字节
};

struct Undergraduate: public Student, public Worker{
    int m_grade = 4;
    // Student:     虚表指针  -> 0; 20
    //              m_score
    // Worker:      虚表指针  -> 0(虚表指针与本类(worker)起始的偏移量); 12
    //              m_salary
    // Undergraduate: m_grade ->
    // 虚基类:       m_age
    // 偏移量用来寻找 m_age 的
};

int main(int argc, char const *argv[]) {
    Undergraduate ug;
    ug.m_age = 10;

    // getchar();
    return 0;
}

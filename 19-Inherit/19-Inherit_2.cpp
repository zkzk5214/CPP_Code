#include <iostream>
using namespace std;
// 继承,可以让子类拥有父类的所有成员(变量、函数)
// 基类(cpp没有),类似python的object

// 对象的内存布局
struct Person{  // superclass
    int m_age;
};
struct Student:Person{ // subclass 
    int m_no;
};
struct GoodStuden:Student{ // subclass 
    int m_score;
};


int main(){

    // Person person; // 4个字节
    // Student stu; // 8个字节
    GoodStuden gs; // 12个字节
    cout << sizeof(gs) << endl;
    // 从父类继承的成员变量会排布在内存地址的前面
    // 如果父类的变量没有被调用,则内存被浪费
    gs.m_age = 20;
    gs.m_no = 1;
    gs.m_score = 666;

    cout << &gs.m_age <<endl;
    cout << &gs.m_no <<endl;
    cout << &gs.m_score <<endl;

    // getchar();
    return 0;
}
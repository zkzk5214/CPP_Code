#include <iostream>
using namespace std;

// 8-引用的本质就是指针,只是编译器削弱了它的功能,所以引用就是弱化了的指针
// 9-一个引用占用一个指针的大小
// x86: 32bit
// x64: 64bit

struct Student{
    int age;
};

struct Student_{
    int &age;
};

int main(){

    int age = 10;

    // *p就是age的别名
    int *p = &age;
    *p = 30;

    // cout << sizeof(age) << endl; // int变量占4个字节
    // cout << sizeof(p) << endl; // 64位环境-8个字节

    // ref就是age的别名
    int &ref = age;
    ref = 40;
    // cout << sizeof(ref) << endl; // equal to sizeof(age): 4 bytes
    // cout << sizeof(&age) << endl; // 地址值占8个字节

    Student stu;
    cout << sizeof(Student) << endl; // 结构体占4个字节,只有一个成员 age
    cout << sizeof(Student_) << endl; // 一个引用变量占8个字节, 即指针

    // getchar();
    return 0;
}
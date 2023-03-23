#include <iostream>
using namespace std;

// ip寄存器指针指向下一条需要执行的机器指令的地址
// ip+=刚执行完的机器指令的大小
// 调用函数执行函数代码,其实就是cpu在访问代码区的内存(指令)

struct Person{
    int m_id;
    int m_age;
    int m_height;

    void run(){
        cout << "Person::run()" << m_age << endl;
    }

    // 调用函数的时候,需要分配额外的存储空间来存储函数内部的局部变量
    // 函数代码存储在代码区
    // 局部变量存储在栈空间
    void run_(){
        cout << "Person::run()" << this-> m_age << endl; 
        m_age = 3; // 等价 this->m_age = 3;
        // 不可以利用this.m_age来访问变量,因为this是指针,必须用this->m_age
    }

    void display(){
        // 中断: interrupt
        // cc -> int3:起到断点的作用
        // ccccccc:int3int3...
        cout << "id = " << m_id 
            << ", age = " << m_age
            << ", height = " << m_height << endl;
    }
};

int main(){

    Person person1;
    person1.m_id = 10;
    person1.m_age = 20;
    person1.m_height = 30;

    // 编译器将m_age的地址当作person的首地址来赋值 (见10-Class2.cpp)
    Person *p = (Person *) &person1.m_age;
    p->m_id = 40;
    p->m_age = 50;

    // 调用成员函数地址值不同
    // 将 person1 对象的地址传递给 display 函数的 this
    person1.display(); 
    // p->m_id = 40;
    // mov eax,  dword ptr [p]
    // mov dword ptr [eax+0], 40
    // mov dword ptr [&person+4+0], 40
    // p->m_age = 50;
    // mov dword ptr [eax+4], 50
    // mov dword ptr [&person+4+4], 50

    // 将 &person1.m_age 传递给 display 函数的 this
    p->display(); // 指针间接调用函数,会将指针p里面存储的地址传递给display函数的this
    // eax == &person.m_age == &person+4
    // mov eax,  dword ptr [this]
    // [eax], [eax+4], [eax+8]
    // [&person+4], [&person+8],[&person+12](越界)

    // getchar();
    return 0;
}


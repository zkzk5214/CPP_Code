#include <iostream>
using namespace std;

/*
    1-this is the pointer to the current object.
    2-when an object calls a member function, it is automatically passed 
            the memory address of the current object.
    3-"this" pointer stores the address of the function caller
    4-"this" point to the function caller
    5-different objects call the same function, which can access
            the member of different objects 
    6-How to use pointer to indirectly access the member variable of the 
            pointed object?
        6.1-Retrieve the address of the object from the pointer
        6.2-Use the address of the object + the offset of the member 
            variable to calculate the address of the member variable
        6.3-Access the storage space of member variable based on their
            addresses
*/ 

struct Person{
    int m_id;
    int m_age;
    int m_height;

    void run(){
        cout << "Person::run()" << m_age << endl;
    }

    // Explicit argument
    // void run_(Person *person){
    //     cout << "Person::run()" << person->m_age << endl;
    // }

    // Implicit argument
    void run_(){
        cout << "Person::run() " << this-> m_age << endl; 
        m_age = 3; // this->m_age = 3;
        // cannot use this.m_age to access a variable, cuz "this" 
        // is pointer must use this->m_age
    }

    void display(){
        cout << "id = " << this->m_id 
            << ", age = " << this->m_age
            << ", height = " << this->m_height << endl;
    }
};


int main(){

    Person person1;
    // store in the stack space
    person1.m_id = 10;
    person1.m_age = 20; 
    person1.m_height = 30;
    person1.display();
    person1.run();

    Person *p = &person1;
    p->m_id = 10;
    p->m_age = 20;

    Person person2;
    person2.m_age = 20;
    person2.run_();

    // getchar();
    return 0;
}

// 每个应用都有自己独立的内存空间,其内存空间一般都有以下几大区域

// 代码段(代码区)
//   用于存放代码

// 数据段(全局区)
//   用于存放全局变量等

// 栈空间
//   每调用一个函数就会给它分配一段连续的栈空间,等函数调用完毕后会自动回收这段栈空间
//   自动分配和回收

// 堆空间
//   需要主动去申请和释放
// 


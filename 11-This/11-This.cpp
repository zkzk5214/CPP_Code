#include <iostream>
using namespace std;

struct Person{
    int m_age;

    void run(){
        cout << "Person::run()" << m_age << endl;
    }

    // 显示参数
    // void run_(Person *person){
    //     cout << "Person::run()" << person->m_age << endl;
    // }

    // 隐式参数
    void run_(){
        // this 指针存储着函数调用者的地址
        // this 指向了函数调用者
        // 不同对象调用同一个的函数,函数里面可以访问不同对象的成员
        cout << "Person::run()" << this-> m_age << endl; 

        m_age = 3; // 等价 this->m_age = 3;
        // 不可以利用this.m_age来访问变量,因为this是指针,必须用this->m_age
    }
};

int main(){

    Person person1;
    person1.m_age = 10; // 放在栈空间
    person1.run();

    Person person2;
    person2.m_age = 20;
    person2.run_();

    getchar();
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
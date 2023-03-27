#include <iostream>
using namespace std;

// 对象的内存可以存在于3种地方
// 全局区(数据段):全局变量
// 栈空间:函数里面的局部变量
// 堆空间:动态申请内存(malloc,new等)
struct Person{
    int m_id;
    int m_age;
    int m_height;
    

    void display(){
        cout << "id = " << m_id 
            << ", age = " << m_age
            << ", height = " << m_height << endl;
    }
};

// 全局区
Person g_person;

int main(){

    // 栈空间
    Person person;

    // 堆空间
    Person *p = new Person;

    // getchar();
    return 0;
}
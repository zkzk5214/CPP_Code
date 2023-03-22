#include <iostream>
using namespace std;

struct Person{
    // 多个成员变量, 对象内存的布局
    // 若类型不同, 内存分配采取内存对齐
    // 按照类的定义顺序去排布内存, 连续 4 个字节
    //                             |    内存地址 | 内存数据
    // eg. &person | &person.m_id  | 0x00E69B60 |   1
    //                               0x00E69B61
    //                               0x00E69B62
    //                               0x00E69B63
    //               &person.m_age | 0x00E69B64 |   2
    //                               0x00E69B65
    //                               0x00E69B66
    //                               0x00E69B67
    //            &person.m_height | 0x00E69B68 |   3
    //                               0x00E69B69
    //                               0x00E69B6A
    //                               0x00E69B6B
    int m_id;
    int m_age;
    int m_height;
    

    void display(){
        cout << "id = " << m_id 
            << ", age = " << m_age
            << ", height = " << m_height << endl;
    }
};

int main(){

    cout << sizeof(Person) << endl;

    // 此person对象内存在栈空间
    Person person;
    person.m_id = 1;
    person.m_age = 2;
    person.m_height = 3;

    cout << "&person == " << &person << endl;
    cout << "&person.m_id == " << &person.m_id << endl;
    cout << "&person.m_age == " << &person.m_age << endl;
    cout << "&person.m_height == " << &person.m_height << endl;
    
    return 0;
}
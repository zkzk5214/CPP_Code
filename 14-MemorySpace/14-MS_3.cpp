#include <iostream>
using namespace std;

// 探讨 堆空间会不会初始化
// memset函数是将较大的数据结构(比如对象,数组等)内存清理的比较快的方法
void test3(){
    // int *p =(int *) malloc(4);
    // *p = 0; // 初始化,有条件限制的,只能清零前4个
    int size = sizeof(int)*10; // 假设int为4个字节
    int *p =(int *) malloc(size);
    memset(p, 0, size); // 从这个地址开始,连续40个字节,都设置为0

    // 将4个字节设置为1
    // 00000000 00000000 00000000 00000001

    // 从p地址开始的连续4个字节中的每一个字节都设置为1
    // 00000001 00000001 00000001 00000001
    // memset(p, 1, 4);
    cout << *p << endl;
}

void test4(){
    int *p0 = new int;
    int *p1 = new int();
    int *p2 = new int(5); // 初始化为传进去的值
    int *p3 = new int[3]();
    // int *p5 = new int[3]{};
    // int *p6 = new int[3]{5}; // 数组的首元素被初始化为5,其他元素被初始化为0
    cout << *p0 << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;
}

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

int main(){

    // test3();
    // test4();
    // getchar();

    // Person person;
    // person.m_id = 1;
    // person.m_age = 20;
    // person.m_height = 180;
    // memset(&person,0,sizeof(person));

    Person person[] = {{1,20,180},{2,25,165},{3,27,170}};
    memset(&person,0,sizeof(person));


    return 0;
}
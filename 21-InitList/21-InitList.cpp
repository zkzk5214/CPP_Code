#include <iostream>
using namespace std;

// 1-特点
// 一种便捷的初始化成员变量的方式 (void不能类推)
// 只能用在构造函数中
// 初始化顺序只跟成员变量的声明顺序有关

// 2-如果函数声明和实现是分离的
// 初始化列表只能写在函数的实现中
// 默认参数只能写在函数的声明中

int func(){return 8;}

int myAge(){
    cout << "myAge()" << endl;
    return 10;
}

int myHeight(){
    cout <<"myHeight()"<<endl;
    return 12;
}

struct Person{
    int m_age;
    int m_height;

    // Person(int age,int height){
    //     m_age = age;
    //     m_height = height;
    // }

    //1-等价
    // Person(int age, int height):m_age(age), m_height(height){}

    //1-语法糖
    // Person(int age, int height):m_age(age+2), m_height(height){}
    // Person(int age, int height):m_age(func()), m_height(height){} // 8,180, age 没有被用到
    // Person(int age, int height):m_age(m_height), m_height(height){} // 乱码,180, 初始化顺序问题
    // Person(int age, int height):m_height(height), m_age(m_height){} // 180,乱码, 初始化顺序问题,根据成员变量定义顺序(地址值比较小的会被先初始化)(7/8行,交换即 180,180)
    // Person(int age, int height):m_height(myHeight()), m_age(myAge()){}

    Person(int age=0, int height=0):m_age(age), m_height(height){
        m_age = 10; // 先初始化,在执行此条,所以最后 m_age = 10
    }
};

// 2
struct Person1{
    int m_age;
    int m_height;
    Person1(int age=0, int height=0); // 函数的声明,默认参数只能写在声明里面
};

Person1::Person1(int age, int height):m_age(age), m_height(height){
    // 本质是在函数体里面插入代码
} // 函数的实现,初始化列表只能放在实现里面

void test(int v1 = 1, int v2 = 2){

}

int main(){

    Person person1;
    Person person2(17);
    Person person(18, 180);
    cout << person.m_age << endl;
    cout << person.m_height << endl;

    test(); // 本质相当于 test(1,2)
    // push 2
    // push 1

    // getchar();
    return 0;
}
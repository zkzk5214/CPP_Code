#include <iostream>
using namespace std;

// 1-引用类型成员变量必须初始化(不考虑static情况)
// 在声明的时候直接初始化
// 通过初始化列表初始化

class Car{
    int age;
    int &m_price = age;
public:
    Car(int &price): m_price(price){} 
};

int main(){

    // getchar();
    return 0;
}
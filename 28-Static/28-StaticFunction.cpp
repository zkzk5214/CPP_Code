#include <iostream>
using namespace std;

// 静态成员函数
// 1-内部不能使用this指针(this指针只能用在非静态成员函数内部)
// 2-不能是虚函数(虚函数只能是非静态成员函数)
// 3-内部不能访问非静态成员变量、函数,只能访问静态成员变量、函数
// 4-非静态成员函数内部可以访问静态成员变量、函数
// 5-构造函数、析构函数不能是静态(构造函数、析构函数只跟对象有关)
// 6-当声明和实现分离时,实现部分不能带static
class Car{
public:
    int m_age; // 普通的成员变量
    static int m_price; // 只占一份内存,相当于全局变量
    static void run(){
        cout << "run" << endl;
        m_price = 0;
        // this -> m_age = 10; // 1-类名去创建对象,不存在普通的成员变量
        // m_age = 0; // 3
        // test(); // 3-通过类去调用函数,没有Car对象,也就没有对象地址值传给test, 只能通过下两句来调用
        // Car car; // 3
        // car.test(); // 3
        other(); // 3
    }
    // virtual static void run(){ // 2-虚函数只允许对象去调用,静态成员函数允许类去调用
    //     cout << "run" << endl;
    // }
    static void other();

    void test(){
        this -> m_age = 10; 
        other(); // 4
        m_price = 10; // 4
    }
};

// 6
void Car::other(){}

// 初始化成员变量
int Car::m_price = 0; //静态成员变量要放在类外面去初始化

int main(){

    Car car;
    car.run();
    car.test();

    Car *p = &car;
    p-> run();

    Car::run(); 

    // getchar();
    return 0;
}
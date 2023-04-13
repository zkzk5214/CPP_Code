#include <iostream>
using namespace std;

// 拷贝构造函数是构造函数的一种(也会在对象创建的时候调用来初始化)
// 当利用已存在的对象创建一个新对象时(类似于拷贝),就会调用新对象的拷贝构造函数进行初始化
// 拷贝构造函数的格式是固定的,接受一个const引用作为参数

class Car{
    int m_price;
    int m_length;
public:
    Car(int price=0, int length=0):m_price(price),m_length(length){
        cout << "Car(int price=0, int length=0)" << endl;
    }

    Car(const Car &car):m_price(car.m_price),m_length(car.m_length){
        cout << "Car(const Car &car)" << endl;
    }

    void display(){
        cout << "price=" << m_price << ", length=" << m_length << endl;
    }
};

int main(){
    Car car1(100, 5); // Car(int price=0, int length=0)
    Car car2(car1); // Car(const Car &car)
    Car car3 = car2; // Car(const Car &car)
    Car car4; // Car(int price=0, int length=0)

    car4.display();

    // 构造函数是在初始化时调用,此代码并非创建新对象,则不会调用拷贝构造函数,仅仅是简单的赋值操作
    car4 = car3;

    car4.display();


    // getchar();
    return 0;
}
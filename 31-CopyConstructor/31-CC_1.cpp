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

    // 拷贝构造函数- car4调用此方法初始化
    // 此对象中会进行默认拷贝,因此无需调用此拷贝构造函数,除非有个性化要求
    // Car(const Car &car):m_price(car.m_price),m_length(car.m_length){
    //     cout << "Car(const Car &car)" << endl;
    //     // m_price = car.m_price;
    //     // m_length = car.m_length;
    // }

    void display(){
        cout << "price=" << m_price << ", length=" << m_length << endl;
    }
};

int main(){
    Car car1; // 构造函数在对象创建完之后就会调用
    Car car2(100);
    Car car3(100,5);

    // 利用已经存在的car3对象创建了一个car4新对象
    // car4初始化时会调用拷贝构造函数
    Car car4(car3); 
    // 即使不写拷贝构造函数(Car(const Car &car)),也能进行拷贝操作
    // (相等于car4.m_price=car3.m_price; car4.m_length=car3.m_length;)
    car4.display();
    // getchar();
    return 0;
}
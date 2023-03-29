#include <iostream>
using namespace std;

struct Car{
    int m_price;

    Car(){
        m_price = 0;
        cout << "Car::Car()"<<endl;
    }

    ~Car(){
        cout << "Car::~Car()"<<endl;
    }
};

struct Person{
private:
    int m_age;
    Car *m_car; // 此处被动回收的是Car的指针, 如果不是指针则都放在栈空间
public:
    // 用来做初始化的工作
    Person(){
        m_age = 0;
        m_car = new Car(); // new出来的对象放在堆空间,需要手动释放

        cout << "Person::Person()"<<endl;
    }
    // 用来做内存清理的工作
    ~Person(){
        // 对象内部申请的堆空间,由对象内部回收
        delete m_car; // 主动回收堆空间的对象内存
        cout << "Person::~Person()"<<endl;
    }
};


int main(){

    // 内存泄露:该释放的内存并没有得到释放
    // Car对象并没有主动回收
    {
        // case 1
        Person person; // 栈空间,内存自动回收,内部成员变量也会被回收
        // case 2
        Person *p = new Person();
    }

    // getchar();
    return 0;
}

// Case 1
//     栈空间                  堆空间
// |- - - - - - - -|     |- - - - - - -|
// |  Person对象p   |     |  Car 对象   | 
// |  (m_age)      |     |  (m_price)  |   
// |  (m_car)      |     |- - - - - - -|
// |- - - - - - - -|
// m_car 指向 m_price
// 栈空间被动回收,堆空间还在
// 用delete先主动回收堆空间,再被动回收栈空间

// Case 2
//     栈空间                  堆空间
// |- - - - - |    | - - - - - - - - - - - - - - - |
// | 指针变量p |    | |- - - - - |  |- - - - - -|   |
// |          |    | | Person对象|  |  Car 对象 |   |   
// |          |    | | (m_age)  |  | (m_price) |   | 
// |- - - - - |    | | (m_car)  |  |- - - - - -|   |
//                 | |- - - - - |                  |
//                 |- - - - - - - - - - - - - - - -|
// 指针变量p指向person对象, m_car 指向 m_price
// 指针变量不一定在栈空间
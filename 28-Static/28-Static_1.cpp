#include <iostream>
using namespace std;

class Person{
public:
    static int m_age; // 
};

int Person::m_age = 0;

class Student:public Person{
public:
    static int m_age;
};
int Student::m_age = 0;

class Car{
private:
    static int ms_count; // 全世界只有一份内存,(ms:static memeber)
public:
    Car(){
        // 严格来首,这里要考虑多线程安全问题
        ms_count++;
    }
    ~Car(){
        ms_count++;
    }
    static int getCount(){ // static function 可以通过类名访问
        return ms_count;
    }
};

int Car::ms_count = 0;
Car g_car;

int main(){

    // cout << &Student::m_age << endl;
    // cout << &Person::m_age << endl; // 注释掉12 13 15,则地址值一样

    Car car;
    Car *p = new Car();

    cout << Car::getCount() << endl;

    // getchar();
    return 0;
}
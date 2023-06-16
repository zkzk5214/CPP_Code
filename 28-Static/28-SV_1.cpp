#include <iostream>
using namespace std;
/*
Static Memeber
    1-Static Member: Member variable/function be declared by static
        can be done via 
        Object (Object.Static Member), 
        Object Pointer (Object Pointer -> Static Member),
        Class (Class Name::Static Member),
    2-Static Member Variable:
        2.1-Store in the Data Segment, has only one copy for the during 
            of the program.
        2.2-In contrast to global variable, it can set access permissions
            for local sharing.(public,protected,private)
        2.3-Must be initialized outside the class without static.
*/

class Car{
    int m_price;
    // Only one piece of memory and its equivalent to global variable
    static int ms_count; 
public:
    // Static function is accessible by the class name
    static int getCount(){
        return ms_count;
    }
    int getPrice(){
        return m_price;
    }
    Car(int price=0):m_price(price){
        // The safty of MultiThreading in this code is a concern.
        ms_count++;
    }
    ~Car(){
        ms_count--;
    }
};

// Initialization
int Car::ms_count = 0; // 2.3
Car g_car;

int main(){
    Car car(80); // 1
    cout << Car::getCount() << endl;
    Car *p = new Car(100); // 1
    cout << p->getCount() << endl;

    // Static member variable does not store in the object
    //  "delete" does not destory static member variable
    delete p; 

    // getchar();
    return 0;
}

#include <iostream>
using namespace std;

/*
1-Member variables are allocated each time an object is created
2-Each object created has its own member variable(individual)
3-There is only one copy of function in memory
4-Find a unique function to call from the memory address of the function(public)
    so if the function is not called when the object is created, it does not 
    occupy memory
5-Class can be destroyed, function cannot, so function memoery is not in the object
*/

class Car {
public:
    int m_price; 
    void run(){
        cout << "Car::run() "<< m_price << endl;
    }
};


int main(){
    Car car;
    car.m_price = 10;
    car.run();

    cout << sizeof(car) << endl; // 4 bytes: int m_price;
    cout << sizeof(Car) << endl;
    return 0;
}
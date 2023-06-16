#include <iostream>
using namespace std;
/*
Const member variable(Non-static):
    1-Const is written after the argument list, and 
        function prototype/definition must include const.
    2-Non-static member variables cannot be modified internally.
    3-Only const/static member function can be called internally. 
    4-Const member functions and non-const member functions 
        can overload each other. 
    5-Non-const object(pointer) call non-const member function first.
    6-Const object(pointer) can only call const member function 
        and static member function.
*/
class Car{
    const int m_price = 0;
public:
    void run() const;   // 1
    void test() const {
        // m_price = 0; // 2
        cout << "test() const" << endl;
    }
    void test(){        // 4
        cout << "test() " << endl;
    };
};

int main(){
    Car car;
    // Non-const object can call const member function 
    car.run();      
    car.test();     // 5

    const Car car2; 
    // 6-Const object cannot call non-const member function
    //  Slash void test() const{...} will cause error.
    car2.test();

    // getchar();
    return 0;
}

void Car::run() const {     // 1
    cout << "run() const" << endl;
}
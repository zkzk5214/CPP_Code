#include <iostream>
using namespace std;
/*
Static Function
    1-No "this" pointer inside(this pointer can only be used inside 
        non-static member function)
    2-Cannot be virtual
    3-No internal access to non-static member variables/functions
    4-Non-static member function have internal access to static member 
        variables/functions 
    5-Constructor/Destructor cannot be static(Constructor/Destructor 
        only related to object)
    6-When prototype and definition are separated, definition cannot 
        be static.
*/
class Car{
public:
    int m_age;
    static int m_price;
    static void run(){
        cout << "run" << endl;
        m_price = 0;
        // this -> m_age = 10; (X) 1
        // m_age = 0; (X) 3
        /*
        To call the function from the class, there is no Car object, so there is  
            no object address to pass to test.
        test(); (X)
        Car car; car.test(); (V)
        */ 
        other(); 
    }
    /* 
    Virtual function only allowed to be called by object, 
        static member function allowed to be called by class
    virtual static void run(){ 
        cout << "run" << endl;
    }
    */

    // Prototype
    static void other();

    void test(){
        this -> m_age = 10; 
        other();        // 4
        m_price = 10;   // 4
    }
};

// Initialization
int Car::m_price = 0;

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

// Definition
void Car::other(){}

#include <iostream>
using namespace std;
/*
Const member variable:
    1-Must be initialized(Intra-class Initialization), 
        can be initialized directly in function prototype.
    2-Non-static const member variables can also be initialized 
        in the initializer list.
*/
class Car{
public:
    const int m_price = 0; // 1
};

class Car1{
private:
    const int m_price; 
public:
    Car1():m_price(0){} // 2
};

int main(){
    Car car;
    cout << car.m_price << endl;
    
    Car1 car1;
    
    // getchar();
    return 0;
}
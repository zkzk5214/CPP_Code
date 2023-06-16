#include <iostream>
using namespace std;
/*
1-Reference type member variable must be initialized(regradless of "static")
    Initialize directly in the prototype.
    Initialize with an Initializer List.
*/

class Car{
    int age;
    int &m_price = age;
public:
    Car(int &price): m_price(price){} 
};

int main(){

    // getchar();
    return 0;
}
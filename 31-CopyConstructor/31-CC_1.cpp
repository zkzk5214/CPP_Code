#include <iostream>
using namespace std;
/*
Copy Constructor
    1-Copy constructor is a type of constructor.(also called 
        to initialize when the object is created)
    2-When a new object is created from an existing object
        (similar to a copy), the copy constrcutor of the new 
        object is called for initialization.
    3-The format of the Copy constructor is fixed and take a 
        "const" reference as an argument.
*/

class Car{
    int m_price;
    int m_length;
public:
    Car(int price=0, int length=0):m_price(price),m_length(length){
        cout << "Car(int price=0, int length=0)" << endl;
    }
    
    // The default copy takes place in this object, so there 
    //  is no need to call this copy constructor unless personalized.
    Car(const Car &car){
        cout << "Car(const Car &car)" << endl;
        this->m_price = car.m_price;
        this->m_length = car.m_length;
    }

    void display(){
        cout << "price=" << m_price << ", length=" << m_length << endl;
    }
};

int main(){
    // The constructor is called after the object is created
    Car car1; 
    Car car2(100);
    Car car3(100, 5);

    // Create car4 object from an existing car3 object
    // The copy constructor is called when car4 is initialized
    Car car4(car3); 
    // Copy operations can be performed without writing
    //  the copy constructor(Car(const Car &car)) eauql to 
    //  (car4.m_price=car3.m_price; car4.m_length=car3.m_length;)
    car4.display();

    // getchar();
    return 0;
}
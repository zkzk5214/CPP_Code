
#include <iostream>
using namespace std;

/*
Constructor: Called automatically when an object is created and are
        typically used to initialize an object.
    Property:
        1-Function name same as class, no return value(no void), 
            can take parameters, can be overloaded, can have multiple 
            constructors.
        2-Once custom constructor is defined, the object must be 
            initialized with one of the custom constructor.
    Attention:
        3-Constructor are not called for object allocated via malloc.
        4-Under certain conditions, the compiler generates empty,
            no argument constructors for each class.        
*/

struct Person{
    int m_age;
    int m_money;

    // Constructor
    Person(){
        m_age = 0;
        cout << "Person()" << endl;
    }

    // Constructor Overload
    Person(int age){
        m_age = age;
        cout << "Person(int age)" << endl; 
    }
    
    // Constructor Overload
    Person(int age, int money){
        m_age = age;
        m_money = money;
        cout << "Person(int age, int money)" << endl;
    }
    void display(){
        cout << "age is " << m_age << ", money is "<< m_money << endl;
    }
};

int main(){
    Person person1(10, 20);
    person1.display();
    
    Person person2(20);
    person2.display();
    person2.m_age = 0;
    person2.display();

    // getchar();
    return 0;
}

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
    Person(){
        cout << "Person_1::Person()" << endl;
    }
    void run(){
        cout << "Person_1::run() - " << m_age << endl;
    }
};

// 4
struct Person2{
    int m_age;
    // Person2(){

    // }
};


int main(){

    Person *p1 = (Person *) malloc(sizeof(Person)); // malloc 只申请堆空间
    p1 -> m_age = 10;
    p1 -> run();
    free(p1); 

    Person *p2 = new Person;
    delete p2;

    // 4
    Person2 person2;
    person2.m_age = 10;

    // getchar();
    return 0;
}
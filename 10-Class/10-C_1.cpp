#include <iostream>
using namespace std;

/*
    1-C++ classes can be defined using struct or class.
    2-Difference between struct and class:
        2.1-Default member variable of struct is public(accessible outside)
        2.2-Default member variable of class is private
        2.3-struct = class+public, class = struct+private
        2.4-use class instead of struct to define classes
        2.5-Struct can still be defined as class, Compatible with C
    3-C++ programming conventions, variable name specification reference:
        3.1-Global Variable: g_
        3.2-Member Variable: m_
        3.3-Static Variable: s_
        3.4-Constant: c_
        3.5-Use Camel-Case 
*/

class Person_c{
    // Default private. If specified pulic, can accessible outside
    // person_c object occupies 4 bytes(int m_age;)
public:
    int m_age;      // Member variable
    void run(){     // Member function
        cout << m_age << " - Person_c::run()"<< endl;
    }
};

struct Person_s {
    // Default public. If specified private, cannot accessible outside
    int m_age;      // Member variable
    void run(){     // Member function
        cout << m_age << " - Person_s::run()" << endl;
    }
};

void test(){ 
    Person_c person;
    person.m_age = 10;
    person.run();
}

int main(){

    // Create object from class
    Person_c person;
    // Access the member variables of person object
    person.m_age = 10;      // Assign a value to a member variable
    // Calling a member function with person object
    person.run();

    // Person object is accessed indirectly via a pointer *p
    Person_c *p = &person;  // The type on right-hand side is Person_c
    p -> m_age = 20;
    p -> run(); 
    // The memory for pointer p and person object is automatically allocated and 
    // reclaimed from the function stack space

    test();

    return 0;
}
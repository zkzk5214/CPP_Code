#include <iostream>
using namespace std;
/*
    Combine list initialization with default parameters
    1-If function prototype and definition are separated
        default paramters can only be written in function prototype
        list initialization can only be written in function definition.
        
*/
struct Person{
    int m_age;
    int m_height;
    Person(int age=0, int height=0):
        m_age(age), m_height(height){}
};

// Function Prototype
struct Person_{
    int m_age;
    int m_height;
    Person_(int age=0, int height=0); // Default Parameters
};

int main(){
    Person person1;
    Person person2(17);
    Person person(18, 180);
    cout << person.m_age << endl;
    cout << person.m_height << endl;

    // getchar();
    return 0;
}

// Function Definition (Inserts code inside the function body)
Person_::Person_(int age, int height):m_age(age), m_height(height){
} // List Initialization

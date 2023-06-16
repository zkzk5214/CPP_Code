#include <iostream>
using namespace std;
/*
    Initializer List
        1-A convenient way to initialize a member variable
            (not void type)
        2-Can only be used in constructor
        3-Initialization order only depends on the order in which
            member variables are declared.
*/ 

struct Person{
    int m_age;
    int m_height;
    Person(int age,int height){
        this->m_age = age;
        this->m_height = height;
    }
};

struct Person_{
    int m_age;
    int m_height;
    Person_(int age,int height):m_age(age), m_height(height){}
};

int main(){
    Person person(18, 180);
    // cout << person.m_age << endl;
    // cout << person.m_height << endl;

    Person_ person_(18, 180); // Equal
    cout << person_.m_age << endl;
    cout << person_.m_height << endl;

    // getchar();
    return 0;
}
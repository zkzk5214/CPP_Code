#include <iostream>
using namespace std;

int myAge(){
    return 10;
}

int myHeight(){
    return 170;
}

struct Person{
    int m_age;
    int m_height;

    Person(int age, int height):
        m_height(myHeight()), m_age(myAge()){}
};

struct Person_{
    int m_age;
    int m_height;

    Person_(int age, int height):
        m_height(height), m_age(m_height){}
};

int main(){

    Person person(20, 180);
    // cout << person.m_age << endl;    // 10
    // cout << person.m_height << endl; // 170

    Person_ person_(20, 180);
    /* 
    Problem of initialization order, according to the 
        member variable definition order(smaller address 
        is initialized first), if swap int m_age with 
        int m_height, person_.m_age and person_.m_height are
        both 180.
    */
    // cout << person_.m_age << endl;      // Gibberish
    // cout << person_.m_height << endl;   // 180

    // getchar();
    return 0;
}
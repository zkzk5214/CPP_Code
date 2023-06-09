#include <iostream>
using namespace std;
/*
    Member variable initialization by default.
        If a custom constructor is defined, the member variable of the memory  
    space other than the global area are not initialized by default, so the 
    developer has to initiazlie them manually.(except clang)
*/
struct Person{
    int m_age;
};

struct Person1{
    int m_age;
    Person1(){}
};

struct Person2{
    int m_age;
    // "this" pointer points to the caller of the function
    Person2(){
        memset(this, 0, sizeof(Person2));
    }
};

// Global Area(member variables initialized to 0)
Person g_person;
Person1 g_person1;

int main(){
    // cout << g_person.m_age << endl; // 0
    // cout << g_person1.m_age << endl; // 0

    // Stack(member variables are not initialized)
    Person person;
    // cout << person.m_age << endl;

    // Heap(member variables initialize to 0)
    Person *p00 = new Person; 
    Person *p01 = new Person();
    // cout << p00->m_age << endl;
    // cout << p01->m_age << endl;
    Person1 *p10 = new Person1; 
    Person1 *p11 = new Person1(); 
    // cout << p10->m_age << endl;
    // cout << p11->m_age << endl;
    Person *p02 = new Person[3]; 
    Person1 *p12 = new Person1[3];
    // cout << p02->m_age<<endl;
    // cout << p12->m_age<<endl;
    Person *p03 = new Person[3](); 
    Person *p04 = new Person[3]{};
    // cout << p03->m_age<<endl;
    // cout << p04->m_age<<endl;
    // getchar();
    return 0;
}
#include <iostream>
using namespace std;
// Default condition, member variable initialization
struct Person{
    int m_age;
};

// Global Area(Member variable initialize to 0)
Person g_p1;

int main(){
    // Stack(Member variable not initialized)
    Person p1; // 调用Person()
    // Heap
    Person *p2 = new Person;        // Member variable not initialized
    Person *p3 = new Person();      // Member variable initialize to 0
    Person *p4 = new Person[3];     // Member variable not initialized
    Person *p5 = new Person[3]();   
    // Each of the three Person object member variables is initialized to 0 
    Person *p6 = new Person[3]{};
    // Each of the three Person object member variables is initialized to 0
    
    // getchar();
    return 0;
}
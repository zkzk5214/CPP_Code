#include <iostream>
using namespace std;

/*
Object memory layout 
    1-Member variables inherited from the Superclass are arranged before the address in memory. 
    2-If the variable in Superclass is not allocated, memory is wasted.
*/
struct Person{  // Superclass
    int m_age;
};
struct Student:Person{ // Subclass 
    int m_no;
};
struct GoodStudent:Student{ // Subclass 
    int m_score;
};

int main(){
    // Person person; // 4 bytes
    // Student stu; // 8 bytes
    GoodStudent gs; // 12 bytes
    cout << sizeof(gs) << endl;
 
    gs.m_age = 20;
    gs.m_no = 1;
    gs.m_score = 666;

    // Address of m_age in Superclass Person
    // Address of Superclass member variable comes first, Subclass member variable comes last.
    cout << &gs.m_age <<endl; 
    cout << &gs.m_no <<endl;
    cout << &gs.m_score <<endl;

    // getchar();
    return 0;
}
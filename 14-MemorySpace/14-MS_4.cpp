#include <iostream>
using namespace std;
/*
Memory of object
    live in three spaces:
        Data Segment: Global Variable
        Stack: Local Variable inside the function
        Heap: dynamiclly request memory (malloc, new, etc.)
*/

struct Person{
    int m_id, m_age, m_height;
    
    void display(){
        cout << "id = " << this->m_id 
            << ", age = " << this->m_age
            << ", height = " << this->m_height << endl;
    }
};

Person g_person; // Data Segment

int main(){
    Person person;          // Stack
    Person *p = new Person; // Heap

    // getchar();
    return 0;
}
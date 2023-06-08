#include <iostream>
using namespace std;

/*
    1-"this" is the pointer to the current object.
    2-When an object calls a member function, it is automatically passed 
            the memory address of the current object.
    3-"this" pointer stores the address of the function caller
    4-"this" point to the function caller
    5-Different objects call the same function, which can access
            the member of different objects 
    6-How to use pointer to indirectly access the member variable of the 
            pointed object?
        6.1-Retrieve the address of the object from the pointer
        6.2-Use the address of the object + the offset of the member 
            variable to calculate the address of the member variable
        6.3-Access the storage space of member variable based on their
            addresses
*/ 

struct Person{
    int m_id;
    int m_age;
    int m_height;

    void run(){
        cout << "Person::run() " << m_age << endl;
    }

    // Explicit argument
    // void run_(Person *person){
    //     cout << "Person::run() " << person->m_age << endl;
    // }

    // Implicit argument
    void run_(){
        cout << "Person::run() " << this-> m_age << endl; 
        m_age = 3; // this->m_age = 3;
        // Cannot use this.m_age to access the variable, cuz "this" 
        // pointer must use this->m_age
    }

    void display(){
        cout << "id = " << this->m_id 
            << ", age = " << this->m_age
            << ", height = " << this->m_height << endl;
    }
};


int main(){

    Person person1;
    // Store in the stack space
    person1.m_id = 10;
    person1.m_age = 20; 
    person1.m_height = 30;
    person1.display();
    person1.run();

    Person *p = &person1;
    p->m_id = 10;
    p->m_age = 20;

    Person person2;
    person2.m_age = 20;
    person2.run_();

    // getchar();
    return 0;
}

/*
A typical memory representation of a C program consists of the 
    following sections.

    1-Text Segment(Code Segment)
        Contains executable instructions. Usually, Text segment is 
    sharable and hence only a single copy exists as well as its 
    read-only.

    2-Data Segment
        Divided into two parts
    2.1-Initialized Data Segment
        Contains Global and static variables that are initialized. 
    Its not a read-only segment and hence the values can be modified.
    2.2-Uninitialized Data Segment
        This is usually called BSS(Block Started by Symbol) segment.
        Data in this segment are initialized by the kernel to 0 before 
    the program starts execution. This comes after the initialized Data 
    segment in memory.
        For instance, a variable declared static int i; would be contained 
    in the BSS segment. 

    4-Heap
        Here dynamic memory allocation takes place.
        Need to take the initiative to allocate and release. 

    5-Stack(LIFO)
        Temporary variables are stored in this area. The virtual pointer 
    is also stored here.
        Stack Frame: A set of values pushed for one function call is 
    called Stack Frame.
        Automatically allocate and release.
        Each time a function is called, it is allocated a contiguous chunk
    of stack space, and released automatically when the function is deconstruction.
*/

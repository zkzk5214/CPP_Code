#include <iostream>
using namespace std;

/*
    The nature of pointer access object members:

    1)
        ip: The register pointer points to the address of 
    the next machine instruction to be executed.
        ip+= The size of the machine instruction that has
    just been executed
        Calling the function to execute the function code is 
    actually the cpu accessing the memory(instruction) in the
    Code Segment.

    2)
        When the function is called, additional storage needs 
    to be allocated to hold the local variables inside the 
    function.
        Function code store in the Code Segment.
        Local variables store in the Stack.
*/ 
struct Person{
    int m_id;
    int m_age;
    int m_height;

    void display(){
        cout << "id = " << this->m_id 
            << ", age = " << this->m_age
            << ", height = " << this->m_height << endl;
    }
};

int main(){

    Person person1;
    person1.m_id = 10;
    person1.m_age = 20;
    person1.m_height = 30;

    // The compiler takes the address of m_age as the first address 
    //      of "person1" to assign the value
    Person *p = (Person *) &person1.m_age;
    p->m_id = 40;       // the address of m_id is actually m_age
    p->m_age = 50;      // the address of m_age is actually m_height
    person1.display();  // 10; 40; 50, 
    /*
    The member function called has different address.
    Pass the address of "person1" to "this" of the display function.
    Pass &person1.m_age to "this" of the display function.
    p->m_id = 40;
    mov eax,  dword ptr [p]
    mov dword ptr [eax+0], 40
    mov dword ptr [&person+4+0], 40
    p->m_age = 50;
    mov dword ptr [eax+4], 50
    mov dword ptr [&person+4+4], 50
    */

    p->display(); 
    /*
    Pointer indirectly calls function and pass the address stored in 
        pointer p to "this" of the display function.

    eax == &person.m_age == &person+4
    mov eax,  dword ptr [this]
    [eax], [eax+4], [eax+8]
    [&person+4], [&person+8], [&person+12](OOB)
    */

    // getchar();
    return 0;
}


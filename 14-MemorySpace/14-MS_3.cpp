#include <iostream>
using namespace std;
/*
Heap Initialization
    memset() is used to fill a block of memory with a particular value,
        and is also a fast method to clean up the memory of larger data 
        structures(object,arrays, etc.)
        
    void *memset(void *ptr, int x, size_t n);
    ptr ==> Starting address of memory to be filled
    x   ==> Value to be filled
    n   ==> Number of bytes to be filled starting from ptr to be filled
    
*/

void test4(){
    // int *p =(int *) malloc(4);
    // *p = 0; // Only the first 4 bytes can be reset

    int size = sizeof(int)*10; // int is 4 bytes
    int *p =(int *) malloc(size);
    // Starting at the start address of p, 
    // consecutive 40 bytes are set to 0.
    memset(p, 0, size); 
    // cout << *p << endl;

    // Set four bytes to 1
    // 00000000 00000000 00000000 00000001

    // Starting at the start address of p,
    // each first byte of each consecutive bytes set to 1
    // 00000001 00000001 00000001 00000001
    // memset(p, 1, 4);
}

void test5(){
    int *p0 = new int;      // Uninitialized
    int *p1 = new int();    // Initialize to 0
    int *p2 = new int(5);   // Initialize to 5
    int *p3 = new int[3];   // Array is uninitialized
    int *p4 = new int[3](); // Array is initialize to 0
    int *p5 = new int[3]{}; // Array is initialize to 0
    // The first element of this array is initialized to 5, 
    // and all other elements are initialized to 0
    int *p6 = new int[3]{5};
    cout << *p0 << *p1 << *p2 << *p3 << *p4 << *p5 << *p6 << endl;
}

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
    test4();
    test5();

    Person person;
    person.m_id = 1;
    person.m_age = 20;
    person.m_height = 180;
    memset(&person, 0, sizeof(person));

    Person persons[] = { {1,20,180}, {2,25,165}, {3,27,170} };
    memset(&persons, 0, sizeof(persons));
    return 0;
}
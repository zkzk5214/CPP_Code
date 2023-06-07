#include <iostream>
using namespace std;

struct Person{
    int m_id;
    int m_age;
    int m_height;
    
    void display(){
        cout << "id = " << m_id 
            << ", age = " << m_age
            << ", height = " << m_height << endl;
    }
};

int main(){
    // This person object is stored on the stack space 
    Person person;
    person.m_id = 1;
    person.m_age = 2;
    person.m_height = 3;

    cout << sizeof(Person) << endl; // 12
    cout << "&person == " << &person << endl;
    cout << "&person.m_id == " << &person.m_id << endl;
    cout << "&person.m_age == " << &person.m_age << endl;
    cout << "&person.m_height == " << &person.m_height << endl;
    
    return 0;
}

/*
Multi member variables, object memory layout
    If the types are different, memory allocation is aligned
    Arrange the memory in the order in which the class is defined with 
        four consecutive bytes

                                | Memory Address  | Memory Data
    eg. &person | &person.m_id  | 0x7ff7b43c12f0  |   1
                                  0x7ff7b43c12f1
                                  0x7ff7b43c12f2
                                  0x7ff7b43c12f3
                  &person.m_age | 0x7ff7b43c12f4  |   2
                                  0x7ff7b43c12f5
                                  0x7ff7b43c12f6
                                  0x7ff7b43c12f7
               &person.m_height | 0x7ff7b43c12f8  |   3
                                  0x7ff7b43c12f9
                                  0x7ff7b43c12fa
                                  0x7ff7b43c12fb
*/

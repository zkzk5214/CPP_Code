#include <iostream>
using namespace std;
/*
    1-Subclass constructor calls Superclass's non-parameter constructor by default.
    2-If Subclass constructor explicitly calls Superclass parameterized constructor, 
        it will not default to calling Superclass's non-parameter constructor.
    3-If Superclass lacks a non-parameter constructor, Subclass constructor must 
        explicitly call Superclass's parameter constructor.
*/

class Person{
    int m_age;
public:
    Person():Person(0){}
    Person(int age): m_age(age){}
};

// 3
class Student:Person{
    int m_no;
public:
    /*
    The constructor calls the constructor. 
    Subclass constructor calls superclass constructor to initialize 
        superclass member variables.
    */
    Student():Student(0,0){}
    Student(int age, int no): Person(age), m_no(no){} 
};

int main(){
    Student student(15, 90);

    // getchar();
    return 0;
}
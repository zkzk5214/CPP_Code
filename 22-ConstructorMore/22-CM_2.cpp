#include <iostream>
using namespace std;
/*
    1-Subclass constructor calls Superclass's non-parameter constructor by default.
    2-If Subclass constructor explicitly calls Superclass parameterized constructor, 
        it will not default to calling Superclass's non-parameter constructor.
    3-If Superclass lacks a non-parameter constructor, Subclass constructor must 
        explicitly call Superclass's parameter constructor.
*/

struct Person{
    Person(){
        cout << "Person::Person()" << endl;
    }
    Person(int age){
        cout << "Person::Person(int age)" << endl;
    }
};
// 1
struct Student_:Person{
    int m_no;
    Student_(){ // call Person()
        cout << "Student::Student()" << endl;
    }
};
// 2
struct Student:Person{
    int m_no;
    Student():Person(10){ // call Person(int age)
        cout << "Student::Student()" << endl;
    }
};

int main(){
    Student student;
    Student_ student_;
    
    // getchar();
    return 0;
}
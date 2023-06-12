#include <iostream>
using namespace std;

/*
    Inheritance, allows a Subclass to have all the 
    members(variables, functions) of its Superclass
    cpp have no Baseclass like Java(java.lang.Object), OC(NSObject)
*/ 

struct Person{  // Superclass
    int m_age;
    void run(){
        cout << "Person::run()" << endl;
    } 
};
struct Student:Person{ // Subclass 
    int m_score;
    void study(){}
};
struct Worker:Person{ // Subclass 
    int m_score;
    void salary(){}
};


int main(){
    Student student;
    student.m_age = 20;
    student.run();

    // getchar();
    return 0;
}
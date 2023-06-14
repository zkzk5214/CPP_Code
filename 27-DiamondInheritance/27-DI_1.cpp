#include <iostream>
using namespace std;
/*
    The diamond problem 
    The diamond problem occurs when two superclasses of a class have a 
        common base class. 
    The Bottom subclass gets two copies of all attributes of base class, 
        this causes ambiguities.
*/

class Person{
    int m_age;
};

class Student:public Person{
    // int m_age; From Person
    int m_score;
};

class Worker:public Person{
    // int m_age; From Person
    int m_salary;
};

class Undergraduate:public Student, public Worker{
    // int m_age; From Student(Inherit Student first)
    // int m_score; From Student
    // int m_age; From Worker
    // int m_salary; From Worker
    int m_grade;
};

int main(int argc, char const *argv[]) {
    Undergraduate ug;
    cout << sizeof(ug) << endl; // 20 bytes
   
    // getchar();
    return 0;
}

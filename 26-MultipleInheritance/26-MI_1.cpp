#include <iostream>
using namespace std;
/*
Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.  
The constructors of inherited classes are called in the same order in which they are inherited. 
A class can be derived from more than one base class.
Eg: 
(i) A CHILD class is derived from FATHER and MOTHER class
(ii) A PETROL class is derived from LIQUID and FUEL class.
*/

class Student{
public:
    int m_score;
    // Student(int score):m_score(score){}
    void study(){
        std::cout << "Student::study() - score = " << m_score << '\n';
    }
};

class Worker{
public:
    int m_salary;
    // Worker(int salary):m_salary(salary){}
    void work(){
        std::cout << "Worker::work() - m_salary = " << m_salary << '\n';
    }
};

class Undergraduate : public Student, public Worker{
public:
    int m_grade;
    // Undergraduate(int score, int salary, int grade):m_grade(grade), 
    //     Student(score), // When member variables are private，cannot use m_score(score)
    //     Worker(salary){} // Multiple inheritance constructor calls
    void play(){
        std::cout << "Undergraduate::play() - grade" << m_grade << '\n';
    }
};


int main(int argc, char const *argv[]) {
    Undergraduate ug; 
    // 12bytes = 4(Undergraduate)+4(Worker)+4(Student)
    // Student is inherited first, the memory address of Student comes first
    // and the Worker comes second.
    
    ug.m_score = 100;
    ug.m_salary = 2000;
    ug.m_grade = 4;
    ug.study();
    ug.work();
    ug.play();

    return 0;
}
